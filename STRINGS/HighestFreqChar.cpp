/*Given a string consisting of lowercase of english alphabet .
 print the character that is occuring most number of times
*/ 
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string s = "leetcode";           
    vector<int> arr(26, 0);    // Create an array of size 26 to count frequency of each character, initialized with 0. We will use the index of the array to represent the character, for example, index 0 will represent 'a', index 1 will represent 'b', and so on, until index 25 which will represent 'z'. So when we encounter a character in the string, we will convert it to its corresponding index by subtracting 'a' from it, for example, if we encounter 'c', we will convert it to index 2 by doing 'c' - 'a', which will give us 2, and then we will increment the count at that index in the array to keep track of how many times that character has occurred in the string.     

    //  Count frequency of each character
    for(int i = 0; i < s.length(); i++){
        char ch = s[i];   // Get the current character from the string
        int ascii =(int)ch;    // Convert the character to its ASCII value, for example, if ch is 'a', ascii will be 97, if ch is 'b', ascii will be 98, and so on, until 'z' which will have an ASCII value of 122. We will use this ASCII value to find the corresponding index in the array by subtracting 97 from it, because 'a' has an ASCII value of 97, so when we subtract 97 from it, we will get 0 which is the index for 'a' in the array, for 'b' which has an ASCII value of 98, when we subtract 97 from it, we will get 1 which is the index for 'b' in the array, and so on until 'z' which has an ASCII value of 122, when we subtract 97 from it, we will get 25 which is the index for 'z' in the array. So by converting the character to its ASCII value and then finding the corresponding index in the array, we can easily keep track of the frequency of each character in the string.  

        arr[ascii-97]++;    // Increment the count of the character in the array, because we have encountered this character in the string, so we will increment the count at the corresponding index in the array to keep track of how many times this character has occurred in the string. For example, if we encounter 'c', which has an ASCII value of 99, when we subtract 97 from it, we will get 2, which is the index for 'c' in the array, so we will increment arr[2] by 1 to indicate that we have encountered 'c' one more time in the string. We will repeat this process for every character in the string, and at the end of this loop, we will have the frequency of each character stored in the array arr.

        cout << ch << " " << ascii << " " << arr[ascii - 97] << endl; // it will print the character, its ASCII value, and its frequency in the string, for example, if we encounter 'c', it will print 'c', 99, and the frequency of 'c' in the string so far. This is just for debugging purposes to see how the frequency of each character is being updated in the array as we iterate through the string.
      }
    // Find maximum frequency
    int mx = 0;
    for(int i = 0; i < 26; i++){
        if(arr[i] > mx)             // If current letter count is bigger than mx
            mx = arr[i];            // Update mx
    }
    cout << "Max frequency is: " << mx << endl; // it will print the maximum frequency of any character in the string, for example, if the maximum frequency is 3, it will print "Max frequency is: 3". This is just for debugging purposes to see what the maximum frequency is before we find the character that has this maximum frequency.
    
    char ch;             
    for(int i = 0; i < 26; i++){
        if(arr[i] == mx){    // If this letter has the max frequency  
            int ascii = i+97; // Convert the index back to ASCII value, because the index in the array represents the character, for example, if i is 0, it represents 'a', which has an ASCII value of 97, so when we add 97 to it, we will get 97 which is the ASCII value for 'a', if i is 1, it represents 'b', which has an ASCII value of 98, so when we add 97 to it, we will get 98 which is the ASCII value for 'b', and so on until i is 25 which represents 'z', which has an ASCII value of 122, so when we add 97 to it, we will get 122 which is the ASCII value for 'z'. So by converting the index back to its corresponding ASCII value, we can find out which character has the maximum frequency in the string.
            
            ch = (char)ascii; // Convert the ASCII value back to character, because we want to print the character that has the maximum frequency, for example, if ascii is 99, which corresponds to 'c', when we cast it to char, we will get 'c', so ch will be 'c' which is the character that has the maximum frequency in the string. We will repeat this process for every index in the array, and if we find an index that has a frequency equal to the maximum frequency, we will convert that index to its corresponding character and store it in ch. If there are multiple characters with the same maximum frequency, we will store the first one we encounter in ch, because we want to return the first character that has the maximum frequency in case of ties.
                 
                   
            break;                  // Stop at first max (if multiple, choose first)
        }
    }

    cout << "High freq character is: " << ch << " " << mx << endl;

}
    

