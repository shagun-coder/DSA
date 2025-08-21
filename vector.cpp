//VECTORS in c++
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;  // need not to mention size
    v.push_back (1); //
    v.push_back (2); 
    v.push_back (3);
    v.push_back (4); 
    v.push_back (5);
    v.push_back (6);
    for(int i = 0; i < v.size(); i++){ // because we don,t the sze of array
        cout << v[i] << " ";
   

    }
    cout << endl;
    cout << "Size of vector: " << v.size() << endl; // size of vector
    cout << "capacity of vector:" << v.capacity() << endl; // capacity of vector
    v.pop_back();
    v.pop_back ();

    v.pop_back(); // remove last element
    cout << "size of vector after pop_back: "<< v.size() << endl;
    cout << "capacity of vector after pop_back: " << v.capacity() << endl;
//     for(int i = 0; i < v.size(); i++){ 
//         cout << v[i] << " ";

//  }
//     cout << endl;
//     v.insert(v.begin() + 2, 10); // insert 10 at index 2
//     for(int i = 0; i < v.size(); i++){ 
//         cout << v[i] << " ";
//     }
//     cout << endl;
//     v.erase(v.begin() + 3); // erase element at index 3
//     for(int i = 0; i < v.size(); i++){ 
//         cout << v[i] << " ";
//     }
//     cout << endl;
//     return 0;

}
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// // {

