#include <windows.h>
#include <stdio.h>
#include <string.h>
#include "fnAndData/fnAndData.h"

void cover(int);
void home();
void sessionTerminate();

int main() {
    home();

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
}

void home() {
    int a;
    system("cls");
    logo(0);
    bottomPrint("1: Log-in", 1, 3);
    printf("2: Register [Deprecated]\n");
    printf("0: Exit Program\n");
    printf("Enter Choice: ");
    while(1) {
        scanf("%d", &a);
        switch (a) {
            case 1: enterUser();
            /*dont forget break here*/
            case 0:
                sessionTerminate(2500);
                break;
            default:
                printf("\33[A\33[2KSorry, choice %d is unrecognized. Please enter choice again: ", a);
        }
    }

}

void sessionTerminate(int n) {
    system("cls");
    centerPrint("See you next time", 1, 2);
    centerPrint(":)", 0, 0);
    Sleep(n);
    exit(0);
}
