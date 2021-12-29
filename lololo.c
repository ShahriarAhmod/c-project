#include<stdio.h>
int main()
{
 int x ,y;
 int i;
 scanf("%d%d",&x,&y);
 int count =0;
 for(i=x,i<=y,i++){
 if(i%3==0&&i%5==0){
printf("%d\n,",i);
count++;
 }
 }
 printf("Between %d and %d there are %d value that can be divided by 3 and 5\n",x,y,count);
return 0;
}
