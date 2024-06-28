#include <stdio.h>
#include <string.h>

int count_char(const char *str, char c) {
    int i, count = 0;
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == c) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    char c;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; 
    printf("Enter a character: ");
    scanf(" %c", &c);

    int count = count_char(str, c);

    if (count > 0) {
        printf("Character '%c' found %d times.\n", c, count);
    } else {
        printf("Character '%c' not found.\n", c);
    }

    return 0;
}

