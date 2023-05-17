#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int hi;
void compute(int n, int **v,int row,int col,int count){

if((row<0 || row>=n)||(col<0 || col>=n)|| v[row][col]==0){
    return;
}
v[row][col]=0;
count += 1;
hi = max(hi,count);
compute(n,v,row-2,col-1,count);
compute(n,v,row-2,col+1,count);
compute(n,v,row-1,col-2,count);
compute(n,v,row-1,col+2,count);
compute(n,v,row+1,col-2,count);
compute(n,v,row+1,col+2,count);
compute(n,v,row+2,col-1,count);
compute(n,v,row+2,col+1,count);
v[row][col]=1;

}
int main()
{
    int n,q=0;
    cin>>n;
    int **grid;

    grid= new int *[n];

    for(int i=0;i<n;i++){
        grid[i] = new int[n];
        for(int j=0;j<n;j++){
           
           cin>>grid[i][j];
           if(grid[i][j] == 1) {
            q +=1;
           }

        }
    }
    int count = 0;
    compute(n,grid,0,0,count);
    cout<<q-hi<<endl;

      return 0;
}