#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

 int frequency[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        frequency[(int)str[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            printf("'%c' occurs %d times\n", (char)i, frequency[i]);
        }
    }

    return 0;
}
