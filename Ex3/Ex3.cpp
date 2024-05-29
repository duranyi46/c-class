#include <stdio.h>
#include <ctype.h>
#include <string.h>


void VowelCounter(char array[]);
void Reverser(char array[]); 

int main()
{
	char sentence[100];
	int size = sizeof(sentence) / sizeof(sentence[0]);
	printf("Enter a sentence\n");
	gets(sentence);
	
	VowelCounter(sentence);
	
	Reverser(sentence); 
	
	return 0;
}

void VowelCounter(char array[])
{
	int letter;
	int aCount = 0; 
	int eCount = 0; 
	int iCount = 0; 
	int oCount = 0; 
	int uCount = 0;
	
	for (int i = 0; array[i] != '\0'; i++)
	{
		letter = tolower(array[i]);
		switch(letter)
		{
			case 'a':
				aCount++;
				break;
			case 'e':
				eCount++;
				break;
			case 'i':
				iCount++;
				break;
			case 'o':
				oCount++;
				break;
			case 'u':
				uCount++;
				break;
		}
	}
	int totalVowel = aCount + eCount + iCount + oCount + uCount;
	printf("Total number of vowels in your sentence is %i\n",totalVowel);
	printf("Number of a : %i\n",aCount);
	printf("Number of e : %i\n",eCount);
	printf("Number of i : %i\n",iCount);
	printf("Number of o : %i\n",oCount);
	printf("Number of u : %i\n",uCount);
}

void Reverser(char array[])
{
	char* output = strrev(array);
	printf("The reverse of your input is:\n");
	for (int i = 0; output[i] != '\0'; i++)
	{
		printf("%c",output[i]);
	}
	
	
}
