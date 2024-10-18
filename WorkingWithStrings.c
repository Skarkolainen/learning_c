#include <stdio.h>
#include <string.h>

int main(void)

{
    printf("Whats your name? \n");

    char name[40];
    scanf("%39s", name);

    printf("\n");
    printf("Nice to meet you %s! \n\n", name);

    char msg[22];

    strncpy(msg, name, sizeof(msg-1));
    strncat(msg, " is", sizeof(msg) - strlen(msg) - 1);
    strncat(msg, " learning C.\n", sizeof(msg) - strlen(msg) -1);

    printf("string length: %d \n", (int)strlen(msg));

    puts(msg);

    return 0;
}
