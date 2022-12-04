void actsMenu(int attempt) {
    int choice;
    system("cls");
    actListheader();
    activitiesList();

    if (!attempt) {
        printf("\33[0;31m");
        bottomPrint("Invalid Choice!", 0, 0);
        printf("\33[0;37m");
        printf(" Please enter choice again: ");
    } else {
        bottomPrint("Enter Choice: ", 0, 0);
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
        default:
            actsMenu(0);
    }
    actsMenu(1);
}
