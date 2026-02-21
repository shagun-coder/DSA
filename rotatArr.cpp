#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i = 0; i < a.size(); i++){
        cout << a[i]<<" ";

    }
}
void reversePart(int i ,int j, vector<int>&a){
        while(i <= j){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
    }
    
}
void reverse(vector<int>&v){
    int i = 0;
    int j = v.size()-1;
    while(i <= j){
       int temp = v[i];
       v[i] = v[j];
       v[j] = temp;
       i++;
       j--;


    }

}
int main(){

   
    vector<int>v;
    
    v.push_back (1); //
    v.push_back (2); 
    v.push_back (3);
    v.push_back (4); 
    v.push_back (5);
    v.push_back (6);
    display(v);
    cout << endl;
    cout<< "reverse by part of array:";
  
    reversePart(0,2,v);
    display(v);
    cout << endl;
    cout<<"Reverse by part:";
    reverse(v);
  
    display(v);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//ROTATE THE ARRAY.............
// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int>& a){
//     for(int i = 0; i < a.size(); i++){
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }


// int main(){
//     vector<int>v;
    
//     v.push_back (1); //
//     v.push_back (2); 
//     v.push_back (3);
//     v.push_back (4); 
//     v.push_back (5);
//     v.push_back (6);
//     display(v);
//     cout << endl;
//     int i = 0;
//     int j = v.size()-3;
//         while(i <= j){
//             int temp = v[i];
//             v[i] = v[j];
//             v[j] = temp;
//             i++;
//             j--;
//         }
   
//     display(v);

// }
