#include <stdio.h>

void tutaaashiq() {
    int code = ((97648973834 - 66497224) / 97) % 1238; 
    printf("%d\n", code);
}
void reverseString(char str[]) {
    int length = strlen(str);  
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i ]; 
        str[length - i ] = temp;
    }
}

int main() {
    char message[] = ":tnih";
    reverseString(message);
    printf("%s", message);  

    int arr[3] = {1, 2, 3, 4}; 

    tutaaaShiq();
    return 0;
}
