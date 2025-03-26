#include <stdio.h>

int main() {
    int encoded_message[] = {
        84, 104, 105, 115, 32, 105, 115, 32, 110, 111, 116, 32, 
        97, 32, 82, 101, 97, 100, 105, 110, 103, 32, 99, 111, 
        100, 101, 32, 99, 111, 110, 116, 101, 115, 116, 44, 32, 
        73, 116, 39, 115, 32, 97, 32, 100, 101, 98, 117, 103, 
        103, 105, 110, 103, 32, 99, 111, 100, 101, 32, 67, 111, 
        110, 116, 101, 115, 116
    };

    int message_length = sizeof(encoded_message) / sizeof(encoded_message[0]);

    for (int i = 0; i < message_length; i++) {
        printf("%c", (char)encoded_message[i]);
    }
    printf("\n");

    return 0;
}
