#include <stdio.h>

void splitString(char str[]) {
    int wordStart = 0; 
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {           
            for (int j = wordStart; j < i; j++) {
                printf("%c", str[j]);
            }
            printf("\n");
            wordStart = i + 1; 
        }
    }
    
    for (int j = wordStart; str[j] != '\0' && str[j] != '\n'; j++) {
        printf("%c", str[j]);
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    splitString(str);
    
    return 0;
}
