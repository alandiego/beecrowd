#include <stdio.h>

int main() {

    char c;
    int italico = 0, negrito = 0;

    while ((c = getchar()) != EOF) {

        if (c == '_') {

            if (italico == 0) {
                printf("<i>");
                italico = 1;
            } else {
                printf("</i>");
                italico = 0;
            }

        } else if (c == '*') {

            if (negrito == 0) {
                printf("<b>");
                negrito = 1;
            } else {
                printf("</b>");
                negrito = 0;
            }

        } else {
            printf("%c", c);
        }
    }

    return 0;
}
