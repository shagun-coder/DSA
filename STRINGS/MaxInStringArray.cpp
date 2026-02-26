/*given n string conisting of digit 0 to 9 return of string which has max value*/
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
    string arr[] ={"012","0023","456","940","002901"};
    int max = stoi(arr[0]); // it will convert the string to integer, it will ignore the leading zeros, so "0023" will be converted to 23, "002901" will be converted to 2901, and "012" will be converted to 12, so we can compare the integer values to find the maximum value among the strings
    string smax = arr[0]; // it will store the string which has the maximum value, so if we find a string with a greater value than the current maximum, we will update both the maximum value and the corresponding string
    for(int i = 0; i<5;i++){
        int x = stoi(arr[i]); // it will convert the string to integer, it will ignore the leading zeros, so "0023" will be converted to 23, "002901" will be converted to 2901, and "012" will be converted to 12, so we can compare the integer values to find the maximum value among the strings
        if(x>max){
            max = x;
            smax = arr[i];

        }
    }
    cout << max <<"  " <<smax;
}