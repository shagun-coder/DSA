/*Write a C++ program that takes a string consisting 
only digits (0 to 9) as input and finds the index of the character 
with the highest value. If there are multiple occurrences 
of the maximum value, return the index of the first occurrence*/
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
    
    // string s  =  "1727346";
    // string temp = s;// we will create a copy of the original string because we will sort the copy to find the maximum digit, but we want to keep the original string unchanged to find the index of the maximum digit in the original string
    // sort(temp.begin(),temp.end()); // it will sort the string in ascending order, so the maximum digit will be at the end of the string, and we can easily access it using temp.back() which will give us the last character of the string, which is the maximum digit
    // char max = temp.back(); // it will give us the last character of the sorted string, which is the maximum digit, because the string is sorted in ascending order, so the maximum digit will be at the end of the string
    // int index = s.find(max);// it will find the index of the first occurrence of the maximum digit in the original string, because we want to return the index of the first occurrence of the maximum digit, if there are multiple occurrences of the maximum digit, we will return the index of the first occurrence, so we will use the find() function which will return the index of the first occurrence of the character in the string
    // cout <<"max digit :"<<max<<endl;
    // cout <<"index in original string :" <<index<<endl;
   

    // OR
   
}
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "1727346";

    int x = stoi(s);   // string → integer
    int max = 0;

    while(x > 0){// WHILE -> we will keep extracting the last digit of the number and compare it with the current maximum digit, if the extracted digit is greater than the current maximum, we will update the maximum, and then we will remove the last digit from the number by dividing it by 10, we will repeat this process until the number becomes 0, at the end of the loop, we will have the maximum digit in the variable max
        int digit = x % 10;  // // it will give us the last digit of the number, because the modulus operator will give us the remainder when we divide the number by 10, and the remainder will be the last digit of the number 
        if(digit > max){
            max = digit;
        }
        x = x / 10; // // it will remove the last digit from the number, because when we divide the number by 10, it will shift all the digits to the right, and the last digit will be removed, for example, if x is 1727346, after the first iteration, x will become 172734, after the second iteration, x will become 17273, after the third iteration, x will become 1727, after the fourth iteration, x will become 172, after the fifth iteration, x will become 17, after the sixth iteration, x will become 1, and after the seventh iteration, x will become 0, at which point we will stop the loop
    }

    cout << max;
}
