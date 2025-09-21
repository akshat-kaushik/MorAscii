#include"function.h"

void file_read(char* filename)
{
    FILE *f_read = fopen(filename, "r");
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
        printf("| ");
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
        dash;printf(". ");
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
        dot;printf(".");
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

void morse_read()
{
    int count = 0;
    char morsecode[MAX];// = ".... . ._.. ._.. ___ | .... ___ .__ | ._ ._. . | _.__ ___ .._ | .. | ._ __ | .._. .. _. . | _ .... ._ _. _._ _.__ ___ .._ ";
    printf("\t\t\tEnter Morse Code\n");

    fgets(morsecode, MAX-1, stdin);
  
    while(morsecode[count] != '\0')
    {
        count++;
    }
    morsecode[count] = ' ';

    int i = 0;
    while(morsecode[i] != '\0')
    {
        if(morsecode[i] == ' ')
        {
            dot_dashchecker(' ');
            i++;
            continue;
        }
        else if(morsecode[i] == '|')
        {
            printf(" ");
            i++;
            continue;
        }
        char dotdash = morsecode[i];
        dot_dashchecker(dotdash);
        i++;
    }
}

void dot_dashchecker(char mCode)
{
    static int k = 0;
    static char morseArray[10];
    if(mCode == '.')
    {
        morseArray[k] = '.';
        k++;
    }
    else if(mCode == '_')
    {
        morseArray[k] = '_';
        k++;
    }
    else if(mCode == ' ')
    {
        morseArray[k] = '\0';
        morse_to_text(morseArray);
        k = 0;
    }
}

void morse_to_text(char* textChar)
{
    if(strcmp(textChar, "._") == 0) { printf("A"); }
    else if(strcmp(textChar, "_...") == 0) { printf("B"); }
    else if(strcmp(textChar, "_._.") == 0) { printf("C"); }
    else if(strcmp(textChar, "_..") == 0) { printf("D"); }
    else if(strcmp(textChar, ".") == 0) { printf("E"); }
    else if(strcmp(textChar, ".._.") == 0) { printf("F"); }
    else if(strcmp(textChar, "__.") == 0) { printf("G"); }
    else if(strcmp(textChar, "....") == 0) { printf("H"); }
    else if(strcmp(textChar, "..") == 0) { printf("I"); }
    else if(strcmp(textChar, ".___") == 0) { printf("J"); }
    else if(strcmp(textChar, "_._") == 0) { printf("K"); }
    else if(strcmp(textChar, "._..") == 0) { printf("L"); }
    else if(strcmp(textChar, "__") == 0) { printf("M"); }
    else if(strcmp(textChar, "_.") == 0) { printf("N"); }
    else if(strcmp(textChar, "___") == 0) { printf("O"); }
    else if(strcmp(textChar, ".__.") == 0) { printf("P"); }
    else if(strcmp(textChar, "__._") == 0) { printf("Q"); }
    else if(strcmp(textChar, "._.") == 0) { printf("R"); }
    else if(strcmp(textChar, "...") == 0) { printf("S"); }
    else if(strcmp(textChar, "_") == 0) { printf("T"); }
    else if(strcmp(textChar, ".._") == 0) { printf("U"); }
    else if(strcmp(textChar, "..._") == 0) { printf("V"); }
    else if(strcmp(textChar, ".__") == 0) { printf("W"); }
    else if(strcmp(textChar, "_.._") == 0) { printf("X"); }
    else if(strcmp(textChar, "_.__") == 0) { printf("Y"); }
    else if(strcmp(textChar, "__..") == 0) { printf("Z"); }
}