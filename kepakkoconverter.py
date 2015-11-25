#!/usr/bin/env python3
import PIL
from PIL import Image

LED_COUNT = 60


def resize_image(path):
    img = Image.open(path)
    old_width = img.size[0]
    old_height = img.size[1]
    ratio = 60.0/old_height
    return img.resize((int(old_width*ratio), int(old_height*ratio)),
                      PIL.Image.ANTIALIAS)

def print_matrix(img):
    """
    Arduino matrices can be defined like this:

    byte my2dArray[2][3]={
        {1, 2, 3},
        {2, 3, 4}
    };
    """
    pixels = img.getdata()
    rgb = ["{{{0}, {1}, {2}}}".format(*pixel) for pixel in pixels]
    declaration = "byte pixels[{0}][3] = {{{1}}};".format(len(pixels),
                                                          ",\n".join(rgb))
    print(declaration)

if __name__ == "__main__":
    print_matrix(resize_image("img/grin.png"))
