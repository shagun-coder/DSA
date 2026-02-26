#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution { 
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false; // If the lengths of the two strings are different, they cannot be isomorphic, so we return false immediately.

        vector<int> v(150, 1000); // We will use a vector of size 150 to store the mapping of characters from string s to string t and vice versa. We initialize all values to 1000, which is a placeholder value indicating that no mapping has been established for that character yet. The size of 150 is chosen to cover the ASCII character set, which includes characters with ASCII values from 0 to 127, and we have some extra space for safety. We will use the ASCII value of the character as the index in the vector to store the mapping, for example, if we encounter a character 'a' in string s, which has an ASCII value of 97, we will use index 97 in the vector to store the mapping for 'a'. If we encounter a character 'b' in string s, which has an ASCII value of 98, we will use index 98 in the vector to store the mapping for 'b', and so on. This way, we can easily check if a mapping already exists for a character and if it is consistent with the corresponding character in string t.

        // Check mapping from s -> t
        for(int i = 0; i < s.length(); i++){
            int indx = (int)s[i]; // We get the ASCII value of the current character in string s, which we will use as an index in the vector to check or establish the mapping for this character. For example, if s[i] is 'a', then indx will be 97, if s[i] is 'b', then indx will be 98, and so on. This allows us to directly access the mapping for this character in the vector using its ASCII value as the index.
            if(v[indx] == 1000) //  why 1000? -> If the value at this index in the vector is still 1000, it means that we have not established a mapping for this character in string s yet. In this case, we will create a new mapping by storing the difference between the ASCII values of the current characters in string s and string t at this index in the vector. This difference will serve as a unique identifier for the mapping between these two characters. For example, if s[i] is 'a' (ASCII 97) and t[i] is 'x' (ASCII 120), we will store 120 - 97 = 23 at index 97 in the vector to indicate that 'a' maps to 'x'. If we later encounter another character in string s that also maps to 'x', we will check if the stored difference matches the difference for that character, ensuring that the mapping is consistent throughout the strings. 
                v[indx] = s[i] - t[i];
            else if(v[indx] != s[i] - t[i])  // example -> if we have already established a mapping for this character in string s, we will check if the stored difference matches the difference for the current characters in string s and string t. If it does not match, it means that the mapping is inconsistent, and we can conclude that the strings are not isomorphic, so we will return false. For example, if we previously established that 'a' maps to 'x' (with a difference of 23), and later we encounter 'a' again but it maps to 'y' (with a difference of 24), this inconsistency indicates that the strings cannot be isomorphic, and we will return false.
                return false;
        }

        // Reset array
        for(int i = 0; i < 150; i++) v[i] = 1000;// After checking the mapping from string s to string t, we reset the vector to its initial state (all values set to 1000) so that we can use it again to check the mapping from string t to string s. This is necessary because we need to ensure that the mapping is consistent in both directions for the strings to be considered isomorphic.

        // Check mapping from t -> s
        for(int i = 0; i < t.length(); i++){
            int indx = (int)t[i];
            if(v[indx] == 1000) 
                v[indx] = t[i] - s[i];
            else if(v[indx] != t[i] - s[i]) 
                return false;
        }

        return true;
    }
};

int main() {
    Solution obj1, obj2;

    string s1 = "egg", t1 = "add"; // These two strings are isomorphic because we can replace 'e' with 'a' and 'g' with 'd' to get from "egg" to "add". The mapping is consistent for all occurrences of the characters, so obj1.isIsomorphic(s1, t1) should return true.
    string s2 = "foo", t2 = "bar"; // These two strings are not isomorphic because we cannot replace 'f' with 'b', 'o' with 'a', and 'o' with 'r' consistently. The character 'o' in string s2 maps to both 'a' and 'r' in string t2, which is inconsistent, so obj2.isIsomorphic(s2, t2) should return false.

    // obj1
    if(obj1.isIsomorphic(s1, t1))
        cout << "obj1: True" << endl;
    else
        cout << "obj1: False" << endl;

    // obj2
    if(obj2.isIsomorphic(s2, t2))
        cout << "obj2: True" << endl;
    else
        cout << "obj2: False" << endl;

    return 0;
}