#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    int maiuscula = 1;

    while (scanf("%c", &c) != EOF) {

        if (c == '\n') {
            maiuscula = 1;
            printf("\n");
            continue;
        }

        if (c == ' ') {
            printf(" ");
            continue;
        }

        if (maiuscula)
            printf("%c", toupper(c));
        else
            printf("%c", tolower(c));

        maiuscula = !maiuscula;
    }

    return 0;
}
