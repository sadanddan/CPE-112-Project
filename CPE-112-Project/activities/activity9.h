void topCenterPrint(char[], int, int);
void bottomPrint(char[], int, int);
void restoLogo(float);

void payment(float due) {
    float payment;
    int a = 0;
    if (due == -1) {
        bottomPrint("Thank you! Come again next Time!", 0, 0);
        return;
    }
    while (1) {
        system("cls");
        restoLogo(due);
        bottomPrint("Amount Due: ", 0, 1);
        printf("%0.2f\n", due);
        if (a > 0) printf("Insufficient Payment, enter Payment again: ");
        else printf("Enter Payment: ");
        scanf("%f", &payment);
        a = due -payment;
        if (a <= 0) {
            if (a < 0) printf("Your Change: %0.2f\n", payment -due);
            break;
        }
    }
    printf("Thank you for comming!\nCOME AGAIN NEXT TIME!");
}

void act9(float due, int o) {
    char name[][30] = {
        "Veggie Balls on Stick",
        "Veggie Balls on Cup",
        "Fried Chicken", 
        "Small Blue Berry Juice", 
        "Large Blue Berry Juice", 
        "Isaw", 
        "Chicken Skin", 
        "Bamboo Leaves Wrapped Rice", 
        "Japanese Cake"
    };
    int qntty;
    int prices[] = {5, 10, 25, 5, 10, 5, 20, 4, 5}, i;
    system("cls");
    restoLogo(due);
    bottomPrint("Item                                              Price", 1, (due == -1) ? 13 : 15);
    for (i = 0; i < 9; i++) {
        int j;
        printf("%d: ", i +1);
        printf("%s", name[i]);
        for (j = 0; j < 46 -strlen(name[i]); j++) {
            printf(" ");
        }
        (prices[i] < 10) ? printf("Php  %d\n", prices[i]) :
            printf("Php %d\n", prices[i]);
    }
    if (due != -1) printf("\nAmount Due: Php %0.2f\n", due);
    printf("\nWhat is your Order?\n");
    printf("Enter 0 to Stop Ordering\n");
    if (o) printf("Item not Found! Enter your Order again: ");
    else printf("Enter your Order: ");
    scanf("%d", &o);
    if (o == 0) {
        payment(due);
        if (actAgain("\nWould you like to come again?")) act9(-1, 0);
        return;
    } else if (o <= 9 && o >= 1) {
        printf("How many of %s do you like to buy?\n", name[--o]);
        printf("Enter Quantity: ");
        scanf("%d", &qntty);
        due += ((due == -1.0) ? prices[o]*qntty +1 : prices[o]*qntty);
        act9(due, 0);
    } else {
        act9(due, 1);
        return;
    }
}
