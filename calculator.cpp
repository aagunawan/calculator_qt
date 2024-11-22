#include <iostream>
#include "Calculator.h"
#include <cmath>
#include <set>
#include <string>

void Calculator::read_input()
{
    std::cout << "Calculator" << std::endl;
    std::vector<float> nums(2);
    std::string oper{};

    std::set<std::string> binaryOperators = { "+", "-", "*", "/" };
    std::set<std::string> unaryOperators = { "log", "sin", "cos", "sqrt" };

    while (true)
    {
        std::cin >> nums[0];
        std::cin >> oper;
        if (binaryOperators.count(oper))
        {
            std::cin >> nums[1];
            parse_input(oper, nums);
        }
        else if (unaryOperators.count(oper))
        {
            parse_input(oper, nums);
        }
        else
        {
            std::cout << "Not a valid operators" << std::endl;
        }

    }

}
template <typename T>
void Calculator::parse_input(std::string oper, const std::vector<T> nums)
{
    if (oper == "+")
    {
        add(nums[0], nums[1]);
    }
    else if (oper == "log")
    {
        log_calc(nums[0]);
    }
}

template <typename T>
void Calculator::add(T x, T y)
{
    std::cout << x + y << std::endl;
}

template <typename T>
void Calculator::log_calc(T x)
{
    std::cout << log(x) << std::endl;
}
