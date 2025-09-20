#include"function.h"

void file_read()
{
    FILE *f_read = fopen("text_files/sample.txt", "r");
    if(f_read == NULL)
    {
        printf("Error in opening file.\n");
        return;
    }
    char gig = fgetc(f_read);

    while(gig != EOF)
    {
        char_checker(&gig);
        gig = fgetc(f_read);
    }
    fclose(f_read);
}

void char_checker(char* character)
{
    if((*character >= 'A' && *character <= 'Z') || (*character >= 'a' && *character <= 'z'))
    {
        morse_code(&character);
    }
    else
    {
        printf("  ");
        Sleep(1000);
    }
}

void morse_code(char** morseChar)
{
    if(**morseChar == 'A' || **morseChar == 'a')
    {
        dot;printf(".");
        dash;printf("_ ");
        Sleep(300);
    }
    else if(**morseChar == 'B' || **morseChar == 'b')
    {
        dash;printf("_");
        dot;printf(".");
        dot;printf(".");
        dot;printf(". ");
        Sleep(300);
    }
    else if(**morseChar == 'C' || **morseChar == 'c')
    {
        dash;printf("_");
        dot;printf(".");
        dash;printf("_");
        dot;printf(". ");
        Sleep(300);
    }
    else if(**morseChar == 'D' || **morseChar == 'd')
    {
        dash;printf("_");
        dot;printf(".");
        dot;printf(". ");
        Sleep(300);
    }
    else if(**morseChar == 'E' || **morseChar == 'e')
    {
        dot;printf(". ");
        Sleep(300);
    }
    else if(**morseChar == 'F' || **morseChar == 'f')
    {
        dot;printf(".");
        dot;printf(".");
        dash;printf("_");
        dash;printf("_ ");
        Sleep(300);
    }
    else if(**morseChar == 'G' || **morseChar == 'g')
    {
        dash;printf("_");
        dash;printf("_");
        dot;printf(". ");
        Sleep(300);
    }
    else if(**morseChar == 'H' || **morseChar == 'h')
    {
        dot;printf(".");
        dot;printf(".");
        dot;printf(".");
        dot;printf(". ");
        Sleep(300);
    }
    else if(**morseChar == 'I' || **morseChar == 'i')
    {
        dot;printf(".");
        dot;printf(". ");
        Sleep(300);
    }
    else if(**morseChar == 'J' || **morseChar == 'j')
    {
        dot;printf(".");
        dash;printf("_");
        dash;printf("_");
        dash;printf("_ ");
        Sleep(300);
    }
    else if(**morseChar == 'K' || **morseChar == 'k')
    {
        dash;printf("_");
        dot;printf(".");
        dash;printf("_ ");
        Sleep(300);
    }
    else if(**morseChar == 'L' || **morseChar == 'l')
    {
        dot;printf(".");
        dash;printf("_");
        dot;printf(". ");
        Sleep(300);
    }
    else if(**morseChar == 'M' || **morseChar == 'm')
    {
        dash;printf("_");
        dash;printf("_ ");
        Sleep(300);
    }
    else if(**morseChar == 'N' || **morseChar == 'n')
    {
        dash;printf("_");
        dot;printf(". ");
        Sleep(300);
    }
    else if(**morseChar == 'O' || **morseChar == 'o')
    {
        dash;printf("_");
        dash;printf("_");
        dash;printf("_ ");
        Sleep(300);
    }
    else if(**morseChar == 'P' || **morseChar == 'p')
    {
        dot;printf(".");
        dash;printf("_");
        dash;printf("_");
        dot;printf(". ");
        Sleep(300);
    }
    else if(**morseChar == 'Q' || **morseChar == 'q')
    {
        dash;printf("_");
        dash;printf("_");
        dot;printf(".");
        dash;printf("_ ");
        Sleep(300);
    }
    else if(**morseChar == 'R' || **morseChar == 'r')
    {
        dot;printf(".");
        dash;printf("_");
        dot;printf(". ");
        Sleep(300);
    }
    else if(**morseChar == 'S' || **morseChar == 's')
    {
        dot;printf(".");
        dot;printf(".");
        dot;printf(". ");
        Sleep(300);
    }
    else if(**morseChar == 'T' || **morseChar == 't')
    {
        dash;printf("_ ");
        Sleep(300);
    }
    else if(**morseChar == 'U' || **morseChar == 'u')
    {
        dot;printf(".");
        dot;printf(".");
        dash;printf("_ ");
        Sleep(300);
    }
    else if(**morseChar == 'V' || **morseChar == 'v')
    {
        dot;printf(".");
        dot;printf(".");
        dot;printf(".");
        dash;printf("_ ");
        Sleep(300);
    }
    else if(**morseChar == 'W' || **morseChar == 'w')
    {
        dot;printf(".");
        dash;printf("_");
        dash;printf("_ ");
        Sleep(300);
    }
    else if(**morseChar == 'X' || **morseChar == 'x')
    {
        dash;printf("_");
        dot;printf(".");
        dot;printf(".");
        dot;printf("_ ");
        Sleep(300);
    }
    else if(**morseChar == 'Y' || **morseChar == 'y')
    {
        dash;printf("_");
        dot;printf(".");
        dash;printf("_");
        dash;printf("_ ");
        Sleep(300);
    }
    else if(**morseChar == 'Z' || **morseChar == 'z')
    {
        dash;printf("_");
        dash;printf("_");
        dot;printf(".");
        dot;printf(". ");
        Sleep(300);
    }
}