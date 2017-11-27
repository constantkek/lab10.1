#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int IsNumber(char c) /*returns 1 if number, else 0*/
{
    int a = ((c >= '0') && (c <= '9'));
    return a;
}

int IsSymbolDown(char c) /*returns 1 if lowercase letter, else 0*/
{
    int a = ((c >= 'a') && (c <= 'z'));
    return a;
}

int IsSymbolUp(char c) /*returns 1 if capital letter, else 0*/
{
    int a = ((c >= 'A') && (c <= 'Z'));
    return a;
}



int main()
{
    //1 task
    int NumQnt = 0; /* Quantity of numbers*/
    int SymbDownQnt = 0; /* Quantity of lowercase letters*/
    int SymbUpQnt = 0; /* Quantity of capital letters*/
    unsigned int i = 0;
    char s[100];
    scanf("%s", &s);
    while (1)
    {
        char x = s[i++]; /*running throw each symbol*/
        if(x == '\0') /*end of loop condition*/
        {
            break;
        }
        NumQnt += IsNumber(x); /*case symbol is number*/
        SymbDownQnt += IsSymbolDown(x); /*case symbol is lowercase letter*/
        SymbUpQnt += IsSymbolUp(x); /*case symbol is capital letter*/
    }
    printf("%d Numbers\n%d Upper Symbols\n%d Down Symbols\n\n", NumQnt, SymbUpQnt, SymbDownQnt);

    //2 task
    int fixpay; /*fixed person's payment*/
    int minqnt; /*quantity of minutes*/
    int costmin; /*cost of a minute over 499 available*/
    printf("Enter minutes, tariff cost and minutes over 499 cost.\n");
    scanf("%d%d%d", &minqnt, &fixpay, &costmin);
    if(minqnt <= 499)
    {
        printf("%d", fixpay); /*outputs fixed pay as month pay*/
    }
    else
    {
        printf("%d", fixpay + (minqnt - 499) * costmin); /*outputs month pay*/
    }
    return 0;
}
