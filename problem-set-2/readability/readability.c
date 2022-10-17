#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>


int count_letters(string text);
int count_words(string text);
int count_senteces(string text);
void print_grade(string text);

int main(void)
{

    string text = get_string("What is the text\n");

    print_grade(text);
}
void print_grade(string text)
{
    float L;
    float S;
    float grade;
    int letters;
    int words;
    int sentences;

    //Number of letters of the text
    letters = count_letters(text);
    //Number of words of the text
    words = count_words(text);
    //Number of senteces of the text
    sentences = count_senteces(text);

    //the average number of letters per 100 words in the text
    L = (letters / (float)words) * 100;
    //the average number of sentences per 100 words in the text.
    S = (sentences / (float)words) * 100;

    //Coleman-Liau index equation (aka Grade)
    grade = ((0.0588 * L) - (0.296 * S) - 15.8);

    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", (int)(round(grade)));
    }


}

int count_letters(string text)
{
    int i = 0;
    int countLetters = 0;
    int checkAlpha = 0;

    //It loops through the loop until it finds the "nul" space inside the text array
    while (text[i] != '\0')
    {
        //Checks if the array position is an letter
        checkAlpha = isalpha(text[i]);
        //if it's true it increase the letter count by 1
        if (checkAlpha)
        {
            countLetters++;
        }

        i++;
    }

    return countLetters;

}

int count_words(string text)
{
    int i = 0;
    int countWords = 1;
    int checkSpace = 0;
    while (text[i] != '\0')
    {
        //Checks if the array position is an space
        checkSpace = isspace(text[i]);
        //if it's true it increase the word count by 1
        if (checkSpace)
        {
            countWords++;
        }

        i++;
    }

    return countWords;

}

int count_senteces(string text)
{
    int i = 0;
    int countSenteces = 0;

    while (text[i] != '\0')
    {
        //Checks if the array position is an ? . or !
        if ((text[i] == 33) || (text[i] == 46) || (text[i] == 63))
        {
            countSenteces++;
        }

        i++;
    }

    return countSenteces;

}

