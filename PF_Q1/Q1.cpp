#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void FnAr(int array[], int size);

int main() 
{
    int n;
    printf("Enter a value for n: ");
    scanf("%i", &n);
    printf("Your matrix will be %ix%i\n\n", n, n);

    srand(time(NULL));

    int arrayA[n][n];
    int i, j;
    int alpha = 0;
    double arrayB[n][n];
    int arrayC[n*n];


    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            arrayA[i][j] = -10 + rand() % 26;
            arrayC[i*n+ j] = arrayA[i][j]; 
        }
    }
   
   
    printf("Array A is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%4i ", arrayA[i][j]);
			alpha += arrayA[i][j];
        }
        printf("\n");
    }
	printf("The value of alpha is: %i\n",alpha);
	printf("\nThe Array B is:\n");
	for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
        	if (arrayA[i][j] >= 0) {
				arrayB[i][j] = cbrt(arrayA[i][j]) * -1; 
			} else if (arrayA[i][j] < 0) {
				arrayB[i][j] = sqrt(abs(arrayA[i][j]));
			}
            printf("%7.2f ", arrayB[i][j]);
		}
		printf("\n");
	}
	
	
	for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            arrayC[i*n+ j] = arrayA[i][j]; 
        }
    }
	
	printf("\n");
	printf("The Array C is:\n");
	for (int k = 0; k < n*n; k++)
	{
		printf("%4i",arrayC[k]);
	}
	printf("\n");
	int sizeC = sizeof(arrayC[n*n] / sizeof(int));
	FnAr(arrayC, sizeC);
	
    return 0;
}


void FnAr(int array[], int size) 
{
	int k, maximum, minimum;
	maximum = array[0];
	minimum = array[0];
	for (k = 0; k < size; k++)
	{
		if (array[k] > maximum) {
			maximum = array[k];
		} else if (array[k] < minimum) {
			minimum = array[k];
		}
	}
	float Mm = (maximum + minimum) / 2.00;
	printf("Mm is: %.2f\n",Mm);
	printf("maximum : %i\n",maximum);
	printf("minimum : %i",minimum);
}




