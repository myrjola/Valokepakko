/*
* This code is basically from here: http://rosettacode.org/wiki/Percentage_difference_between_images#Java
* we modified the code to handle several pics and print percentages suitable for us
*
*
*/


import java.awt.image.BufferedImage;
import javax.imageio.ImageIO;
import java.io.IOException;
import java.net.URL;
import java.io.File;
 
public class ImgDiffPercent
{
  public static void main(String args[])
  {
    BufferedImage img1 = null;
    BufferedImage img2 = null;
    BufferedImage img3 = null;
    BufferedImage img4 = null;
    BufferedImage img5 = null;
    BufferedImage img6 = null;
    BufferedImage img7 = null;
    BufferedImage img8 = null;
    BufferedImage img9 = null;
    BufferedImage img10 = null;
    BufferedImage original = null;
    BufferedImage[] images = new BufferedImage[10];

    //change imageFiles to match wanted images
    try {
      original = ImageIO.read(new File("coriginal.jpg"));
      img1 = ImageIO.read(new File("cimg1.jpg"));
      img2 = ImageIO.read(new File("cimg2.jpg"));
      img3 = ImageIO.read(new File("cimg3.jpg"));
      img4 = ImageIO.read(new File("cimg4.jpg"));
      img5 = ImageIO.read(new File("cimg5.jpg"));
      img6 = ImageIO.read(new File("cimg6.jpg"));
      img7 = ImageIO.read(new File("cimg7.jpg"));
      img8 = ImageIO.read(new File("cimg8.jpg"));
      img9 = ImageIO.read(new File("cimg9.jpg"));
      img10 = ImageIO.read(new File("cimg10.jpg"));
      images[0] = img1;
      images[1] = img2;
      images[2] = img3;
      images[3] = img4;
      images[4] = img5;
      images[5] = img6;
      images[6] = img7;
      images[7] = img8;
      images[8] = img9;
      images[9] = img10;
      
    } catch (IOException e) {
      e.printStackTrace();
    }
    
    	
    for(int y = 0; y < 10; y++) {
    	int width1 = images[y].getWidth(null);
	    int width2 = original.getWidth(null);
	    int height1 = original.getHeight(null);
	    int height2 = original.getHeight(null);
	    if ((width1 != width2) || (height1 != height2)) {
	      System.err.println( "Error: Images dimensions mismatch");
	      System.exit(1);
	    }
	    long diff = 0;
		for (int i = 0; i < height1; i++) {
    		for (int j = 0; j < width1; j++) {
    			
    			int rgb1 = images[y].getRGB(j, i);
    			int rgb2 = original.getRGB(j, i);
    			int r1 = (rgb1 >> 16) & 0xff;
    			int g1 = (rgb1 >>  8) & 0xff;
    			int b1 = (rgb1      ) & 0xff;
    			int r2 = (rgb2 >> 16) & 0xff;
    			int g2 = (rgb2 >>  8) & 0xff;
    			int b2 = (rgb2      ) & 0xff;
    			diff += Math.abs(r1 - r2);
    			diff += Math.abs(g1 - g2);
    			diff += Math.abs(b1 - b2);
    		}
    	}
		double n = width1 * height1 * 3;
	    double p = diff / n / 255.0;
	    System.out.println("Image " + y + ": ");
	    System.out.println("original; " + (p * 100.0));
    	
    	for(int x = 0; x < 10; x++) {
    		if(images[x] != images[y]) {
    			int widtha = images[y].getWidth(null);
    		    int widthb = images[x].getWidth(null);
    		    int heighta = images[y].getHeight(null);
    		    int heightb = images[x].getHeight(null);
    		    if ((widtha != widthb) || (heighta != heightb)) {
    		      System.err.println("Error: Images dimensions mismatch");
    		      System.exit(1);
    		    }
    		    
    			diff = 0;
    			for (int i = 0; i < heighta; i++) {
    	    		for (int j = 0; j < widtha; j++) {
    	    			
    	    			int rgb1 = images[y].getRGB(j, i);
    	    			int rgb2 = images[x].getRGB(j, i);
    	    			int r1 = (rgb1 >> 16) & 0xff;
    	    			int g1 = (rgb1 >>  8) & 0xff;
    	    			int b1 = (rgb1      ) & 0xff;
    	    			int r2 = (rgb2 >> 16) & 0xff;
    	    			int g2 = (rgb2 >>  8) & 0xff;
    	    			int b2 = (rgb2      ) & 0xff;
    	    			diff += Math.abs(r1 - r2);
    	    			diff += Math.abs(g1 - g2);
    	    			diff += Math.abs(b1 - b2);
    	    		}
    	    	}
    			 n = widtha * heighta * 3;
    		     p = diff / n / 255.0;
    		    System.out.println(x + "; " + (p * 100.0));
    		}
    	}
    	
    }
    
  }
}