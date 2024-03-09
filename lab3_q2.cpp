#include <stdio.h>
#include <math.h>
#define PI 3.141593

int main()
{
	int a, b;
	double gamma = 55; // define gamma in degrees
	a = 5; // define side a
	b = 7; // define side b
	double gamma_rad = 55 * (PI/180); // converting angle gamma to rad gamma
	double c_square = (a*a + b*b) - (2 * a * b * cos(gamma_rad)); // find c^2 using law of cosines
	double c = sqrt(c_square); // find c from c^2
	printf("Length of side c is %f cm\n", c); // print side c
	double alpha, beta; // define alpha and beta 
	alpha = asin( a * sin(gamma_rad) / c ); // calculating radius alpha using law of sines
	beta = asin( b * sin(gamma_rad) / c); // calculating radius beta using law of sines
	double alpha_deg = alpha * (180/PI); // converting alpha to degrees
	double beta_deg = beta * (180/PI); // converting beta to degrees
	printf("Angle alpha in degrees is %.2f\n Angle beta in degrees is %.2f", alpha_deg, beta_deg); // print alpha and beta as degrees.
	return 0 ;
	
}
