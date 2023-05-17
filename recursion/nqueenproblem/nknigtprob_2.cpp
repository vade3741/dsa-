#include<bits/stdc++.h>
using namespace std;
int dx[8]={2,2,-2,-2,-1,-1,1,1};
int dy[8]={-1,1,-1,1,2,-2,2,-2};

bool is_safe(vector<vector<int>>&mat,int x,int y,int n)
{
	 if(mat[x][y]==0)
	 return true;

	 return false;
}
void display(vector<vector<int>>&mat,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
            if(mat[i][j]==0)
        { cout << "{" << i << "-" << j << "} ";
		}

		}
	}
}
void mark(vector<vector<int>>&mat,int x,int y,int n)
{
	mat[x][y]=1;
	for(int k=0;k<4;k++)
	{
		int nx=x+dx[k];
		int ny=y+dy[k];
		if(nx>=0&&ny>=0&&nx<n&&ny<n)
		mat[nx][ny]=1;
	}
}
void unmark(vector<vector<int>>&mat,int x,int y,int n)
{
	for(int k=0;k<4;k++)
	{
		int nx=x+dx[k];
		int ny=y+dy[k];
		if(nx>=0&&ny>=0&&nx<n&&ny<n)
		mat[nx][ny]=0;
	}
}
void knight(vector<vector<int>>&mat,int k,int x,int y,int n,int &count)
{
	 if(k==0)
	 {	
		 display(mat,n);
		 count++;
		 
	 }

	 for(int i=x;i<n;i++)
	 {
		 for(int j=y;j<n;j++)
		 {
			 if(mat[i][j]==0)
			 {
				vector<vector<int>>new_mat(mat);
				mark(new_mat,i,j,n);
			   knight(new_mat,k-1,i,j,n,count);

			 }

		 }
		 y=0;
	 }
}
int main()
{
	  int n;
	  cin>>n;
	  vector<vector<int>>mat(n,vector<int>(n,0));

     int count=0;
	  knight(mat,n,0,0,n,count);
	  cout<<endl;
	  cout<<count;

}