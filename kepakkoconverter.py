#!/usr/bin/env python3
import PIL
import sys
from PIL import Image

LED_COUNT = 60


def resize_image(path):
    img = Image.open(path)
    old_width = img.size[0]
    old_height = img.size[1]
    ratio = 60.0/old_height
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
    pal_decl = "byte palette[{0}][3] = {{{1}}};".format(len(rgb),
                                                        ",\n".join(rgb))
    pixels = img.getdata()
    pixels_as_str = ",\n".join(str(pixel) for pixel in pixels)
    pixels_decl = "byte pixels[{0}] = {{{1}}};".format(len(pixels),
                                                       pixels_as_str)
    print("\n".join([pal_decl, pixels_decl]))

if __name__ == "__main__":
    image_path = "img/grin.png"
    if len(sys.argv) > 1:
        image_path = sys.argv[1]

    img = resize_image(image_path)
    img_converted = reduce_palette(img)

    print_matrix(img_converted)
