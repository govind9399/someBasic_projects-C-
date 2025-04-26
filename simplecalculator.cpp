#include<iostream>
using namespace std;
    int a,b;

void Addition(){
    cout<<"Enter two Numbers you want to add";
    cin>>a>>b;
    cout<<"Addition of "<<a<<" and "<<b <<" is "<<a+b;
}
void Subtraction(){
     cout<<"Enter two Numbers you want to sbtract";
    cin>>a>>b;
    cout<<"Subtraction of "<<a<<" and "<<b<<" is "<<a-b;
}
void Multiplication(){
     cout<<"Enter two Numbers you want to multiply";
    cin>>a>>b;
    cout<<"Multiplication of "<<a<<" and "<<b <<" is "<<a*b;
}
void Division(){
       cout<<"Enter two Numbers you want to divide: ";
      cin>>a>>b;
      cout<<"Division of "<<a<<" and "<<b<<" is "<<a/b;
}
int main(){
    cout<<"*****************Welcome to Simple calculator************** "<<endl;
    cout<<"**************************************Developed by Govind Patel........................\t\t\t\t"<<endl;
    cout<<"Enter 1 for Addition"<<endl;
    cout<<"Enter 2 for Subtraction"<<endl;
    cout<<"Enter 3 for Multiplication"<<endl;
    cout<<"Enter 4 for Division"<<endl;
    cout<<"Enter 0 for Exit"<<endl;
     while(1){
        int choice;
        cout<<"\nEnter your choice";
        cin>>choice;
        switch(choice){
             case 1:
               Addition();
               break;
            case 2:
                Subtraction();
                break;
            case 3:
                Multiplication();
                break;
            case 4:
                Division();
                break;
            case 0:
                exit(0);
        default:
            cout<<"Enter Valid Choice";
        
        }
     }
    return 0;
}
