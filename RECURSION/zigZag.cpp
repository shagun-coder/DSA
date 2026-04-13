// zig zag
#include <iostream>
using namespace std;
void zigZag(int n){
    if( n== 0) return;
    cout << n << " ";
    zigZag(n-1);
        cout << n << " ";
    zigZag(n-1);
        cout << n << " ";   
}
int main()
{
    cout << "Zig Zag: ";
    cout<<endl;
   zigZag(3);
   cout << endl;
}
