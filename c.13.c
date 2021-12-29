#include <stdio.h>
int main()
{
    char chr;
    printf("Enter a character: ");
    scanf("%c",&chr);
    // When %c text format used, character is displayed in case of
    printf("You entered %c.\n",chr);
    // When %d text format is used, integer is displayed in case of character
    printf("ASCII value of %c is %d.",chr, chr);
    return 0;
}
