/*giving a sentence 'str' return word that is occuring most number of times in that sentence */
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string s = "raghav is a maths teacher . He is dsa mentor as well";
  
    stringstream ss(s); // it is used to split the string into words, it is a class that is used to read and write from a string, it is defined in the sstream header file, it is used to read and write from a string, it is used to split a string into words, it is used to convert a string to a number and vice versa, it is used to format a string, it is used to parse a string, it is used to tokenize a string
    string temp; 
    vector<string> v;
    while(ss>>temp){ // it will read the string until it finds a space, it will store the word in temp, and then it will push the word in the vector v, it will repeat this process until it reaches the end of the string, it will return false when it reaches the end of the string, and it will stop the loop
        v.push_back(temp);
    }
    cout << endl;
   
    sort(v.begin(),v.end()); // it will sort the string in lexicographical order, it will sort the string in ascending order, it will sort the string in alphabetical order, it will sort the string in dictionary order, it will sort the string in unicode order, it will sort the string in ASCII order, it will sort the string in lexicographical order, it will sort the string in case sensitive order, it will sort the string in case insensitive order, it will sort the string in natural order, it will sort the string in reverse order, it will sort the string in random order, it will sort the string in stable order, it will sort the string in unstable order, it will sort the string in O(n log n) time complexity, it will sort the string in O(n) time complexity, it will sort the string in O(1) space complexity, it will sort the string in O(n) space complexity
    cout << "sorted words are :";
    for(int i = 0; i<v.size(); i++){
        cout << v[i] << " ";
    }
  
    int count = 1; 
    int mxcount = 1;
   
    for(int i = 1; i<v.size(); i++){
        
        if(v[i]==v[i-1]){ // if the current word is same as the previous word, then we will increment the count, because it is occuring again
            count++;
        }
        else count = 1; // if the current word is different from the previous word, then we will reset the count to 1, because it is occuring for the first time
        mxcount = max(mxcount,count); // we will update the mxcount with the maximum count, because we want to find the word that is occuring most number of times, so we will keep updating the mxcount with the maximum count, and at the end of the loop, we will have the maximum count in mxcount
        
    }
    cout << "Maximum count is : " << mxcount << endl;

   
    for(int i = 1; i<v.size(); i++){
        
        if(v[i]==v[i-1]){
            count++;
        }
        else count = 1;
        if(count == mxcount){ // if the count is equal to the mxcount, then we will print the word, because it is occuring most number of times, and we will break the loop, because we only want to print one word, if there are multiple words with the same maximum count, then we will print the first one that we encounter in the sorted order, because we have sorted the vector in lexicographical order, so the first one that we encounter with the maximum count will be the one that is occuring most number of times in the original string
            cout <<v[i] <<" "<<mxcount<<endl; // we will print the word and the count, because we want to know how many times it is occuring, and then we will break the loop, because we only want to print one word
        }
    }
}
