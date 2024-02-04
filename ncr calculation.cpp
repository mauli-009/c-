#include <iostream>
using namespace std;
int factorial(int num){
 int fact=1;
  int i;
  for(i=1;i<=num;i++){
    fact=fact*i;
  }
  return fact;

}
int ncr(int n,int r){
  int nmrt=factorial(n);
  int denom=factorial(r)*factorial(n-r);
  int ans=nmrt/denom;
  return ans;
}

int main() {
  int n,r;
  cin>>n>>r;
  cout<<ncr(n,r);
  
}
