#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Character:");
    scanf("%c",&ch);
    if((ch>='A')&&(ch<='Z'))
    printf("\n You entered a capital letter : %c", ch);
    else if((ch>'a')&& ch<='z')
    printf("\n You entered a small letter : %c" , ch);
    else
        printf("\n The letter you entered is not a a character.");
    return 0;

}
