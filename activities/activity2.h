int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a%b);
}

/*Again*/
int act2again() {
    int c;
    printf("\nDo you want to try again for another two Integers?\n");
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

/*Driver*/
void act2() {
    int a, b;
    system("cls");
    printf("Enter two Integer Numbers: ");
    scanf("%d %d", &a, &b);
    printf("Greatest Common Divisor of %d and %d: %d\n", a, b, gcd(a, b));
    if (act2again()) act2();
}
