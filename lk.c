
#include<stdio.h>
int main ()
{
int a ,b ;
int i;
scanf("%d %d", &a ,&b);
int count =0;
for(i = a; i <=b;  i++ ){
if(i % 3 == 0 && i %5 ==0){
printf("%d\n",i);
count++;
}
}
printf("Between %d and %d there are can be divided by 3 and 5\n", a ,b , count);
return 0;
}
