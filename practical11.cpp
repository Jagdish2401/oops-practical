#include<iostream>
//#include <iomanip>
using namespace std;
class employ
{
    int year,month;
public:
    int getdata()
    {
        cout<<"Enter employ experiance in years and month"<<endl;
        cout<<"years:";
        cin>>year;
        cout<<"month:";
        cin>>month;
        return 0;
    }
    operator float()
    {
        float temp;
        temp = year + (month)/12.0;
        return temp;
    }

};
int main()
{
    employ o1;
    o1.getdata();
    float n;
    n=o1;
    cout<<"Employ experiance is:"<<n;
      cout<<" JAGDISH 23CS025";
}
