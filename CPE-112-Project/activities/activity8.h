long long int fib(int n) {
    int a = 0, b = 1, c = 1;
    int i = 3;
    long long int sum = 1;
    if (n <= 0) return;
    printf("Term 1: %d\n", a);
    if (n >= 2) printf("Term 2: %d\n", b);
    while (i <= n) {
        c = a +b;
        sum += c;
        printf("Term %d: %d\n", i, c);
        a = b;
        b = c;
        i++;
    }
    return sum;
}

int act8(void) {
    int n;
    system("cls");
    printf("Enter n to print the first n terms of the Fibonacci Sequence: ");
    scanf("%d", &n);
    printf("\nFibonacci Series_%d: %lld\n", n, fib(n));
    if (actAgain("Do you want to try again for another number of terms in the Fibonacci Sequence?")) act8();
}
