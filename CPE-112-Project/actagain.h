int actAgain(char question[]) {
    int c;
    printf("\n%s\n", question);
    printf("1: Yes\n");
    printf("0: Go Back to Activity Menu\n");
    printf("Enter Choice: ");
    do {
        scanf("%d", &c);
        if (c != 1 && c != 0) {
            printf("\33[A\33[2K\rInvalid Choice! Please enter choice again: ");
        }
    } while (c != 1 && c != 0);
    return c;
}
