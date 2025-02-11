#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if (c>='0' && c<='9'){
        printf("Digit");
    }
    else if((int)a>=65 && (int)a<=122){
        if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || C=='o' || c=='O' || c=='u' || c=='U'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else{
        printf("Special Character");
    }
    return 0;
}