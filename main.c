#include <stdio.h>
#include "function.h"
#include "welcome.h"

int main()
{
    welcome();
    char filename[MAX];
    printf("Enter file path: ");
    gets(filename);
    file_read(filename);
    return 0;
}