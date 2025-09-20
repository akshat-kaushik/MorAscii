#include <stdio.h>
#include <windows.h>
#include <string.h>

#define dot Beep(750, 300)
#define dash Beep(750, 600)
#define MAX 1000

void file_read(char* filename);
void char_checker(char* character);
void morse_code(char** morseChar);
void morse_read();
void dot_dashchecker(char mCode);
void morse_to_text(char* textChar);