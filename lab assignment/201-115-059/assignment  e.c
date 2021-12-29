#include <stdio.h>

int main()

{

    int n, temp, task, rev = 0;

    scanf("%d", &n);
    temp = n;

    while (n > 0)

    {

        task = n % 10;

        rev = rev * 10 + task;

        n/= 10;

    }


    if(temp == rev){
         printf("%d, Palindrome\n", rev);
         }
    else{

        printf("%d, not palindrome \n",rev);}

    return 0;
}
