#include <iostream>
using namespace std;
void triplet_sum(int arr[],int size,int s){
  for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
      for(int k=j+1;k<size;k++){
        if(arr[i]+arr[j]+arr[k]==s){
          cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
        }
      }
    }
  }
}
int main(){
  int arr[6]={1,2,3,4,5,6};
  triplet_sum(arr,6,5);
}
