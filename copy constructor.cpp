#include<iostream>
#include<conio.h>
 using namespace std;
class Demo
{int id;
public: Demo()
{}
Demo(int i)
{id=i;
}
Demo(Demo&obj)
{id=obj.id;
}
void show()
{  
    cout<<"id="<<id;
}
};
int main() 
{ 
   Demo A(100);
    Demo B;
    B=A;
    Demo C=A;
    Demo D(A);
    A.show();
    B.show();
    c.show();
    D.show();
    getch();
}