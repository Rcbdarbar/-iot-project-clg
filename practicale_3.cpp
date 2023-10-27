#include<iostream>
using namespace std;
class book{
    private:
        char bname[20];
        char aname[20];
        float rate;
        int qty;
    public:
        int input()
        {
            cout<<"------------------------------"<<endl;
            cout<<"Enter Book name : ";
            cin>>bname;
            cout<<"Enter Author name  : ";
            cin>>aname;
            cout<<"Enter rate:";
            cin>>rate;
            cout<<" Enter quantity  : ";
            cin>>qty;
        };
        int print()
        {
            cout<<"--------------------------"<<endl;
            cout<<"Book name        : "<<bname<<endl;
            cout<<"Author name      : "<<aname<<endl;
            cout<<"Book price       : "<<rate<<endl;
            cout<<"Quantity         : "<<qty<<endl;
            cout<<"Total Item Price : "<<qty*rate<<endl;
        }
        int totalP(float &sum)
        {
            sum+=qty*rate;
        }
};
int main()
{
    int n,it=0;
    float total_price=0;
    cout<<"How many books are you buying : ";
    cin>>n;
    class book b[n];
    for(;it<n;it++)
        b[it].input();
    for(it=0;it<n;it++)
    {
        b[it].print();
        b[it].totalP(total_price);
    }
    cout<<"Your total bill is of "<<total_price<<" Rs";
}