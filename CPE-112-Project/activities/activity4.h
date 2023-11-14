int act4(void) {
    int user = 0;
    int computer;
    char items[][9] = {"Rock", "Paper", "Scissors"};
    do {
        system("cls");
        srand(time(0));
        printf("1: Rock\n");
        printf("2: Paper\n");
        printf("3: Scissors\n");
        if (!(user < 0 || user > 2)) printf("Enter Choice: ");
        else printf("Unrecognized Hand, Enter Choice again: ");
        scanf("%d", &user);
        printf("\nYour Choice: %s\n", items[user -= 1]);
        printf("Computer's Choice: %s\n", items[computer = rand()%3]);
    } while (user < 0 || user > 2);

    printf("Result: ");
    if (user == computer) printf("Tie");
    else if (user == 0) (computer == 1) ? printf("Computer Wins!") : printf("User Wins!");
    else if (user == 1) (computer == 2) ? printf("Computer Wins!") : printf("User Wins!");
    else if (user == 2) (computer == 0) ? printf("Computer Wins!") : printf("User Wins!");
    printf("\n");

    if (actAgain("Do you want a Rematch?")) act4();
}
