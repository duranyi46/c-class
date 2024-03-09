#include <stdio.h>
#include <math.h>

int main() {
    char ch1, ch2, ch3; // Define variables as characters

    printf("Enter the first character: "); // Text to display for ch1
    scanf("%c", &ch1); // input for ch1
    getchar(); // enter for next step

    printf("Enter the second character: "); // Text to display for ch2
    scanf("%c", &ch2); // input for ch2
    getchar();  // enter for next step
 
    printf("Enter the third character: "); // Text to display for ch3
    ch3 = getchar(); // input for ch3

    
    float hm = 2.0 / ((1.0 / (ch1)) + (1.0 / (ch3))); // harmonic mean calculation
	printf("Harmonic mean of %c and %c is greater than %c: %d\n", ch1, ch3, ch2, hm > ch2); // print 1 if hm>ch2, print 0 if not

    return 0; // close programme
}

