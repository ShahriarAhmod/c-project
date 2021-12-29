
#include<stdio.h>
int main()
{
int n, a1 = 1, a2 = 1, nextTerm,i;
scanf("%d", &n);
if(n == 1)
nextTerm=1;
else if (n == 2)
nextTerm=1;
for (i = 3; i <= n; ++i)
{
nextTerm= a1+a2;
a1 = a2;
a2= nextTerm;
nextTerm = a1 + a2;
}
printf("%d", a2);
}
