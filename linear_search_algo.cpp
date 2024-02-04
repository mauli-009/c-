#include <iostream>
using namespace std;
bool search(int arr[],int size,int key){
  for(int i=0;i<size;i++){
    if(arr[i]==key){
      return 1;
    }
  }
  return 0;
}

int main(){
  int key;
  cout<<"enter a key value you want to search:"<<endl;
  cin>>key;
  int arr[5]={1,2,3,4,5};
  bool found=search(arr,5,key);
  if(found){
    cout<<"key is present"<<endl;
  }
  else{
    cout<<"key is absent"<<endl;
  }
}
