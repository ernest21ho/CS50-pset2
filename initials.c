#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{

    string name = GetString();
    
    printf("%c", toupper(name[0]));
    
    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] == ' ')
        {
            printf("%c", toupper(name[i + 1]));
        }
    }
    
    printf("\n");
    
    return 0;
}