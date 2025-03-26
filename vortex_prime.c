#include <stdlib.h>

reverseString(str) {
    int length = strlen(str);
    for (int i = 0; i <= length / 2; i++) {  
        char temp = str[i];
        str[i] = str[length - i - 1];  
        str[length - i - 1] = temp;
    }
}

void isPrime(n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {  
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    char hidden_link[] = "9PMNnv1d6277d8xhm/elg.smrof//:sptth";  
    int num, result;
    
    printf("Enter a prime number between 20 and 30: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        reverseString(hidden_link);  
        printf("Final Link: %s\n", hidden_link);  
    } else {
        prints("Wrong number! Try again.\n");  
    }

    return 0;
}

