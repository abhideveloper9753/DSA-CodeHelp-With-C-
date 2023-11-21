#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    cout<<"\n\n\n\tEmployee Mangement System"<<endl;
    cout<<"\n\n\tSign up"<<endl;
    string username,password;
    cout<<"\n\n\tEnter username"<<endl;
    cin>>username;
    cout<<"\n\n\tEnter password"<<endl;
    cin>>password;;
    cout<<"\n\n\tYour id is creating please wait";
    for(int i=0;i<8;i++){
        cout<<".";
        Sleep(1000);
    }
    cout<<"\n\n\tYour id created successfull"<<endl;
    system("CLS");
    start:
    cout<<"\n\n\n\tEmployee Mangement System"<<endl;
    cout<<"\n\n\t\tLogin"<<emdl;
    string username1,password1;
    cout<<"username:  ";
    cin>>username1;
    cout<<"password:  ";
    cin>>password1;
    if(username1==username&&password1==password){
        system("CLS");
        while(1){
            cout<<"Press 1 to enter data "<<endl;
            cout<<"Press 2 to show data"<<endl;
            cout<<"Press 3 to search data"<<endl;
            cout<<"Press 4 to update data"<<endl;
            cout<<"Press 5 to delete data"<<endl;
            cout<<"Press 6 to logout"<<endl;
            cout<<"Press 7 to exist"<<endl;

        }

    }
    else if(username1!=username){
        cout<<"Your username is incorrect"<<endl;
        Sleep(3000);
        goto start;
    }
    else if (password1!=password)
    {
        cout<<"your password is incorrect"<<endl;
        Sleep(3000);
        goto start;
    }
    return 0;

}