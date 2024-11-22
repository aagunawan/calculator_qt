#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <vector>
#include <string>

class Calculator
{
private:
    void read_input();

    template <typename T>
    void parse_input(std::string oper, const std::vector<T> nums);
public:
    Calculator()
    {
        read_input();
    }
    template <typename T>
    void add(T x, T y);

    template <typename T>
    void log_calc(T x);
};

#endif
