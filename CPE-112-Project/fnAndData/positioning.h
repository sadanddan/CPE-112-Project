 /*Prints strings at center of window
 totalLines is only appilcable for first line
 If multiline string is needed to print,
 call this function for every line of string
 and make totalLines 0 for the following lines*/
void centerPrint(char str[], int linesAfter, int totalLines) {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int x, y, i, lncent = strlen(str)/2;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    x = (csbi.srWindow.Right -csbi.srWindow.Left +1)/2;
    y = (csbi.srWindow.Bottom -csbi.srWindow.Top +1)/2;

    if (totalLines > 0 && totalLines < x*2) {
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
    int i, y;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    y = csbi.srWindow.Bottom -csbi.srWindow.Left;
    COORD b = {0, y -totalLines};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), b);
    printf("%s", str);
    for (i = 1; i <= linesAfter; i++) printf("\n");
}

void topCenterPrint(char str[], int linesAfter, int linesBefore) {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int x, y, i;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    x = (csbi.srWindow.Right -csbi.srWindow.Left +1)/2 -strlen(str)/2;
    y = 0;
    if (linesBefore) {
        COORD c = {x, y +linesBefore};
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
        printf("%s", str);
        for (i = 1; i <= linesAfter; i++) printf("\n");
        return;
    }
    COORD c = {x, csbi.dwCursorPosition.Y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf("%s", str);
    for (i = 1; i <= linesAfter; i++) printf("\n");
}
