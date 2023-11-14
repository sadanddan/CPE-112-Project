void act1(void) {
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
    if (actAgain("Do you want to try again for another Number?")) act1();
}
