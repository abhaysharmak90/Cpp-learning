#include <iostream>

class INTEGER
{
    int number; // private by default

public:
    void num_getter() { std::cout << number << std::endl; }
    void num_setter(int num2) { number = num2; }
    INTEGER(int num1) : number{num1}
    {
        std::cout << "constructer is called for " << num1 << "\n";
    }
};

int main()
{
    INTEGER num(6), num2(9), num3{7}, num4(217);
    // num.number;
    num.num_getter();
    num2.num_getter();
    num3.num_getter();
    num4.num_getter();
    num.num_setter(69);
    num2.num_setter(69);
    num3.num_setter(69);
    num4.num_setter(69);
    num.num_getter();
    num2.num_getter();
    num3.num_getter();
    num4.num_getter();
}