#include<iostream>
using namespace std;
class student
{
    public:
    int r;
    char n[20];
    int m[6];
    float p;
    int i;
    int getdata()
    {
        cout<<"Enter the name of student";
        cin>>n;
        cout<<"\n Enter the roll no. :";
        cin>>r;
        cout<<"\n enter the marks of 6 subject :";
        for(i=0;i<6;i++)
        {
            cin>>m[i];
        }

    }
    void grad()
    {
        cout<<"\n Gread of student is : ";
        for(i=0;i<6;i++)
        {
            p=p*m[i];
            p=p++;
        }
        p=p/6;

    }
    int display()
    {
        cout<<"nmae of student : "<<n<<endl;
        cout<<"Roll no. of student : "<<r<<endl;
        for(i=0;i<6;i++)
        {
            cout<<"marks of student:"<<m[i]<<endl;    
        }
        cout<<"percentage of student :"<<p<<endl;
        if (p>80)
        {
            cout<<"<Destination";
        }
         else if (70<p<80)
        {
            cout<<"fisrst class";            
        }
        else if (40<p<70)
        {
            cout<<"second class";
        }
        else if (p<40)
        {
            cout<<"fail";
        }
            
        

    }
    
};
int main()
{
    student s1;
    s1.getdata();
    s1.grad();
    s1.display();
    return 0;
}
