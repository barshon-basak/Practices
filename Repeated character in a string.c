
#include<stdio.h>

int main(){

char str[101];
int freq[100];
scanf("%s",str);
int n = strlen(str);
for(int i=0; i<n ; i++){
    freq[i]=-1;
}

int count;


for(int i=0; str[i] != '\0' ; i++){
    count = 1;
    for (int j= i+1 ; str[j] != '\0' ; j++){
        if(str[i]==str[j]){
            count++;
            freq[j]= 0;
        }
    }
        if( freq[i] != 0)
            {
            freq[i] = count;
        }
}

for(int i=0; str[i] != '\0' ; i++){
    if(freq[i] > 1){
       printf("%c occurs %d times\n",str[i],freq[i]);
    }
}

return 0;}

