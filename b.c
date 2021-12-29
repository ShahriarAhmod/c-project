#include<stdio.h>
int main()
{
    int n, i, m, m1= 1, m2= 1;
    scanf("%d",&n);
    if(n==1){
        m=1;
    }
    else if(n==2){
        m=1;
    }
    else{
        for(i=3; i<=n; i++){
            m = m1+m2;
            m1 = m2;
            m2 = m;
        }
    }
    printf("%d",m);
    return 0;
}
