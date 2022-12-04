int act1again() {
    int c;
    printf("\nDo you want to try again for another number?\n");
    printf("1: Yes\n");
    printf("0: No\n");
    printf("Enter Choice: ");
    do {
        scanf("%d", &c);
        if (c != 1 && c != 0) {
            printf("\33[A\33[2K\rInvalid Choice! Please enter choice again: ");
        }
    } while (c != 1 && c != 0);
    return c;
}

void act1() {
    long long int num;
    int i = 0;
    char digitNames[][8] = {"One", "Ten", "Hundred"};
    char name100[][12] = {"", "Thousand", "Million", "Billion", "Trillion", "Quadrillion", "Quintillion"};
    system("cls");
    printf("Enter an Integer Number: ");
    scanf("%lld", &num);
    while (num) {
        if (i < 3) printf("%s's Place: %d\n", digitNames[i%3], num%10);
        else printf("%s-%s's Place: %d\n", digitNames[i%3], name100[i/3], num%10);
        i++;
        num /= 10;
    }
    if (act1again()) act1();
}
