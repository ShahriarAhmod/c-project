#include <stdio.h>

int main()
{
  int num, i = 3, take, x;
  scanf("%d", &num);

    if (num >= 1)
    {
    printf("2");
    }

  for (take = 2; take <= num;)
  {
    for (x = 2; x <= i-1; x++)
    {
      if (i%x == 0)
        break;
    }
    if (x == i)
    {
      printf("%d ", i);
      take++;
    }
    i++;
  }

  return 0;
}

