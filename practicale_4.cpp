#include<iostream>
using namespace std;
class time
{
    int h,m,S,t;
    public:
    void getdata()
    {
        cout<<"enter a second :";
        cin>>S;

    }
    void convert()
    {
        h=S/3600;
        t=S%3600;
        m=t/60;
        S=t%60;
    }
    void display()
    {
        
        cout<<endl<<endl<<"Your converted time is";
        cout<<endl<<h<<":"<<m<<":"<<S;
    }
};
int main()
{
    time t1;
    t1.getdata();
    t1.convert();
    t1.display();
    return 0;
}