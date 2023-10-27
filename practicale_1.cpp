
/*Create a class player with the following data members 
name, age, runs, hi, lo, tsts, avg 
               Write member functions for each of the following 
a. To get the data 
b. To display the data 
c. To calculate the average of the player*/

#include<iostream>
//#include<string>
using namespace std;
class Player
{
    private:
        char name[20];
        int age,highest,lowest,no_of_tests;
        float average;
    public:
    class Runs
    {
        private:
            int runs;
        public:
             void setRuns(int &refTotalRuns)
            {
                cin>>runs;
                refTotalRuns+=runs;
            }
    };
        void readData()
        {
            int total_runs=0;
           
            cout<<"Enter Player name : ";
            
            cin>>name;
            cout<<"Enter player's highest and lowest runs and no of tests played : ";
            cin>>highest>>lowest>>no_of_tests;
            Runs runs[no_of_tests];
            for(int i=0;i<no_of_tests;i++)
            {
                cout<<"Enter match-"<<i+1<<" runs : ";
                runs[i].setRuns(total_runs);
            }
            average=total_runs/no_of_tests;
        }
        void display()
        {
            cout<<"Player name         : "<<name<<"\n";
            cout<<"No. of tests played : "<<no_of_tests<<"\n";
            cout<<"Highest runs        : "<<highest<<"\n";
            cout<<"Lowest runs         : "<<lowest<<"\n";
            cout<<"Average runs        : "<<average<<"\n";
        }
};
int main()
{
      Player p1;
    
    p1.readData();
    p1.display();
    return 0;
}