/* This program is created by 23CS025 */

#include<iostream>
using namespace std;
class information
{public:
    int id;
    float total_ex;
    string emp_name,qulafication;
    float exp;
    long long mobile_no;
    static int count;
    friend void avregex();
}e[1000],avg;
void avregex(float a , int b)
{
    cout<<"total avrege experiance "<<a/b;

}

int information ::count=0;

int main()
{
    int n,i;
    cout<<"how many employe information you get:";
    cin>>n;
        for(i=0;i<n;i++)
        {
            cout<<"Entear an employee id in integear :";
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
            avg.total_ex=avg.total_ex + e[i].exp;
            avg.count++;


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
                    cout<<"erorr"<<endl;
                    //dost exist
                }
            }
            cout<<"PRESS ENTEAR 'Y' TO GET ANOTEHER EMPLOOY INFO AND EXIT ENTEAR 'N':";
            cin>>x;
        }while(x =='y');
         avregex(avg.total_ex,avg.count);





}
