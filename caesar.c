#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// get key from user in the command line
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        return 1;
    }

    // turn key into integer using atoi(); mod 26 to avoid over-repetition
    int k = atoi(argv[1]) % 26;

    // get the plaintext from user
    string text = get_string("plaintext: ");

    // print ciphertext
    printf("ciphertext: ");

    // encipher each character in plaintext string
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        int p = text[i];

        if ((p > 'A' && p < 'Z'))
        {
            p = p + k - 'A';
            p = p % 26;
            p = p + 'A' - k;
        }
        else if ((p > 'a' && p < 'z'))
        {
            p = p + k - 'a';
            p = p % 26;
            p = p + 'a' - k;
        }

        // keep non-alphabet characters unchanged
        else if (p != isalpha(p))
        {
            p = p - k;
        }
        int c = p + k;
        printf("%c", c);
    }
    printf("\n");
    return 0;
}
