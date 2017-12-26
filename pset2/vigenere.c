#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

bool is_alpha(char s);
int cipher(char s, char c);

int main(int arg, string argv[])
{
    // if there are more or less than 2 arg
    if(arg != 2)
    {
        printf("Usage: ./vigenere k\n");
        return 1;
    }
    // if there is 2 arguments
    else if(arg == 2)
    {
        // iterate through the code to find if there are not alpha words
        for(int i = 0, n = strlen(argv[1]); i < n; i++)
            if( is_alpha( argv[1][i] ) == false )
            {
                printf("Usage: ./vigenere k\n");
                return 1;
            }
    }


    string code = argv[1]; // the code after which we cipher
    int l_code = strlen(code); // the lenght of the code
    int c_code = 0; // the current char in the code

    //asks for the plain text from the user
    printf("plaintext: ");
    string text = get_string();

    //iterate and cipher the text
    printf("ciphertext: ");
    for(int i = 0, n = strlen(text); i < n; i++)
    {
        if( is_alpha(text[i]) )
        {
            printf("%c", cipher(text[i],code[c_code]) );
            if(c_code + 1 >= l_code)
                c_code = 0;
            else c_code += 1;
        }
        else printf("%c",text[i]);

    }
    printf("\n");

    return 0;
}

bool is_alpha(char s)
{
    if(s >= 'a' && s <= 'z')
        return true;
    if(s >= 'A' && s <= 'Z')
        return true;
    return false;
}

int cipher(char s, char c)
{
    c = tolower(c);
    if(s >= 'a' && s <= 'z')
    {
        s = s - 'a';
        c = c - 'a';
        int sum = (s + c) % 26;
        return 'a' + sum;
    }
    else
    {
        s = s - 'A';
        c = c - 'a';
        int sum = (s + c) % 26;
        return 'A' + sum;
    }
}

