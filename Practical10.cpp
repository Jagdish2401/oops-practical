#include<iostream>
using namespace std;

class employ
{
    int years,month;
public:
    employ()
    {
        years=5;
        month=0;
    }
    employ(float &x)
    {
        years=(int)x;
        month=(x-years) * 12;
    }
    void output()
    {
    cout<<"Employ expriance is "<<years<<" Years and "<<month<<" Month"<<endl;
 //   return 0;
    }
};
int main()
{
    float n;
    cout<<"Enter Employ expriance :"<<endl;
    cin>>n;
    employ a1;
    a1=n;
    a1.output();
    cout<<" JAGDISH 23CS025";
    return 0;
}
