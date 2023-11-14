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

/*driver*/
void act3(void) {
    int r, c;
    system("cls");
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    printf("\n\nYour Punch Card:\n\n");
    punchCard(r, c);
    if (actAgain("Do you want to try again for another punch card?")) act3();
}
