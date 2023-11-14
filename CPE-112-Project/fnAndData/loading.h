void loading(void) {
    int i;
    centerPrint("", 0, 0);
    for (i = 0; i < 25; i++) printf("\b");
    for (i = 0; i < 14; i++) {
        printf("%c", 219);
        Sleep(50);
    }
    Sleep(1500);
    printf("%c", 219);
    Sleep(500);
    for(i = 0; i < 35; i++) {
        printf("%c", 219);
    }
    Sleep(500);
}
