#include<bits/stdc++.h>

using namespace std;


int main() 
{
	string str;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ']' || str[i] == ')') {
            str[i] = '}';
        } else if (str[i] == '[' || str[i] == '(') {
            str[i] = '{';
        } else if (str[i] == '"') {
            str[i] = '\'';
        }
    }

    // cout<<str;

	return 0;	
}