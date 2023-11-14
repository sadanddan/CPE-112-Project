int act6(void) {
    int l, u, n, a = 0, g;
    srand(time(0));
    l = rand()%100;
    u = l +rand()%(rand()%100);
    n = rand()%(u -l) +l;

    system("cls");
    printf("I am thinking of a number between %d and %d.\n", l, u);
    printf("Guess my Number!\n\n");
    do {
        printf("Attempt %d: ", ++a);
        scanf("%d", &g);
        if (g > n) {
            printf("Lower!\n");
        } else if (g < n) {
            printf("Higher!\n");
        } else {
            printf("Correct!\n");
        }
    } while (g != n);
    printf("\nYou had %d attempts on %f%% first correct guess probability\n", a, 1.0/(u -l +1)*100);
    if (actAgain("Do you want to guess again?")) act6();
}
