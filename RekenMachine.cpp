#include <iostream>
#include <math.h>
#include <conio.h>

int main() {

    // char Option;
    // int Value;

    // Option = _getch();
     // Option = Value;

    float firstNum, secondNum, Sum;
    int Option;
    std::string Operator;

    std::cout << "Type your sum [Example: x - x, x + x]: \n"; 
    std::cin >> firstNum >> Operator >> secondNum;

    if (Operator == "+") {
        Sum;
        Sum = firstNum + secondNum;
        std::cout << "Your answer is: " << Sum << "\n";
    }
    else if (Operator == "-") {
        Sum;
        Sum = firstNum - secondNum;
        std::cout << "Your answer is: " << Sum << "\n";
    }
    else if (Operator == "*") {
        Sum;
        Sum = firstNum * secondNum;
        std::cout << "Your answer is: " << Sum << "\n";
    }
    else if (Operator == "/") { 
        Sum;
        Sum = firstNum / secondNum;
        std::cout << "Your answer is: " << Sum << "\n";
    }





}
