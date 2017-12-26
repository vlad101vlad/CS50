#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("O hai! ");
    float n;
    do
    {
        printf("How much change is owed?\n");
        n = get_float();
    }while(n<0);

    int n_coins = 0;
    while(n - 0.25 >= -0.005)
    {
        n_coins++;
        n -= 0.25;
    }
    while(n - 0.10 >= -0.005)
    {
        n_coins++;
        n -= 0.10;
    }
    while(n - 0.05 >= -0.005)
    {
        n_coins++;
        n -= 0.05;
    }


    while(n - 0.01 >= -0.005)
    {
        n_coins++;
        n -= 0.01;
    }

    printf("%d\n",n_coins);

}