#include<iostream>
using namespace std;

class mm;
//mm to cm
class cm
{
    float a;
public:
    float getdata()
    {
        cout<<"Enter the milimeter :";
        cin>>a;
        return 0;
    }
    float printdata()
    {
        return a;
    }
    cm()
    {
        a=10;
    }
    cm(mm &n);
};

class mm
{
    float b;
public:
    float getdata()
    {
        cout<<"Enter the cm :";
        cin>>b;
        return 0;
    }
    float printdata()
    {
        return b;
    }
    mm()
    {
        b=10;
    }
    mm(cm &n)
    {
        b=n.printdata()/10;
    }
};
cm :: cm(mm &n)
{
    a=n.printdata()*10;

}
int main()
{
    int ch;

    cout<<"Enter 1 convert mm to cm "<<endl<<"Enter 2 convert cm to mm"<<endl;
    cin>>ch;
    switch(ch)
    {
    case 1:
       {
           cm o1;mm o2;
        o1.getdata();
        o2=o1;
       cout<< o2.printdata();
        break;
        }
    case 2:
       {
        mm o1;cm o2;
        o1.getdata();
        o2=o1;
       cout<< o2.printdata();
        break;
    }
    default:
        exit;
    }
    return 0;
}












