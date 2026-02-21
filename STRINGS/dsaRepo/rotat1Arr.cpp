#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
  
}
void reversePart(int i ,int j , vector<int>& a){
    while(i < j){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
     }
for(int k = 0; k<a.size(); k++){
cout << a[k]<<" ";


}



int main(){
    vector<int>v;
    
    v.push_back(1); //
    v.push_back(2); 
    v.push_back(4);
    v.push_back(3); 
    v.push_back(5);
    v.push_back(8);
    display(v);
    cout << endl;
    
    int k = 2;
    int n = v.size();
    if(k>n){
        k = k % n;
    }
    // rotate
    reversePart(0,n-k-1, v);
    reversePart(n-k , n-1 , v);
    reversePart(0,n-1,v);
    display(v);

}
 