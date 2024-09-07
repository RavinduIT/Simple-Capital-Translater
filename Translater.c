#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char num;
    int i;
    printf("Enter a string: \n");
    gets(str);
    printf("Enter what you want to do(1 - Capital, 2 - Simple) :\n");
    gets(num);
    if( num == '1')
    {
        for(i = 0; i <= strlen(str); i++)
        {
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
        }
        printf("String in Upper Case = %s", str);
    }
    else if( num == '2')
    {
        for(i = 0; i <= strlen(str); i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + 32;
            }
        }
        printf("String in Lower Case = %s", str);
    }
    else
    {
        printf("Invalid Input");
    }
    return 0;
}