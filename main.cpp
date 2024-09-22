#include <iostream>
#include <string>

using namespace std;

void printString(const char* str)
{
    cout << str << endl;
}

string makeString()
{
    return string("Temporary Object");
}

int main(void)
{
    string str_loc("Local variable");
    cout << str_loc.c_str() << endl;

    const char* char_loc = str_loc.c_str();
    cout << char_loc << endl;

    str_loc = string("Local variable changed");
    cout << char_loc << endl;

    // cout << makeString().c_str() << endl;

    // const char* char_temp = makeString().c_str();
    // cout << char_temp << endl;

    cout << "Test Done" << endl;
}