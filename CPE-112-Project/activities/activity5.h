void summerize(int n, int sp) {
    float data[n], mean, variance, sum;
    int i;
    for (i = 0; i < n; i++) {
        printf("Enter Data %d: ", i +1);
        scanf("%f", &data[i]);
    }
    for (i = 0; i < n; i++) sum += data[i];
    printf("Mean: %0.2f\n", mean = sum/n);
    sum = 0;
    for (i = 0; i < n; i++) sum += pow(data[i] -mean, 2);
    variance = (sp) ? sum/n : sum/(n -1);
    if (sp) {
        printf("Population Variance: %0.2f\n", variance);
        printf("Population Standard Deviation: %0.2f\n", sqrt(variance));
    } else {
        printf("Sample Variance: %0.2f\n", variance);
        printf("Sample Standard Deviation: %0.2f\n", sqrt(variance));
    }
}

int act5(void) {
    int sp = 1, n;
    do {
        system("cls");
        printf("Is your data set a Sample or Population?\n");
        printf("1: Sample\n");
        printf("2: Population\n");
        if (!(sp != 1 && sp != 2)) printf("Enter Choice: ");
        else printf("Invalid Choice! Enter you choice again: ");
        scanf("%d", &sp);
    } while (sp != 1 && sp != 2);

    if (sp -= 1) printf("Enter Population Size: ");
    else printf("Enter Sample Size: ");
    scanf("%d", &n);
    summerize(n, sp);
    if (actAgain("Do you want to try again for another Data Set?")) act5();
}
