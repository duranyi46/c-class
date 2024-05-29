#include <stdio.h>
#define matrixSize 3

enum { SUCCESS, FAIL } ;

int main()
{
	FILE *fptr;
	char filename[] = "matrix.txt";
	int reval = SUCCESS;
	int difference, minimum, maximum, sum = 0;
	
	if ((fptr = fopen(filename, "r")) == NULL)
	{
		printf("%c cannot be opened. Try again.\n",filename);
		return FAIL;
	} else
	{
		for (int i = 0; i < matrixSize; i++)
		{
			int n1, n2, n3;
			fscanf(fptr,"%i %i %i", &n1, &n2, &n3);
			maximum = n1;
			minimum = n1;
			if (maximum < n2){
				maximum = n2;
			} 
			if (maximum < n3) {
				maximum = n3;
			}
			if (minimum > n1) {
				minimum = n1;
			}
			if (minimum > n3) {
				minimum = n3;
			}
			difference = maximum - minimum;
			printf("Difference of the %i th row is: %i\n",i+1,difference);
			sum += difference;
			printf("Current sum is: %i\n",sum); 
		}
		fclose(fptr);
	}
	printf("\nFinal Sum is : %i\n", sum);
	return reval;
}
