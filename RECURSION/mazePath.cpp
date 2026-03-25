// we have either downwards or rightwards
#include <iostream>
using namespace std;
int Maze(int sr,int sc,int er,int ec)
{
    if(sr>er|| sc>ec) return 0;
    if (sr == er && sc == ec)
        return 1;

    int rightWays =Maze(sr,sc+1,er,ec);
    int downWays =Maze(sr+1,sc,er,ec);
    int totalways = rightWays+ downWays;
    return totalways;
}

int  Maze2(int row ,int col){
    if(row<1|| col<1) return 0;
    if(row == 1&& col == 1) return 1;
    int rightWays = Maze2(row ,col -1);
    int downWays = Maze2(row-1,col );
    int totalways = rightWays + downWays;
    return totalways;
}

// void printPath(int sr, int sc, int er, int ec,string s)
// {
//     if (sr > er || sc > ec)
//         return;
//     if (sr == er && sc == ec){ //destination reached
//         cout<<s <<endl;
//         return;
//     }
        

//     printPath(sr, sc + 1, er, ec ,s+"R"); //rightwards
//   printPath(sr + 1, sc, er, ec,s+'D');
   
// }

void printPath(int row ,int col, string s)
{
    if (row < 1 || col < 1)
        return;
    if (row == 1 && col == 1) // destination reached
    { 
        cout << s << endl;
       
        return;
    }

    printPath(row ,col-1 ,s + "R"); // rightwards
    printPath(row-1,col ,s + 'D');
}
int main(){
   printPath(3,3,"");
   cout <<Maze2(3,4);
}