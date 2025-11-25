//Gabriel Cabezudo
//11/24/2025
//This program uses a for-loop that prints numbers from 1 to a number <1000 entered by the user

#include <iostream>
using namespace std;

void loop(){
    int limit;
    limit = 1000;
   
    cout << "Enter a positive integer: ";
    cin >> limit;
    for (int i = 1; i <= limit; ++i) {
        cout << i << " ";
    }
}
int main() {
    loop();
    return 0;
}