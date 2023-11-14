void sessionTerminate(int, char[]);
void home(int);

void actsMenu(int attempt) {
    int choice;
    system("cls");
    actListheader();
    activitiesList();

    bottomPrint("11: Log-out", 1, 2);
    printf("0 : Exit\n");
    if (!attempt) {
        printf("\33[0;13mInvalid Choice\33[0;37m!");
        printf(" Please enter choice again: ");
    } else {
        printf("Enter Choice: ");
    }
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            act1();
            break;
        case 2:
            act2();
            break;
        case 3:
            act3();
            break;
        case 4:
            act4();
            break;
        case 5:
            act5();
            break;
        case 6:
            act6();
            break;
        case 7:
            act7(1, 0);
            break;
        case 8:
            act8();
            break;
        case 9:
            act9(-1, 0);
            break;
        case 10:
            act10();
            break;
        case 11:
            system("cls");
            centerPrint("Logging Out...", 1, 2);
            loading();
            home(2);
            break;
        case 0:
            sessionTerminate(3500, "See you next time.  :)");
        default:
            actsMenu(0);
    }
    actsMenu(1);
}
