/*activity*/
void punchCard(int nr, int nc) {
    int r, c;
    for (r = 1; r <= nr*2 +1; r++) {
        for (c = 1; c <= nc; c++) {
            if (c == 1 && r <= 2) printf("..");
            else if (r%2) printf("+-");
            else printf("|.");
        }
        if (r%2) printf("+");
        else printf("|");
        printf("\n");
    }
}

/*again*/
int act3again() {
    int c;
    printf("\nDo you want to try again for another punchcard?\n");
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

/*driver*/
void act3() {
    int r, c;
    system("cls");
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    printf("\n\nYour Punch Card:\n\n");
    punchCard(r, c);
    if (act3again()) act3();
}
