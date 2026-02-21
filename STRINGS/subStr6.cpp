// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str  = "abcdef";
//     cout << str.substr(2);

// }
// input a string of even length and the second half of that string using inbuilt substr
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout << "Enter string :";
    getline(cin,str);
    int n = str.length();
    cout << str.substr(n/2);
}
