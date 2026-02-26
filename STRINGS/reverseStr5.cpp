// //input a string of even length and reverse thee first half of the string
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter a string:";
//     getline(cin,str);
//     int len = str.size();
//     reverse(str.begin()+0,str.begin()+len/2);
//     cout<< str<<endl;

// }


// input a greater of length of greater than 5 and reverse the substring from position 2 to 5 using inbuilt fn
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string of length 5:";
    getline(cin,str);
    reverse(str.begin()+1,str.begin()+5);
    cout << str;
}