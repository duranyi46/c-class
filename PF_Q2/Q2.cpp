#include <stdio.h>
#include <ctype.h>

enum { SUCCESS, FAIL };

int main() {
    FILE *fptr1, *fptr2, *fptr3;
    char filename1[] = "customer.txt";
    char filename2[] = "names.txt";
    char filename3[] = "numbers.txt";
    int reval = SUCCESS;
    
    int recordNumber, zip, number, i, recordCount = 0;
    char fname[10], lname[10];
    
    if ((fptr1 = fopen(filename1, "r")) == NULL) {
        printf("%s cannot be opened.\n", filename1);
        return FAIL;
    } 
    if ((fptr2 = fopen(filename2, "w")) == NULL) {
        printf("%s cannot be opened.\n", filename2);
        fclose(fptr1);
        return FAIL;
    } 
    if ((fptr3 = fopen(filename3, "w")) == NULL) {
        printf("%s cannot be opened.\n", filename3);
        fclose(fptr1);
        fclose(fptr2);
        return FAIL;
    }
    
    while (fscanf(fptr1, "%d %[^,], %s %d %d", &recordNumber, lname, fname, &zip, &number) != EOF) {
        recordCount++;
        
        for (i = 0; fname[i] != '\0'; i++) {
            fname[i] = toupper(fname[i]);
        }
        
        for (i = 0; lname[i] != '\0'; i++) {
            lname[i] = toupper(lname[i]);
        }
        
        fprintf(fptr2, "%s %s\n", fname, lname);
        fprintf(fptr3, "%d %.3d %d\n", recordNumber, zip, number);
    }
    
    printf("There are %d records in the customer file.\n", recordCount);
    
    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);
    
    return reval;
}

