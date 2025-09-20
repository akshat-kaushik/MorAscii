#include <stdio.h>
#include "function.h"
#include "welcome.h"

int main()
{
    welcome();
    int key;
    scanf("%d", &key);
    getchar();
    switch(key)
    {
        case 0:
            {
                char filename[MAX];
                printf("Enter file path: ");
                gets(filename);
                file_read(filename);
                break;
            }
        case 1:
            {
                morse_read();
                break;
            }
        default: printf("Invalid Input\n");
    }
    return 0;
}