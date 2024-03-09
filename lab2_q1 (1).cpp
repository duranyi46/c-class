#include <stdio.h>
#include <math.h>

int main()
{
	int ch1, ch2;
// Define variables ch1 and ch2 as integer
 	printf("Enter the first character:\n");
// Text to display while getting input
 	ch1=getchar();
// Input of ch1 (as integer)
 	getchar();
// For 'Enter' to next step
 	printf("Enter the second character:\n");
// Text to display while getting input
 	ch2=getchar();
// Input of ch2 (as integer)
 	printf("Geometric Mean of %c and %c is: %.2f", ch1, ch2, sqrt(ch1*ch2));
// For display to ch1 and ch2 as characters, then display geometric mean of ch1 and ch2
	return 0;
// Close program
}
