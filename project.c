#include <stdio.h>
#include <windows.h>
#include "fnAndData/positioning.h"

void cover(int);

int main() {
    system("cls");
    bottomPrint("Hello", 1, 2);
    printf("What is up?\n");
    printf("Whatchodoin?");
    system("pause");
    return 0;
}

void cover(int n) {
    system("cls");
    centerPrint("[SCHOOL NAME: REDACTED FOR PRIVACY]", 1, 15);
    centerPrint("College of Engineering, Bachelor of Science in Computer Engineering", 1, 0);
    centerPrint("[SCHOOL ADDRESS: REDACTED FOR PRIVACY]", 4, 0);
    centerPrint("Project", 1, 0);
    centerPrint("in", 1, 0);
    centerPrint("Programming Logic and Design 1", 4, 0);
    centerPrint("Author: [REDACTED FOR PRIVACY]", 1, 0);
    centerPrint("Mentor: [REDACTED FOR PRIVACY]", 1, 0);
    Sleep(n);
    system("cls"); 
}

void home() {
    
}
