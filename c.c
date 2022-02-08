#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint8_t result = 0;
    uint8_t recv_count = 0;
    int data;
    
    fprintf(stdout, "What is your age? ");
    
    while (recv_count < 2 && (data = getchar()) >= '0' && data <= '9') {
        result *= 10;
        result += data - '0';
        recv_count++;
    }
    
    if (recv_count == 0) {
        puts("Input must be a number");
    } else if (result < 15) {
        puts("Sorry, you cannot watch this film");
    } else {
        puts("You are old enough to watch this film!");
    }
    
    return 0;
}
