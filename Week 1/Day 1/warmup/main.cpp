#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(){
    ifstream f("info.json");
    stringstream buffer;
    buffer << f.rdbuf();
    cout << buffer.str() << endl;

    return 0;
}