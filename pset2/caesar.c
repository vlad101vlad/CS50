#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int cipher(char s, int k);

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }

    int k = atoi(argv[1]);

    //asking for the plain text
    printf("plaintext: ");
    string text = get_string();

    printf("ciphertext: ");

    // iterate through the plaintext
    for(int i = 0, n = strlen(text); i < n; i++)
        // checks if the charachers are letters
        if( (text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z') )
        // if yes cipther them
            printf("%c",cipher(text[i],k));
        // if not print them
        else printf("%c",text[i]);


    printf("\n");
    return 0;
}

int cipher(char s, int k)
{

    if(s >= 'A' && s <= 'Z')
    {
        s = s - 'A';
        int sum = (s + k) % 26;
        return 'A' + sum;
    }
    else
    {
        s = s - 'a';
        int sum = (s + k) % 26;
        return 'a' + sum;
    }

}