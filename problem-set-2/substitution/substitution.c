#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int validades(string key);
void encrypt(string key);

int main(int argc, string argv[])
{
    //checks argument size
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    string key = argv[1];

    if ((validades(key)) == 1)
    {
        return 1;
    }

    encrypt(key);
}

int validades(string key)
{
    int key_size = strlen(key);
    int check_keyalphabet = 0;
    int check_duplicate_index = 0;
    int check_duplicate = 0;

    //check if key size is different than 26
    if (key_size != 26)
    {
        printf("Key must contain 26 characters\n");
        return 1;
    }

    //loops through the key array
    for (int i = 0; i < key_size; i++)
    {
        check_keyalphabet = isalpha(key[i]);
        check_duplicate_index = tolower(key[i]);
        //check if there are only alphabet letters in the key
        if (check_keyalphabet == 0)
        {
            printf("Key must only contain alphebetic characters\n");
            return 1;
        }

        for (int j = i + 1; j < key_size; j++)
        {
            check_duplicate_index = tolower(key[i]);
            check_duplicate = tolower(key[j]);

            //chech if there are duplicates in the key
            if (check_duplicate_index == check_duplicate)
            {
                printf("Key must not contain repeated characters\n");
                return 1;
            }
        }
    }
    return 0;
}

void encrypt(string key)
{

    string plaintext = get_string("Text: ");
    int plaintext_size = strlen(plaintext);
    int checkalpha_plaintext = 0;
    int checkupper_plaintext = 0;
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int alphabet_size = strlen(alphabet);


    printf("ciphertext: ");

    //loops through the plaintext
    for (int i = 0; i < plaintext_size; i++)
    {
        checkalpha_plaintext = isalpha(plaintext[i]);

        //check if the position in the array plaintext isn't a letter
        if (checkalpha_plaintext == 0)
        {
            printf("%c", plaintext[i]);
        }

        //loops through the alphabet array
        for (int j = 0; j < alphabet_size; j++)
        {
            checkupper_plaintext = isupper(plaintext[i]);

            //checks if the plaintext array position is uppercase
            if (checkupper_plaintext == 256)
            {
                //compares the plain text letter to the alphabet letter and prints the correspontent alphabet letter position in the key array
                if (plaintext[i] == alphabet[j])
                {
                    printf("%c", toupper(key[j]));
                }
            }
            else
            {
                //also compares the lower case letters
                if (plaintext[i] == tolower(alphabet[j]))
                {
                    printf("%c", tolower(key[j]));
                }
            }

        }
    }
    printf("\n");
}





