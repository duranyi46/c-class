#include <stdio.h>

enum { SUCCESS, FAIL };

void NicknameMaker(FILE *fin, FILE *fout);

int main()
{
	int reval = SUCCESS;
	FILE *fptr1, *fptr2;
	char filename1[] = "dB.txt";
	char filename2[] = "Nicknames.txt";
	
	if ((fptr1 = fopen(filename1, "r")) == NULL)
	{
		printf("%s cannot opened. Try again.\n",filename1);
		reval = FAIL;
	}
	if 	((fptr2 = fopen(filename2, "w")) == NULL)
	{
		printf("%s cannot be created. Try again.\n",filename2);
		reval = FAIL;
	}
	else 
	{
		NicknameMaker(fptr1,fptr2);
		fclose(fptr1);
		fclose(fptr2);	
	} 
	return reval;
}


  void NicknameMaker(FILE *fin, FILE *fout)
{
	int Id, i, count = 0;
	char FirstName[20] = "", LastName[20] = "", NickName[10] = "";
	char *First_ptr, *Last_ptr, *Nick_ptr;
	while (fscanf(fin, "i", &Id) == 1)
	{
		count++;
	}
	for (i = 0; i < count; i++)
	{
		while ((fscanf(fin, "%i %s %s",&Id, FirstName, LastName)) == 3)
		{
			NickName = FirstName[i] + FirstName[i+1] + FirstName[i+2] + LastName[i] + LastName[i+1] + LastName[i+2]
			fprintf(fout, "%d	%c",Id,NickName);
		}
	}
} 


