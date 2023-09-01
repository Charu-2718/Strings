#include <iostream>
#include <algorithm> 
using namespace std;

void leftrotate(string &s, int d)
{
	reverse(s.begin(), s.begin()+d);
	reverse(s.begin()+d, s.end());
	reverse(s.begin(), s.end());
}

void rightrotate(string &s, int d)
{
leftrotate(s, s.length()-d);
}

int main()
{
	string str;
    cout << "Type your string: ";
    getline(cin, str);
	// leftrotate(str, 2);
	// cout << str << endl;

	rightrotate(str, 2);
	cout << str << endl;
	return 0;
}
