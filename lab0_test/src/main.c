#include <stm32f0xx.h>

int main() {
    int x = 0; 
    int y = 0; 
    for(;;) {  
        x++;
        if (x == 10) {
            y++; 
            x = 0;  
        }
        
    }
    return 0;  
}