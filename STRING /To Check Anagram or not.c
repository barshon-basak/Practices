#include <stdio.h>
#include <stdbool.h>

int areAnagrams(char str1[], char str2[]) {
    int count[256] = {0};

    for (int i = 0; str1[i] != '\0'; i++) {
        int temp = str1[i];
        count[temp]++;
    }

    for (int i = 0; str2[i] != '\0'; i++) {
          int temp = str2[i];
        count[temp]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    int result = areAnagrams(str1, str2);
    if (result ==1) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
