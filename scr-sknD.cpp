#include <iostream>
#include <vector>
using namespace std;
int string_length, length;
string n;
vector<int> onetree;
int main()
{
	cin >> n;
	string_length = n.length();
	length = string_length / 2;
	for (int i = 0; i < length; i++)
	{
		cout << n[i] << n[string_length - i - 1];
	}
}