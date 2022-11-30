#include <windows.h>
#include <stdio.h>

int main() {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    COORD c = {20, csbi.dwMaximumWindowSize.Y -1};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);

    printf("Hello");
}