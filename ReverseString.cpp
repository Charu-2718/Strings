#include <iostream>
#include <algorithm> 
using namespace std;

int main()
{
    string str;
    cout << "Type your string: ";
    getline(cin, str);
    reverse(str.begin(), str.end());
    cout << str << std::endl;
    return 0;
}


