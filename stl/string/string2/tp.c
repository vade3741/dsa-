#include <stdio.h>

int main(void) {
  int t;
  scanf("%d",&t);
  for(int i=0;i<t;i++){
    int n;
    scanf("%d",&n);
    char s1[n];
    char s2[n];
  gets(s1);
  gets(s2);
  for(int i=0;i<n;i++){
    if(s1[i]=s2[i]){
        printf("B");
    }else{
        printf("G");
    }
  }
  }
	return 0;
}

