#include <stdio.h>

int main() {
    char text[50] = "Python";
     printf("Original string: %s\n", text);
    int i = 0;

    while (text[i] != '\0') {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = text[i] + 'A' - 'a';
        }
        i++;
    }

   
    printf("String with lowercase letters replaced: %s\n", text);

    return 0;
}
