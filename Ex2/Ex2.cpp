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
  	char *ls, *fs, Nickname[7];
  	int Id;
  	for (int i = 0; i < 10; i++)
  	{
  		fscanf(fin,"%i %3s %3s",&Id,fs,ls);
  		
  		fprintf(fout,"%c %i\n",ls,Id);
	}
  	fclose(fin);
  	fclose(fout);
  }

