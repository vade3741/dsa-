#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//to print number of paths we can take datapath as int
bool ratinamaze(char maze[10][10],int solution[10][10],int i,int j,int m,int n){
if(i==m &&j==n){
    solution[m][n]=1;
    //printing the path
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            cout<<solution[i][j]<<" ";
        }
        cout<<endl;
    }
        cout<<endl;
 
    return true;
}
//rat sjould be in the grid
if(i>m||j>n){
    return false;
}
if(maze[i][j]=='X'){
    return false;
}
//assume that solution exist through current cell
solution[i][j]=1;
//recurisve case
bool rightsuccess=ratinamaze(maze,solution,i,j+1,m,n);
bool downsuccess=ratinamaze(maze,solution,i+1,j,m,n);
solution[i][j]=0;
if(rightsuccess||downsuccess){
    return true;
}
return false;
}
int  count_ratinamaze(char maze[10][10],int solution[10][10],int i,int j,int m,int n,int &count){

if(i==m &&j==n){
    solution[m][n]=1;
    count++;
 
    return true;
}
//rat sjould be in the grid
if(i>m||j>n){
    return false;
}
if(maze[i][j]=='X'){
    return false;
}
//assume that solution exist through current cell
solution[i][j]=1;
//recurisve case
bool rightsuccess=count_ratinamaze(maze,solution,i,j+1,m,n,count);
bool downsuccess=count_ratinamaze(maze,solution,i+1,j,m,n,count);
solution[i][j]=0;
if(rightsuccess||downsuccess){
    return true;
}
return false;

return count;
}
int main()
{
    char maze[10][10]={
        "0000",
        "00X0",
        "000X",
        "0X00",
    };
    int solution[10][10]={0};
bool ans=ratinamaze(maze,solution,0,0,3,3);
if(ans==false){
    cout<<"PATH DOESNOT EXIST";
}int count=0;
count_ratinamaze(maze,solution,0,0,3,3,count);
cout<<count<<endl;
      return 0;
}