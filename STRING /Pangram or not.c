#include <stdio.h>

int main() {
    int n;
    scanf("%d\n", &n);
    char str[n+1];
 fgets(str, sizeof(str), stdin);

    int count[26] = {0};

    for (int i = 0; i < n; i++) {
        char c= str[i];

        if (c >= 'a' && c <= 'z') {
            count[c - 'a']++;
        } else if (c >= 'A' && c <= 'Z') {
            count[c - 'A']++;
        }
    }

    int isPangram = 1;

    for (int i = 0; i < 26; i++) {
        if (count[i] == 0) {
            isPangram = 0;
            break;
        }
    }

    if (isPangram) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
