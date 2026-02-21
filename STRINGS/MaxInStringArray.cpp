/*given n string conisting of digit 0 to 9 return of string which has max value*/
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
    string arr[] ={"012","0023","456","940","002901"};
    int max = stoi(arr[0]);
    string smax = arr[0];
    for(int i = 0; i<6;i++){
        int x = stoi(arr[i]);
        if(x>max){
            max = x;
            smax = arr[i];

        }
    }
    cout << max <<"  " <<smax;
}