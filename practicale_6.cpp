#include<iostream>
#include<conio.h>

using namespace std;

int objc;
class object
{
 public:
 object()
 {
  objc++;
 }

};

int main()
{
 object a,b,c;
 
 cout<<"Number of Objects:"<<objc<<endl;
 getch();
}