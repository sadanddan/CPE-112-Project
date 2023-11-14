int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a%b);
}

/*Driver*/
void act2(void) {
    int a, b;
    system("cls");
    printf("Enter two Integer Numbers: ");
    scanf("%d %d", &a, &b);
    printf("Greatest Common Divisor of %d and %d: %d\n", a, b, gcd(a, b));
    if (actAgain("Do you want to try again for two other Integers?")) act2();
}
