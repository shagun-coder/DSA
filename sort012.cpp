//dutch flag algorithm 
#include<iostream>
#include<vector>
using  namespace std;
void display(vector<int>& a) {
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
void sort012(vector<int>&b){
    int n = b.size();
    int low = 0;
    int mid = 0;
    int high = n-1 ;
    while(mid <= high){
        if(b[mid] == 2){
            // swap
            int temp = b[mid];
            b[mid] = b[high];
            b[high] = temp;
            high--;2
        }
        else if(b[mid] == 0){
            int temp = b[mid];
            b[mid] = b[low];
            b[low] = temp;           
            mid++;
            low++;
        }
        else if(b[mid] == 1){
            mid++;
        }
        
    }
    for(int k = 0; k < n; k++ ){
        cout << b[k] << " " ;
    }
}

int main(){
    vector<int> v =  {2,0,2,1,1,0,2};
    cout << "original vector = ";
    display(v);
    
    cout <<"After swapping vector = ";
    sort012(v);


}