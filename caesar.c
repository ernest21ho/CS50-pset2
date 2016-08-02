#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // Return error if argc not 2
    if (argc != 2)
    {
        printf("./caesar key");
        return 1;
    }
    else
    {
        string secretmessage = GetString();
        
        int i = 0;
        int n = 0;
        int k = atoi(argv[1]);
        
        for (i = 0, n = strlen(secretmessage); i < n; i++)
        {
            if (isalpha(secretmessage[i]))
            {
                if (islower(secretmessage[i]))
                {
                    int a = (((secretmessage[i] - 97 + k) % 26) + 97);
                    printf("%c", a);
                }
                if (isupper(secretmessage[i]))
                {
                    int b = (((secretmessage[i] - 65 + k) % 26) + 65);
                    printf("%c", b);
                }
            }
            else
            {
                printf("%c", secretmessage[i]);
            }
        }
        printf("\n");
    }

    
    
    return 0;
}