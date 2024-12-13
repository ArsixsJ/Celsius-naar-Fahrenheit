#include<iostream>

using std::cout;
using std::cin;

int main(){ 

    double C;
    double result;

    cout << "**** CALCULATE CELSIUS TO FARHENHEIT **** " << '\n';
   
    while ( C <= 273 || C >= -273){
    
    cout << "Choose your temperature in Celsius: "; cin >> C;
   
   if(C > 273 || C < -273){
     cout << "INVALID INPUT PLEASE CHOOSE -273 < C < 273." << '\n';
    }

    else if(C <= 273 || C >= -273){
    result = (C * 9/5) + 32;
    cout << "Your result is: " << result << " F" << '\n';
    }
   
}
    return 0;
}
