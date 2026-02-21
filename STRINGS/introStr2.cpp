
// #include<iostream>
// using namespace std;
// int main(){
//     char str[6] = {'s','h','a','g','u','n'};
//     // for(int i = 0; str[i]!='\0'; i++){
//     //     cout << str[i] << " ";
//     // }
//     cout << str;

// char ch = '\0'; // null character

// cout << (int)(str[7]);
//}
// string as a datatype
#include<iostream>
using namespace std;
int main(){
    // string str = "raghav garg"; // charater array
    // cout << str;
    // cout << endl;
    // cout << str[0];
    string s;
    getline(cin,s); // only work if string has no spaces
    cout << s;
}
