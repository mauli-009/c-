#include <iostream>
using namespace std;
int main(){
  int num,originalnum,remainder ,result=0;
  cout<< "Enter the value of num" << endl;
  cin>>num;
  originalnum=num;
  while(originalnum!=0){
    remainder=originalnum%10;
    result+=remainder*remainder*remainder;
    originalnum/=10;
    
  }
  if(result==num){
    cout<< "Armstrong number  " << endl;
  }
  else{
    cout<< "Not an Armstrong number  " << endl;
  }
}
