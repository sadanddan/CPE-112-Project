int isVowel(char l) {
    int i = 0;
    char vowels[] = "aeiouAEIOU";
    do {
        if (l == vowels[i]) {
            return 1;
        }
        i++;
    } while (i <= 9);

    return 0;
}

int act10(void) {
    char c;
    system("cls");
    printf("Enter a character: ");
    c = getch();
    if (isblank(c)) {
        printf("%c is a white space", c);
        if (actAgain("\nDo you to try again for another Character?")) act10();
        return;
    }

    if (isdigit(c)) {
        printf("%c is numeric", c);
        if (actAgain("\nDo you to try again for another Character?")) act10();
        return;
    }

    if (isalpha(c)) {
        if (islower(c)) {
            (isVowel(c)) ? printf("%c is a lowercase vowel.", c)
            : printf("%c is an lowercase consonant.", c);
            printf("\nIts uppercase counter part: %c", toupper(c));
            if (actAgain("\nDo you to try again for another Character?")) act10();
            
            return;
        } else {
            (isVowel(c)) ? printf("%c is an uppercase vowel.", c)
            : printf("%c is an uppercase consonant.", c);
            printf("\nIts lowercase counter part: %c", tolower(c));
            if (actAgain("\nDo you to try again for another Character?")) act10();
            
            return;
        }
    }

    printf("%c is a special character.", c);
    if (actAgain("\nDo you to try again for another Character?")) act10();

    return 0;
}
