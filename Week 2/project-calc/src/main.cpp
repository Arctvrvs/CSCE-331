# include <iostream>
#include <calc.hpp>

using namespace std;

int main()
{
    try

    {
        cout << "8 / 0 = " << div_mine(8, 0) << '\n';
    }
    catch(const exception& e)
    {
        cerr << "Exception thrown: " << e.what() << '\n';
    }

    auto safe = safe_div(8,0);

    if (safe){
        cout << " 8 / 0 = " << *safe << '\n';
    } else{
    cout << "safe_div caught divide by zero.\n";
    }

    return 0;
}