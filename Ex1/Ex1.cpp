#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum { SUCCESS, FAIL };
void RandomNumberGenerator(FILE *fout);
void ThreeDivideWriter(FILE *fin, FILE *fout1, FILE *fout2);

int main() 
{
	FILE *fptr1, *fptr2, *fptr3;
	char filename1[] = "random_numbers.txt";
	char filename2[] = "dividable_by_three.txt";
	char filename3[] = "others.txt";
	int reval = SUCCESS;
	if ((fptr1 = fopen(filename1, "w")) == NULL)
	{
		printf("%s file can't open. Try again.\n",filename1);
		return FAIL;
	} else 
	{
		srand(time(NULL));
		RandomNumberGenerator(fptr1);
		printf("Random numbers has been created succesfully.\n");
		fclose(fptr1);
	}
	
	if ((fptr1 = fopen(filename1, "r")) == NULL)
	{
		printf("%s file can't open. Try again.\n",filename1);
		return FAIL;
	} if ((fptr2 = fopen(filename2, "w")) == NULL)
	{
		printf("%s file can't open. Try again.\n",filename2);
		return FAIL;
	} if ((fptr3 = fopen(filename3, "w")) == NULL)
	{
		printf("%s file can't open. Try again.\n",filename3);
		return FAIL;
	} else
	{
		ThreeDivideWriter(fptr1,fptr2,fptr3);
		printf("Writing completed succesfully.\n");
		fclose(fptr1);
		fclose(fptr2);
		fclose(fptr3);
	}
	return reval;
}

void RandomNumberGenerator(FILE *fout) {
	for (int i = 0; i < 10; i++)
	{
		int RandomNumber = 100 + (rand() %899);
		fprintf(fout, "%d\n", RandomNumber);
	}
}

void ThreeDivideWriter(FILE *fin, FILE *fout1, FILE *fout2) {
	int number;
	while (fscanf(fin, "%d", &number) != EOF)
	{
		if (number % 3 == 0)
		{
			fprintf(fout1, "%d\n", number);	
		} else
		{
			fprintf(fout2, "%d\n",number);
		}
	}
}
