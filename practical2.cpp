
#include<iostream>
using namespace std;
struct information
{
    int id;
    string emp_name,qulafication;
    float exp;
    long long mobile_no;
}e[1000];
int main()
{
    int n,i;
    cout<<"how many employe information you get:";
    cin>>n;
        for(i=0;i<n;i++)
        {
            cout<<"Entear an employee id:";
            cin>>e[i].id;
            cout<<"------------------------"<<endl;
            cout<<"Employe name:"<<endl;
            cin>>e[i].emp_name;
            cout<<"Qulification:"<<endl;
            cin.ignore();
            cin>>e[i].qulafication;
            cout<<"Experince"<<endl;
            cin>>e[i].exp;
            cout<<"Contact number:"<<endl;
            cin>>e[i].mobile_no;

        }
        char x;
        do{
            int id;

            cout<<"which employ information know "<<"Entear an employee id:";
            cin>>id;
            for(int i=0;i<n;i++){
                if(id==e[i].id){
                    cout<<"EMPLOYEE NAME: "<<e[i].emp_name<<endl;
                    cout<<"qualification "<<e[i].qulafication<<endl;
                    cout<<"experiance:"<<e[i].exp<<endl;
                    cout<<"contact number:"<<e[i].mobile_no<<endl;


                }else{
                    cout<<"erorr";
                    //dost exist
                }
            }
            cout<<"PRESS ENTEAR Y TO GET ANOTEHER EMPLOOY INFO:";
            cin>>x;
        }while(x =='y');



}
