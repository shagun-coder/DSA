
// use Recursion to remove character
#include <iostream>
#include<string>
using namespace std;
// void removeChar(string ans,string original)
// {
//     if(original.length()==0 ){
//         cout<<ans;
//         return;
//     }
//     char ch = original[0];
//     if(ch=='a')
//         removeChar(ans ,original.substr(1));
//     else
//         removeChar(ans + ch,  original.substr(1));
// }
// int main()
// {
//     string str = "shagun";
//     removeChar("",str);
  
// }


// Method => 2
void removeChar(string ans, string original,int indx)
{
    if (indx == original.length())
    {
        cout << ans;
        return;
    }
    char ch = original[indx];
    if (ch == 'a')
        removeChar(ans, original,indx+1);
    else
        removeChar(ans + ch, original ,indx+1);
}
int main()
{
    string str = "shagun";
    removeChar("", str,0);
}