#include <iostream>
using namespace std;


int main ()
{
   
    int num, reverse = 0, rem, temp;
    cout << "Enter a number: ";
    
    cin>>num;


    temp = num;
   
    while(temp != 0)
    {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp /= 10;
    }

  
    if (num == reverse){
        cout <<"\nThe number is a palindrome.";
    }
    else{
        cout <<"\nThe number is not a palindrome.";
    }
      
}
        
