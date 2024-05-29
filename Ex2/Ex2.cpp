#include <stdio.h>
#include <string.h>

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
  	char LastName[10], FirstName[10], NickName[7];
  	int Id;
  	while ((fscanf(fin,"%i	%s	%s",&Id, FirstName, LastName)) != EOF)
  	{
  		strncpy(NickName, FirstName, 3);
  		strncpy(NickName + 3 , LastName, 3);
  		NickName[6] = '\0';
  		fprintf(fout,"%s %i\n",NickName, Id);
	}
  }

