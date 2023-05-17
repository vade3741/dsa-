#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool canplace(int mat[9][9],int i,int j,int n,int number){
for(int x=0;x<n;x++){
    if(mat[x][j]==number||mat[i][x]==number){
        return false;
    }
    int rn=sqrt(n);
    int i_startindexof_grid=(i/rn)*rn;
    int j_startindexof_grid=(j/rn)*rn;
    for(int a=i_startindexof_grid;a<i_startindexof_grid+rn;a++){
        for(int b=j_startindexof_grid;b<j_startindexof_grid+rn;b++){
            if(mat[a][b]==number){
                return false;
            }
        }
    }
}
return true;
}
bool solveSudoko(int mat[9][9],int i,int j,int n){
//base case
if(i==n){

for(int r=0;r<n;r++){
for(int q=0;q<n;q++){
    cout<<mat[r][q]<<" ";
}    
cout<<endl;
}
    return true;
}
//case row end
if(j==n){
   return solveSudoko(mat,i+1,0,n);
}
//skip the pre filled cels
if(mat[i][j]!=0){
    return solveSudoko(mat,i,j+1,n);
}
//recursive case
//fill the current cell with possible options
for(int number=1;number<=n;number++){
     if(canplace(mat,i,j,n,number)){
             //Assume that answer is formed
             mat[i][j]=number;
            bool couldsolve= solveSudoko(mat,i,j+1,n);
            if(couldsolve==true){
                return true;
            }
     }
}
mat[i][j]=0;
return false;

}
int main()
{
    int mat[9][9]= {
                   {0,1,0,0,4,0,0,5,0},
                   {4,0,7,0,0,0,6,0,2},
                   {8,2,0,6,0,0,0,7,4},
                   {0,0,0,0,1,0,5,0,0},
                   {5,0,0,0,0,0,0,0,3},
                   {0,0,4,0,5,0,0,0,0},
                   {9,6,0,0,0,3,0,4,5},
                   {3,0,5,0,0,0,8,0,1},
                   {0,7,0,0,2,0,0,3,0}

    };
    solveSudoko(mat,0,0,9);
      return 0;
}