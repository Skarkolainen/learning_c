#include <stdio.h>


void printBinary(unsigned char byte) {
    for (int i = 7; i >= 0; i--) {
        // Shift byte right by 'i' and mask with 1 to get the value of the i-th bit
        printf("%d", (byte >> i) & 1);
    }
}


int main (void)
{

    printf("Hello, provide chars to check: ");

    char chars[40];

    scanf("%39s", chars);

    for (int i = 0; chars[i] != '\0'; i++)
    {
        char current = chars[i];
        char *ptr = &chars[i];
        printf("Char at index %d : %c. \n", i, current);
        printf("ASCII value of %c = %d\n", current, (int)current);
        printf("Binary value of %d: ", (int)current);
        printBinary((unsigned char)*ptr);
        printf("\n");
        printf("The char of %c (ASCII:%d) is stored in memory at address: %p\n\n",current, (int)current, (void*)&chars[i]);        
    }
    

    return 0;
}

