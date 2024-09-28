#include <stdio.h>

int main() {
    int x = 0; 
    int y = 0; 

    for(;;) {  
        if (x < 10) {
            x++; 
        } else {
            y++; 
            x = 0;  
        }

        
        printf("x = %d, y = %d\n", x, y);
    }

    return 0;  // This will never be reached
}