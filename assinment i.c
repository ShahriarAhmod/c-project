#include<stdio.h>
int main()
{ int n, x;
scanf("%d",&n);
for(x=0; x<=n; x++){
    if(n==x*x){
printf("%d is a square number.\n",n);
return 0;}
}
printf("%d is not a square number.\n",n);

return 0;
}
