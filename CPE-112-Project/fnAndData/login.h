void logo(int);

int enterPass(char user[], int a) {
    char password[25], c;
    int b = a, i = 0;
    srand(time(0));
    do {
        system("cls");
        logo(2);
        if (a == b) {
            centerPrint("It's really nice to see you again,", 1, 0);
            printf("\33[0;36m");
            centerPrint(user, 0, 0);
            printf("\33[0;37m");
        } else {
            printf("\33[1;31m");
            centerPrint("Incorrect Password!", 0, 0);
            printf("\33[0;37m");
        }
        bottomPrint("", 0, 0);
        if (a < 3) {
            printf("\33[A");
            printf("Unsuccessful Attempts Left: %d\n", a);
        }
        printf("Enter your Password to continue: ");
        while (1) {
            c = getch();
            if (i == 0 && c == 8) continue;
            if (c == 13) {
                password[i] = '\0';
                i = 0;
                break;
            }
            else if (c == 8) {
                i--;
                printf("\b \b");
            } else {
                if (i < 17) password[i] = c;
                i++;
                printf("%c", 33 +rand()%126);
            }
        }
        if (!strcmp(password, "dan123") || !strcmp(password, "admin")) return 1;
    } while (--a);
    printf("Kalaki ka lang jud oy");
    return 0;
}

int logIn(void) {
    char username[25];
    int a = 4;
    system("cls");
    while (--a) {
        logo(2);
        if (a == 3) centerPrint("Welcome Back! ~", 0, 0);
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
        if (!strcmp("happil", username) || !strcmp("admin", username)) {
            return enterPass(username, a);
        }
    }
    return 0;
}
