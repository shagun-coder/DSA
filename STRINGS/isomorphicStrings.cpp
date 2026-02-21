#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution { 
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false;

        vector<int> v(150, 1000);

        // Check mapping from s -> t
        for(int i = 0; i < s.length(); i++){
            int indx = (int)s[i];
            if(v[indx] == 1000) 
                v[indx] = s[i] - t[i];
            else if(v[indx] != s[i] - t[i]) 
                return false;
        }

        // Reset array
        for(int i = 0; i < 150; i++) v[i] = 1000;

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

    string s1 = "egg", t1 = "add";
    string s2 = "foo", t2 = "bar";

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