#include<stdio.h>
int main()
{
    int n, a1 = 0, a2 = 1, next_term = 0, i;
    scanf("%d", &n);
    if(n== 0 || n == 1)
    printf("%d", n);
    else
    next_term = a1 + a2;
    for (i = 3; i <=n; ++i)
    {
    a1 = a2;
    a2 = next_term;
    next_term = a1 + a2;
    }
    printf("%d", a2);
    return 0;
}
