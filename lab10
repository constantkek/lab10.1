#include <stdio.h>
#include <stdlib.h>

void NOK(int *p, int *q)
{
    int i;
    for(i = 2; i <= *p; i++)
    {
       if((*p % i == 0) && (*q % i == 0))
       {
           printf("%d", i);
           break;
       }
    }
}



int main()
{
    int num1;
    int num2;
    scanf("%d%d", &num1, &num2);
    NOK(&num1, &num2);
    return 0;
}
