#include<stdio.h>


void merge(int A[],int n1,int index1,int B[],int n2,int index2,int C[],int index){

// n1-->is the total element in the array A
// n2-->is the total element in the array B
//we have taken two different indices cuase two sub arrays will be formed from a single array
//C is the array where we are merging two array 
while(n1&&n2){
    if(A[index1]<B[index2]){
        C[index]=A[index1];
index++;
index1++;
n1--;
    }

else{
    C[index]=B[index2];
    index++;
    index2++;
    n2--;
}
}
while(n1){
    C[index]=A[index1];
    index++;
    index1++;
    n1--;
}while(n2){
    C[index]=B[index2];
    index++;
    index2++;
    n2--;
}
}
void mergepass(int A[],int N,int L,int B[]){
int j,LB;
int Q,S,R;
//Q-->total array to be merged
//S-->s is the total number of elements in all pair 
//R--> number of elements that are unpaired
//LB --> LB denotes the index of b array to be merged
Q=N/(2*L);
S= 2*L*Q;
R=N-S;
for(int j=0;j<Q;j++){
    LB =(2*j)*L;
    merge(A,L,LB,A,L,LB+L,B,LB);
    //merging two array and storing it into B
}
//this is for merging of residual elemenst if any pair is not made then we will copy the pair as it is
if(R<=L){
for(int j=0;j<R;j++){
B[S+j]=A[S+j];
}
}else{
  merge(A,L,S,A,R-L,S+L,B,LB);  
}
}
void mergesort(int a[],int size){
    int L=1,B[11];//we are making another array b we will make pairs and number of pairs are denoted by L and copy back the sorted pairs into a which are temporarily stored in b
while(L<size){
    mergepass(a,size,L,B);//we aree making pairs and storing in array b
     mergepass(B,size,2*L,a);//we are storing pairs back in array a
     L=4*L;
}
}

int main(){

int a[]={11,66,88,33,66,77,99,88,22,44,55};
for(int i=0;i<11;i++){
    printf("%d ",a[i]);

}mergesort(a,11);
printf("\n");
for(int i=0;i<11;i++){
    printf("%d \n",a[i]);

}
return 0 ;
}