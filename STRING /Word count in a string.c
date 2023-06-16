#include <stdio.h>

int main() {
    char str[100];
    int wordcount= 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

 for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            wordcount++;
            }
 }
    printf("Number of words: %d\n", wordcount);

    return 0;
}
