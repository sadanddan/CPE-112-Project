void enterPass(char[], int);
void logo(int);

void enterUser() {
    char username[9], a = 6;
    system("cls");
    while (a--) {
        logo(2);
        if (a == 5) centerPrint("Welcome Back! ~", 0, 0);
        else {
            centerPrint("User not Found!", 0, 0);
            bottomPrint("", 0, 1);
            printf("Due to security reasons, you are now only limited to %d unsuccessful log-in attempts.\n", a);
        }
        bottomPrint("Enter your Username: ", 0, 0);
        scanf("%s", username);
        system("cls");
        centerPrint("Finding User:", 1, 2);
        centerPrint(username, 0, 0);
        Sleep(1500);
        if (!strcmp("happil", username)) {
            enterPass(username, a);
            return;
        }
    }
}

void enterPass(char user[], int a) {
    char password[13];
    do {
        system("cls");
        logo(2);
        centerPrint("It's really nice to see you,", 1, 0);
        centerPrint("happil", 0, 0);
        bottomPrint("", 0, 0);
        if (a < 5) {
            printf("\33[A");
            printf("Due to security reasons, you are now only limited to %d unsuccessful log-in attempts.\n", a);
        }
        printf("Enter your Password to continue: ");
        scanf("%s", password);
        if (!strcmp(password, "dan123")) {
            printf("\n");
            system("pause");
            /*work on menu now*/
            return;
        }
    } while (--a);
    printf("Kalaki ka lang jud oy");
}
