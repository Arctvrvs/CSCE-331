#include <iostream>
#include <stdexcept>
#include <calc.hpp>
#include <optional>

using namespace std;

int add(int a, int b){
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int div_mine(int a, int b) {
    if (b == 0) {
        throw invalid_argument("division by zero");
    }
    return a / b;
}

optional<int> safe_div(int a, int b)
{
    if (b == 0)
    {
        return nullopt;
    }
    return a / b;
}