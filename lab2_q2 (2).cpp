#include <stdio.h>
#include <math.h>

int main()
{
	int dp1,dp2,dp3,dp4;
// Define variables dp1,dp2,dp3,dp4 coordinates as integer
	printf("Enter the first point:\n");
// Text to display while getting input
	dp1 = getchar();
	dp2 = getchar();
// Input of first coordinate points
	getchar();
// For 'Enter' to next coordinate point
	printf("Enter the second point:\n");
// Text to display while getting input
	dp3 = getchar();
	dp4 = getchar();
// Input of second coordinate points	
	float dis;
// Define distance as float
	dis = sqrt( pow(dp1-dp3,2) + pow(dp2-dp4,2));
// Calculate Euclidean Distance with given inputs
	printf("The distance between points (%c,%c) and (%c,%c) is %.3f",dp1,dp2,dp3,dp4,dis);
// Display coordinate points as characters, then display distance as float with desired decimals
	return 0;
// Close program
}
