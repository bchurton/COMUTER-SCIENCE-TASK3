#include <iostream>
#include <cstdio>

using namespace std;

int main(void) {
    uint8_t result = 0;
    uint8_t recv_count = 0;
    int data;
    
    cout << "What is your age? ";
    
    while (recv_count < 2 && (data = ::getchar()) >= '0' && data <= '9') {
        result *= 10;
        result += data - '0';
        recv_count++;
    }
    
    if (recv_count == 0) {
        cout << "Input must be a number";
    } else if (result < 15) {
        cout << "Sorry, you cannot watch this film";
    } else {
        cout << "You are old enough to watch this film!";
    }
    
    cout << endl;
    return 0;
}
