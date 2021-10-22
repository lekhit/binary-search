#include <iostream>
using namespace std;
int main(){
  int arr[13];
  for (int i=0;i<10;i++)
  arr[i]=i;
  arr[12]=-1;
  arr[10]=2;
arr[11]=3;
int size=sizeof(arr)/sizeof(arr[0]);
cout<<"before sorting"<<endl;
for(int i=0;i<size;i++){
  cout<<arr[i]<<endl;
}

int j=0;
for (int i=1;i<size;j=i,i++){
if (arr[i]<arr[j]){
  int m=arr[i];
  int k=0;
  while(arr[k]<arr[i]){
    k++;
  }
  for (j=i;j!=k;j--){
    arr[j]=arr[j-1];
  }
  arr[k]=m;
}
}
cout<<"after sorting"<<endl;
for(int i=0;i<size;i++){
  cout<<arr[i]<<endl;
}
  return 0;
}