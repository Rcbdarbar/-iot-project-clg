/*2. Create  a  class  item  with  the  following  data  members  item 
code, cost, qty, total_price 
               Write member functions for each of the following 
a. To get the data 
b. To display the data 
c. To calculate the total price of the item */

#include<iostream>
using namespace std;
class item
{
    private:
        int code;
        float cost;
        int qty;
    public:
        int input()
        {
            cout<<"Enter item code:";
            cin>>code;
            cout<<"Enter the cost: ";
            cin>>cost;
            cout<<"Enter quantity: ";
            cin>>qty;
        }
        int print()
        {
            cout<<"Item code: "<<code<<endl;
            cout<<"Item cost: "<<cost<<endl;
            cout<<"Quantity: "<<qty<<endl;
            cout<<"Total Item Price: "<<qty*cost<<endl;
        }
         int totalP(float &sum)
        {
            sum+=qty*cost;
        }
};
int main()
{
    int n,it=0;
    float total_price=0;
    cout<<"How many items are you buying : ";
    cin>>n;
    class item i[n];
    for(;it<n;it++)
        i[it].input();
    for(it=0;it<n;it++)
    {
        i[it].print();
        i[it].totalP(total_price);
    }
    cout<<"Your total bill is of "<<total_price<<" Rs";
}