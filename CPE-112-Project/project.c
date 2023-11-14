#include "granddaddyinclude.h"

void cover(int);
void home(int);
void sessionTerminate(int, char[]);


int main() {
    cover(3000);
    home(1);
    return 0;
}

void cover(int n) {
    system("cls");
    centerPrint("University of Cebu Lapu-lapu kand Mandue Campus", 1, 18);
    centerPrint("College of Engineering, Bachelor of Science in Computer Engineering", 1, 0);
    centerPrint("Looc, Mandaue City", 4, 0);
    centerPrint("Project", 1, 0);
    centerPrint("in", 1, 0);
    centerPrint("Programming Logic and Design 1", 4, 0);
    centerPrint("Author:", 1, 0);
    centerPrint("Pil Daniel P. Laurente", 3, 0);
    centerPrint("Mentor:", 1, 0);
    centerPrint("Engr. Jean Careen M. Engkong", 1, 0);
    centerPrint("", 0, 0);
    Sleep(n);
}

/*Just call this function with 1 as its input*/
void home(int a) {
    int c;
    system("cls");
    if (a%2) {
        logo(2);
        loading();
        system("cls");
    }
    logo(2);
    centerPrint("Hi!", 0, 0);
    bottomPrint("1: Log-In", 1, 2);
    printf("0: Exit\n");
    if (a) printf("Enter Choice: ");
    else printf("Invalid Choice, enter choice again: ");
    scanf("%d", &c);
    switch (c) {
        case 1:
            if (logIn()) {
                system("cls");
                centerPrint("Loading...", 1, 2);
                loading();
                actsMenu(1);
            } else {
                printf("\33[1;31m");
                sessionTerminate(3000, "Session Terminated due to Exceeded Unsuccessful Attempts");
                printf("\33[1;37m");
            }
            break;
        case 0:
            sessionTerminate(3000, "You Leave so Soon :(");
        case 2:
            home(1);
            break;
        default:
            home(0);
            break;
    }
}

void sessionTerminate(int n, char str[]) {
    system("cls");
    centerPrint(str, 1, 2);
    centerPrint("", 0, 0);
    Sleep(n);
    exit(0);
}
