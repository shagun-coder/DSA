// using loop
// #include<iostream>
// using namespace std;
// int power(int a ,int b){
//     if(a == 0 && b == 0){
//         cout <<"0 raised to power 0 is not defined ";
//         return -100;
//     }
//     if(a == 0) return 0;

//     int p =  1;
//     for(int i = 1; i<=b; i++){
//         p *= a;
//     }
//     return p;
// }
// int main(){
//   cout<<  power(0,0);
// }

//USING RECURSION
 #include<iostream>
using namespace std;
int power(int a ,int b){
    if(b == 0) return 1;
    return a*power(a,b-1);
}

int main(){
    int b = power(2,4);
    cout << b;
}