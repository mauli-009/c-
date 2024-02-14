#include <iostream>
using namespace std;
double mpsqroot(int n,int precise,int intsqr){
    double factor=1;
    double ans=intsqr;
        for(int i=0;i<precise;i++){
            factor=factor/10;
        }
            for(double j=ans;j*j<n;j=j+factor){
                ans=j;
                
            }
            return ans;
    
}
int sqroot(int n){
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        int sqr=mid*mid;
        if(sqr==n){
            return mid;
        }
        else if (sqr<n){
            ans=mid;
            s=mid+1;
        
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}


int main(){
    int n;
    cout<<"enter a number:"<<endl;
    cin>>n;
    int intsqr=sqroot(n);
    cout<<mpsqroot(n,3,intsqr);
    
}
