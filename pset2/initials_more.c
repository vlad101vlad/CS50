#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string name = get_string();
    for(int i = 0, n = strlen(name); i < n; i++)
    {
        if(i == 0 && ( (name[i] >= 'A' && name[i] <= 'Z') || (name[i] >= 'a' && name[i] <= 'z') ) )
            printf("%c", toupper(name[i]));
        else
            if( ( (name[i] >= 'A' && name[i] <= 'Z') || (name[i] >= 'a' && name[i] <= 'z') ) && name[i-1] == ' ')
                printf("%c", toupper(name[i]));
    }
    printf("\n");
}