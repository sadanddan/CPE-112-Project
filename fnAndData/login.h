void logo(int);

int enterPass(char user[], int a) {
    char password[13];
    int b = a;
    do {
        system("cls");
        logo(2);
        if (a == b) {
            centerPrint("It's really nice to see you again,", 1, 0);
            centerPrint("happil", 0, 0);
        } else {
            printf("\33[1;31m");
            centerPrint("Incorrect Password!", 0, 0);
            printf("\33[0;37m");
        }
        bottomPrint("", 0, 0);
        if (a < 5) {
            printf("\33[A");
            printf("Unsuccessful Attempts Left: %d\n", a);
        }
        printf("Enter your Password to continue: ");
        printf("\33[0;30m");
        scanf("%s", password);
        printf("\33[0;37m");
        if (!strcmp(password, "dan123")) return 1;
    } while (--a);
    printf("Kalaki ka lang jud oy");
    return 0;
}

int logIn() {
    char username[9], a = 6;
    system("cls");
    while (--a) {
        logo(2);
        if (a == 5) centerPrint("Welcome Back! ~", 0, 0);
        else {
            printf("\33[1;31m");
            centerPrint("User not Found!", 0, 0);
            printf("\33[0;37m");
            bottomPrint("", 0, 1);
            printf("Due to security reasons, you are now only limited");
            printf(" to %d unsuccessful log-in attempts.\n", a);
        }
        bottomPrint("Enter your Username: ", 0, 0);
        printf("\33[0;36m");
        scanf("%s", username);
        printf("\33[0;37m");
        system("cls");
        centerPrint("Finding User:", 1, 2);
        centerPrint(username, 0, 0);
        Sleep(1500);
        if (!strcmp("happil", username)) {
            return enterPass(username, a);
        }
    }
    return 0;
}
