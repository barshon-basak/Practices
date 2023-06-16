#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
int n = strlen(str);
    str[0] = toupper(str[0]);
    for(int i=1; str[i] != '\0' ; i++){
        if(str[i]==' ' && i != (n-1)){
            str[i+1] = toupper(str[i+1]);
        }
    }

    printf("String after capitalizing first letter of each word: %s\n", str);

    return 0;
}
