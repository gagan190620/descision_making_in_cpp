#include <iostream>

using namespace std;

int main()
{ 
    string name;
    int age,temp;
    cout<<"Please enter your name below..."<<endl;
    cin>>name;
    cout<<endl;
    cout<<"Hii!! "<<name<<"...Please enter your age below..."<<endl;
    cin>>age;
    cout<<endl;
    cout<<"*********************************************"<<endl;
    cout<<endl;
    if(age>=18)
    {
        cout<<name<<" You are eligible for voting."<<endl;;
    
    }
    
    else
    {
        temp=(18-age);
        cout<<name<<", You are not eligible for voting."<<endl;
        cout<<name<<", You will be eligible for voting after "<<temp<<" years."<<endl;
    }
    return 0;
}
