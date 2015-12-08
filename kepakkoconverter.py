#!/usr/bin/env python3
import PIL
import sys
from PIL import Image

LED_COUNT = 60


def resize_image(path):
    img = Image.open(path)
    old_width = img.size[0]
    old_height = img.size[1]
    ratio = float(LED_COUNT)/old_height
    return img.resize((int(old_width*ratio), int(old_height*ratio)),
                      PIL.Image.ANTIALIAS)


def reduce_palette(img):
    """
    Reduces palette to 256 colors.
    """
    return img.convert('P', dither=Image.FLOYDSTEINBERG,
                       palette=Image.ADAPTIVE, colors=256)


def get_palette_grouped(img):
    """
    Returns the img palette as list of rgb values.
    """
    palette = img.getpalette()
    return zip(*(iter(palette),) * 3)



def print_matrix(img):
    """
    Arduino matrices can be defined like this:

    byte my2dArray[2][3]={
        {1, 2, 3},
        {2, 3, 4}
    };
    """
    palette = get_palette_grouped(img)
    rgb = ["{{{0}, {1}, {2}}}".format(*color) for color in palette]
    palette_size = len(rgb)
    pal_size_decl = "const int PALETTE_SIZE = {0};".format(palette_size)
    pal_decl = "const RGB PALETTE[PALETTE_SIZE] PROGMEM = {{{0}}};".format(
        ",\n".join(rgb))
    pixels = img.getdata()
    pixels_size = len(pixels)
    image_height_decl = "const int IMAGE_HEIGHT = {0};".format(LED_COUNT)
    image_width_decl = "const int IMAGE_WIDTH = {0};".format(
        int(pixels_size / LED_COUNT))
    pixels_size_decl = "const int IMAGE_SIZE = {0};".format(pixels_size)
    pixels_as_str = ",\n".join(str(pixel) for pixel in pixels)
    pixels_decl = "const byte PIXELS[IMAGE_SIZE] PROGMEM = {{{0}}};".format(
        pixels_as_str)
    print("\n".join([pal_size_decl, pal_decl, image_height_decl,
                     image_width_decl, pixels_size_decl, pixels_decl]))

if __name__ == "__main__":
    image_path = "img/grin.png"
    if len(sys.argv) > 1:
        image_path = sys.argv[1]

    img = resize_image(image_path)
    img_converted = reduce_palette(img)
    img_converted.show()

    print_matrix(img_converted)
