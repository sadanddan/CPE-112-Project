#include <stdio.h>
#include <string.h>
#include <windows.h>
#include "activities/activities.h"
#include "fnAndData/fnAndData.h"
#include "actsMenu.h"

void cover(int);
void home(int);
void sessionTerminate();

int main() {
    cover(2500);
    home(1);

    return 0;
}

void cover(int n) {
    system("cls");
    centerPrint("[SCHOOL NAME: REDACTED FOR PRIVACY]", 1, 18);
    centerPrint("College of Engineering, Bachelor of Science in Computer Engineering", 1, 0);
    centerPrint("[SCHOOL ADDRESS: REDACTED FOR PRIVACY]", 4, 0);
    centerPrint("Project", 1, 0);
    centerPrint("in", 1, 0);
    centerPrint("Programming Logic and Design 1", 4, 0);
    centerPrint("Author:", 1, 0);
    centerPrint("[REDACTED FOR PRIVACY]", 2, 0);
    centerPrint("Mentor:", 1, 0);
    centerPrint("[REDACTED FOR PRIVACY]", 0, 0);
    Sleep(n);
}

/*Just call this function with 1 as its input*/
void home(int n) {
    int a;
    system("cls");
    logo(0);
    bottomPrint("1: Log-in", 1, 3);
    printf("2: Register [Deprecated]\n");
    printf("0: Exit Program\n");
    if (n) printf("Enter Choice: ");
    else printf("\33[2KInvalid Choice! Please enter choice again: ", a);
    while(1) {
        scanf("%d", &a);
        switch (a) {
            case 1:
                if (logIn()) actsMenu(1);
                else {
                    printf("\33[1;31m");
                    sessionTerminate(3000, "Session Terminated due to Exceeded Unsuccessful Attempts");
                    printf("\33[0;37m");
                }
                return;
            case 0:
                sessionTerminate(2500, "You Leave so Soon :(");
                break;
            default:
                home(0);
        }
    }
}

void sessionTerminate(int n, char str[]) {
    system("cls");
    centerPrint(str, 1, 1);
    Sleep(n);
    exit(0);
}
