#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;  // need not to mention size
   
    v.push_back (23); //
    v.push_back (6); 
    v.push_back (3);
    v.push_back (7); 
    v.push_back (5);
    v.push_back (9);
    for(int i = 0; i < v.size(); i++){ 
        cout << v[i] << " ";
    }
    cout << endl;
   
    }
