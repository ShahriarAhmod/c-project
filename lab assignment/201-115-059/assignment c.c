#include<stdio.h>
int main()
{
    int A,m;
    printf("Enter a number: ");
    scanf("%d", &m);
    printf("Enter 1.for Factorial\n");
    printf("2. to check Prime or not\n");
    printf("3. to check odd or even\n");
    printf("4. to Exit\n");
    while(1)
    {


        scanf("%d",&A);

        int i,fact = 1,c=2,number;
        switch(A)
        {
            case 1:

  for (i= 1; i <= m; i++)
    fact = fact * i;
  printf("Factorial(s) = %d\n", fact);
            break;
           case 2:

   for ( c = 2;c<= m-1;c++)
   {
      if ( m%c == 0 )
      {
         printf("%d is not a prime number\n", m);
     break;
      }
   }
   if ( c == m)
      printf("%d is a prime number\n", m);
            break;
            case 3:

   if ( m%2 == 0 )
      printf("%d is an even number\n", m);
   else
      printf("%d is an odd number\n", m);
      printf("\n");
            break;


        case 4:
         printf("GOOD BYE!\n");

        }
   }
    return 0;
}

