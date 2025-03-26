#include <stdio.h>
#include <string.h>
#include <ctype.h>

decrypt_caesar(str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            char base = isupper(str[i]) ? 'A' : 'a';
            str[i] = ((str[i] - base - 22 + 26) % 26) + base;  
        }

}

int main() {
    char link[] = "nxwob78r"; 
    int input_shift;
    
    printf("Enter the secret 2-digit value: ");
    scanf("%d", input_shift); 

    if (input_shift == (1+3+5+7+6)) {  
        decrypt_caesar(link);
        
        printf("Revealed link: https://rentry.co/%s\n", link);  
    } else {
        printf("Incorrect. Access denied.\n");  
    }

    return 0;
}