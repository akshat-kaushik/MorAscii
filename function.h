#include <stdio.h>
#include <windows.h>

#define dot Beep(750, 300)
#define dash Beep(750, 600)
#define MAX 100

void file_read(char* filename);
void char_checker(char* character);
void morse_code(char** morseChar);