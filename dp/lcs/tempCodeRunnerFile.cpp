int n=x.length();
int m=y.length();
int t[n+1][m+1];
for(int i=0;i<=n;i++){
    t[i][0]=0;
}
for(int i=0;i<=m;i++){
    t[0][i]=0;
}
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(x[i-1]==y[j-1]){
            t[i][j]=1+t[i-1][j-1];
        }
        else{
            t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
    }
}
for(int i=0;i<=n;i++){
    for(int j=0;j<=m;j++){
        cout<<t[i][j]<<' '; 
    }
    cout<<endl;
}
int a=n;
int b=m;
string s;
while(a>0 &&b>0){
    if(t[a-1]==t[b-1]){
           s.push_back(x[a-1]);
           a--;
           b--;
    }
    else{
        if(t[a-1][b]>t[a][b-1]){
            a--;
            s.push_back(x[a-1]);
        }
        else{
            b--;
            s.push_back(y[b-1]);
        }
    }
}
return s;