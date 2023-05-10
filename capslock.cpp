#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    char add;
    string out = "";
    cin >> str;
    int l = str.size();
    for (int i = 0; l > i; i++)
    {
        add = toupper(str[i]);
        out += add;
    }
    cout << out;
    return 0;
}