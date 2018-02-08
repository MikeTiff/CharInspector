//Author:
#include<iostream>

using namespace std;

int main()
{
  char letter;
  cout<<"What character do you want to know about?\n";
  cin>> letter;
  if( letter >= 65 && letter <= 90)
  {
  cout<<" is an upper case letter!\n";
  }
  else if( letter >= 97 && letter <= 122)
   {
  cout<<" is a lower case letter!\n";
   }
  else 
   {
  cout<<"?! Pssh. What are you talking about?\n";  
   }
 
  cout<<"The ASCII value is: "<< (int) letter << std::endl;

  return 0;
}
