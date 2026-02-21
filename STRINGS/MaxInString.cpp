/*Write a C++ program that takes a string consisting 
only digits (0 to 9) as input and finds the index of the character 
with the highest value. If there are multiple occurrences 
of the maximum value, return the index of the first occurrence*/
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
    // string to integer
    string s  =  "1727346";
    // string temp = s;
    // sort(temp.begin(),temp.end());
    // char max = temp.back();
    // int index = s.find(max);
    // cout <<"max digit :"<<max<<endl;
    // cout <<"index in original string :" <<index<<endl;
   
   
}
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "1727346";

    int x = stoi(s);   // string → integer
    int max = 0;

    while(x > 0){
        int digit = x % 10;   // last digit nikala
        if(digit > max){
            max = digit;
        }
        x = x / 10;  // last digit hata diya
    }

    cout << max;
}
