#include "Mandelbrot.h"

void Mandelbrot::gen_fractal()
{
	
	int height = get_height(), width = get_width();
int i, npixels = height*width;
for (i = 0; i<npixels; i++)
{   
	
double z_r=0, z_i=0;

double z_temp;
    int x = i%height;
    int y = i/height;
	double c_r = (((double)x)/width)*3.0 - 2.25;
    double c_i = (((double)y)/height)*3.0 - 1.5;


int n = 1;
int max_iter = 10000;
while ((pow(z_r,2)+pow(z_i,2)) < 4 && (n < max_iter))
{      z_temp= pow(z_r,2) - pow(z_i,2) + c_r;//*
       z_i = z_r*z_i*2 + c_i;
       z_r = z_temp;
    	n++;
}

	        unsigned char r = (unsigned char)(pow(n/10000.0, 0.6)*100);
			unsigned char g = (unsigned char)(pow(n/10000.0, 0.5)*10);
			unsigned char b = (unsigned char)(pow(n/10000.0, 0.3)*225);
			 int alpha;
if (n<max_iter)
{	
         	
           
			m_bitmap[y*m_height*4 + x*4 + 0] = r; // R
			m_bitmap[y*m_height*4 + x*4 + 1] = g; // G
			m_bitmap[y*m_height*4 + x*4 + 2] = b; // B
			m_bitmap[y*m_height*4 + x*4 + 3] = 255;
		
}
else
{
			r = 0;
			g = 0;
			b = 0;
			alpha = 255;
}

	




	

	


			}
		}
	

