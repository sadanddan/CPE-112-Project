#include <windows.h>
#include <string.h>
#include <stdio.h>

 /*Prints strings at center of window
 totalLines is only appilcable for first line
 If multiline string is needed to print,
 call this function for every line of string
 and make totalLines 0 for the following lines*/
void centerPrint(char str[], int linesAfter, int totalLines) {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int x, y, i, lncent = strlen(str)/2, crrntypos = csbi.dwCursorPosition.Y;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    x = (csbi.dwMaximumWindowSize.X -1)/2;
    y = (csbi.dwMaximumWindowSize.Y -1)/2;

    if (totalLines > 0 && totalLines < csbi.dwMaximumWindowSize.Y -1) {
		COORD c = {x -lncent, y -totalLines/2};
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
        printf("%s", str);
        for (i = 1; i <= linesAfter; i++) printf("\n");
        return;
    }
    COORD c = {x -lncent, csbi.dwCursorPosition.Y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf("%s", str);
    for (i = 1; i <= linesAfter; i++) printf("\n");
}

/*Prints strings at the bottom left of the window
 totalLines is only appilcable for first line
 If multiline string is needed to print,
 only call this function for the first line string
 use printf function for the following lines*/
void bottomPrint(char str[], int linesAfter, int totalLines) {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int i;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    COORD b = {0, csbi.dwMaximumWindowSize.Y -1 -totalLines};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), b);
    printf("%s", str);
    for (i = 1; i <= linesAfter; i++) printf("\n");
}
