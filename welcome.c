#include "welcome.h"

/*
    0 = Black
    1 = Blue
    2 = Green
    3 = Aqua
    4 = Red
    5 = Purple
    6 = Yellow
    7 = White
    8 = Gray
    9 = Light Blue
    A = Light Green
    B = Light Aqua
    C = Light Red
    D = Light Purple
    E = Light Yellow
    F = Bright White
*/

void welcome()
{
    system("cls");
    printf("     *****   **    **                                   **                                              \n");
    printf("  ******  ***** *****                                *****                                *       *     \n");
    printf(" **   *  *  ***** *****                             *  ***                               ***     ***    \n");
    printf("*    *  *   * **  * **                                 ***                                *       *     \n");
    printf("    *  *    *     *        ****    ***  ****          *  **          ****                               \n");
    printf("   ** **    *     *       * ***  *  **** **** *       *  **         * **** *    ****    ***     ***     \n");
    printf("   ** **    *     *      *   ****    **   ****       *    **       **  ****    * ***  *  ***     ***    \n");
    printf("   ** **    *     *     **    **     **              *    **      ****        *   ****    **      **    \n");
    printf("   ** **    *     *     **    **     **             *      **       ***      **           **      **    \n");
    printf("   ** **    *     **    **    **     **             *********         ***    **           **      **    \n");
    printf("   *  **    *     **    **    **     **            *        **          ***  **           **      **    \n");
    printf("      *     *      **   **    **     **            *        **     ****  **  **           **      **    \n");
    printf("  ****      *      **    ******      ***          *****      **   * **** *   ***     *    **      **    \n");
    printf(" *  *****           **    ****        ***        *   ****    ** *    ****     *******     *** *   *** * \n");
    printf("*     **                                        *     **      **               *****       ***     ***  \n");
    printf("*                                               *                                                       \n");
    printf(" **                                              **                                                     \n");
    int i = 0;
    while(i<50)
    {
        system("color 0D");
        system("color 06");
        i++;
    }
}