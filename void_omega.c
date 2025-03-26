#include <stdio.h>
#include <unistd.h>  

int main() {
    while (1) { 
        printf("%c", 79); 
        printf("%c", 79); 
        printf("%c", 80); 
        printf("%c", 83); 
        printf("%c", 87); 
        printf("%c", 82)  
        printf("%c", 79); 
        printf("%c", 78); 
        printf("%c", 71); 
        printf("%c", 67); 
        printf("%c", 79) 
        printf("%c", 68);  
        printf("%c", 69); 
        printf("\n");
        
        usleep(50000);
    }
    return 0;
}