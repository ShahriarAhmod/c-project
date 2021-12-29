#include<stdio.h>
int main(){
int x = 10;
int y = 9;
printf("%d\n", x);
{
    int x = 20;
    printf("%d %d\n", x, y);
}
printf("%d %d\n", x , y);
return 0;
}
