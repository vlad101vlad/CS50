#include <stdio.h>
#include <cs50.h>

void generate_pyramid(int n);

int main(void)
{

    int n;
    do
    {
        printf("Height: ");
        n = get_int();
    }
    while( !(n <= 23 && n >= 0) );
    generate_pyramid(n);
}

void generate_pyramid(int n)
{

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-1 - i; j++)
        {
            printf(" ");
        }
        for(int j = 0; j < 1 + i; j++)
        {
            printf("#");
        }
        for(int j = 0; j < 2; j++)
        {
            printf(" ");
        }
        for(int j = 0; j < 1 + i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}