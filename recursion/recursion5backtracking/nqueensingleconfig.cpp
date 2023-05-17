#include<iostream>
using namespace std;
bool couldplace(int board[10][10],int i,int j,int n){
//checking for the coloumn
for(int row=0;row<i;row++){
if(board[row][j]==1){
    return false;
}
}
//check for the left diagonal
int x=i;
int y=j;
while(x>=0&&y>=0){
    if(board[x][y]==1){
        return false;
    
        }
            x--;
            y--;

}
//check for the right diagonal
 x=i;
 y=j;
while(x>=0&&y<n){
    if(board[x][y]==1){
        return false;
    
        }
            x--;
            y++;

}
//this position is now safe,coloumn and diagonals
return true;
}
bool solvequeen(int board[10][10],int i,int n){

//base case
if(i==n){
    //you have successsfully place queens in n rows(0......n-1);
    //print the board;
    for(int x=0;x<n;x++){
           for(int y=0;y<n;y++){
            if(board[x][y]==1){
                cout<<"Q";
            }
            else{
                cout<<"_";
            }

           }
           cout<<endl;
    }
    cout<<endl;
    return false;
}
//recursive case
//Try to place the queen in the current row and call on remaining part which
//will be solved by recurison
for(int j=0;j<n;j++){
    //I have to check if i,j th position is safe to place queen or not
if(couldplace(board,i,j,n)){

board[i][j]=1;
bool nextqueenrakhparaye=solvequeen(board,i+1,n);
    if(nextqueenrakhparaye){
        //place the queen
        return true;
    }
    //means i,j,is not the right position -Assumption is Wrong
    board[i][j]=0;
    //backtrack
}
}
//you have tried for all positons in the current 
//row but couldnot place a queen
return true;
}
int main()
{
    int n;
    cin>>n;
       int board[10][10]={0};
       solvequeen(board,0,n);
      return 0;
}