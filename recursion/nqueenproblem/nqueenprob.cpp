#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool queenplace(int n,int board[][10],int i,int j){
for(int row=0;row<10;row++){
    if(board[row][j]==1){
        return false;
    }
    }
    
    int x=i;
    int y=j;
    while(x>=0&&y>=00)
    if(board[x][y]==1){
        return false;
        x--;
        y--;
        

  }
     x=i;
      y=j;
    while(x>=0&&y>=00)
    if(board[x][y]==1){
        return false;
        x++;
        y--;
        



  }
return false;
}
bool queengenerate(int n,int board[][10],int i){
if(i==n){
    for(int x=0;x<n;x++){
        for(int y=0;y<n;y++){
            cout<<board[x][y];
        }
cout<<endl;
    }
    cout<<endl;
    return true;
}
for(int j=0;j<n;j++){
    if(queenplace(n,board,i,j)){
        board[i][j]=1;
               bool c= queengenerate(n,board,i+1);
               if(c){
                   return true;
               }         
    }
    board[i][j]=0;
}
return false;
}
int main()
{
    int n;
    cin>>n;
    int board[n][n] ;
    queengenerate(n,board,0); 
      return 0;
}