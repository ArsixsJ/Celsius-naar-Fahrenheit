#include<iostream>

using std::cout;
using std::cin;

int main() {

    double y;
    double x;
    double sum; 
    
    while (x >= 0 || x <=0 || y >= 0 || y <=0){
    cout << "What is your first number?: ";
    cin >> x;
    
    cout << " What is your second number?: ";
    cin >> y;
    
    sum = x + y;
    
    cout << "The sum of your numbers are: " << sum << '\n';
}

    return 0;
}