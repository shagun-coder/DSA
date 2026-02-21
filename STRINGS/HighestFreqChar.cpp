/*Given a string consisting of lowercase of english alphabet .
 print the character that is occuring most number of times
*/ 
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string s = "leetcode";           
    vector<int> arr(26, 0);        

    //  Count frequency of each character
    for(int i = 0; i < s.length(); i++){
        char ch = s[i];   
        int ascii =(int)ch;          
        arr[ascii-97]++;            // Increment its count in the array
    }

    // Find maximum frequency
    int mx = 0;
    for(int i = 0; i < 26; i++){
        if(arr[i] > mx)             // If current letter count is bigger than mx
            mx = arr[i];            // Update mx
    }
    
    char ch;             
    for(int i = 0; i < 26; i++){
        if(arr[i] == mx){    // If this letter has the max frequency  
            int ascii = i+97;
            
            ch = (char)ascii;
                 
                   
            break;                  // Stop at first max (if multiple, choose first)
        }
    }

    cout << "High freq character is: " << ch << " " << mx << endl;


    
}
