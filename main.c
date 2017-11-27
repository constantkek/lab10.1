#include <stdio.h>
#include <stdlib.h>

int NOD(int *p, int *q)
{
    int i;
    for(i = 0; i <= *p; i++)
    {
       if((*p % i == 0) && (*q % i == 0))
       {
           return i;
           break;
       }
    }
}



int main()
{
    int num1;
    int num2;
    scanf("%d%d", &num1, &num2);
    NOD(&num1, &num2);
    return 0;
}
