
// #include<iostream>
// using namespace std;
// int main(){
//     char str[6] = {'s','h','a','g','u','n'};
//     for(int i = 0; str[i]!='\0'; i++){ // null character is used to mark the end of a string
//         cout << str[i] << " ";
//     }
//     cout << str; //it prints the string until it finds the null character, but since we have not added a null character at the end of the array, it will keep printing until it finds a null character in memory, which is undefined behavior, it may print garbage value or it may print nothing, it depends on the compiler and the memory layout, but in this case it will print "shagun" because there is a null character after 'n' in memory, but this is not guaranteed and should not be relied upon
//     cout << endl;

// char ch = '\0'; // null character, used to mark the end of a string, it is a special character that is not visible, it is used to indicate the end of a string, it is also used to initialize a string to an empty string

// cout << (int)(str[7]); // garbage value, because str[7] is out of bounds, but it will print null character which is not visible, so we cast it to int to see the value, which is 0
// }
//string as a datatype
#include<iostream>
using namespace std;
int main(){
    string str = "raghav garg"; //
    cout << str; // 
    cout << endl;
    cout << str[0];
    string s;
    getline(cin,s); // only work if string has no spaces
    cout << s;
}
