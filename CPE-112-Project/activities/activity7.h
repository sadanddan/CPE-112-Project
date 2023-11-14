void act7(int a, int b) {
    int num, base;
    system("cls");
    if (!a) printf("Number of Base-%d is not Recognized!\n", b);
    printf("What is the base of your Number? \n");
    printf("8: Octal\n");
    printf("10: Decinal\n");
    printf("16: Hexadecimal\n");
    printf("Enter Choice: ");
    scanf("%d", &base);
    if (!(base == 8 || base == 10 || base == 16)) {
        act7(0, base);
        return;
    }
    printf("Enter Base-%d Number: ", base);
    if (base == 8) {
        scanf("%o", &num);
        printf("%d_10 ", num);
        printf("%x_16 ", num);
    } else if (base == 10) {
        scanf("%d", &num);
        printf("%o_8 ", num);
        printf("%x_16 ", num);
    } else if (base == 16) {
        scanf("%x", &num);
        printf("%o_8 ", num);
        printf("%d_10 " , num);
    }
    printf("\n");
    if (actAgain("Do you want to try again for another Number?")) act7(1, 0);
}
