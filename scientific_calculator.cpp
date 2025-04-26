#include<iostream>
#include<cmath>
using namespace std;
  void Addition(){
       int a,b;
       cout<<"Enter two Numbers you want to add";
       cin>>a>>b;
       cout<<"Addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
  }
  void Subtraction(){
       int a,b;
       cout<<"Enter two Numbers you want to subtract";
       cin>>a>>b;
       cout<<"Subtraction of "<<a<<"and "<<b<<" is "<<a-b<<endl;
  }
  void Multiplication(){
        int a,b;
        cout<<"Enter  two Numbers you want to multiply";
        cin>>a>>b;
        cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
  }
  void Division(){
        float a,b;
        cout<<"Enter two Numbers you want to divide";
        cin>>a>>b;
        cout<<"Division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
  }
  void Factorial(){
       int n;
       cout<<"Enter number you want to calculate factorial";
       cin>>n;
       int fact=1;
       for(int i=1;i<=n;i++){
          fact*=i;
       }
       cout<<"Factorial of "<<n<<" is" <<fact<<endl;
  }
  void Power(){
        int n,power,x;
        cout<<"Enter Number "<<endl;
        cin>>n;
        cout<<"Enter Power"<<endl;
        cin>>power;
       x= pow(n,power);
       cout<<"Power of"<<n<<" is "<<x<<endl;

  }
  void squareroot(){
        int n;
        cout<<"Enter number you want to calculate squareroot";
        cin>>n;
      int x=sqrt(n);
      cout<<"squareroot of "<<n<<" is "<<x<<endl;
  }
  void sum(){
     int n;
     cout<<"Enter Number you want to calculate sum";
     cin>>n;
     int sum=0;
     for(int i=1;i<=n;i++){
          sum+=i;
     }
     cout<<"Sum of "<<n<<" is "<<sum<<endl;
  }
  void square(){
        int n;
        cout<<"Enter number you want to calculate square ";
        cin>>n;
        int x=n*n;
        cout<<"Square of "<<n<<" is "<<x<<endl;
  }
  void cube(){
        int n;
        cout<<"Enter number you want to calculater cube";
        cin>>n;
        int x=n*n*n;
        cout<<"cube of "<<n<<" is "<<x<<endl;
  }
 int main(){
 cout<<"\t\twelcome to the scientific Calculator, developed by .....................Govind patel............\n"<<endl;
    cout<<"******Press 0 to quit the program******\n";
    cout<<"Enter 1 for Addition"<<endl;
    cout<<"Enter 2 for Subtraction"<<endl;
    cout<<"Enter 3 for Multiplication"<<endl;
    cout<<"Enter 4 for Division"<<endl;
    cout<<"Enter 5 for Factorial"<<endl;
    cout<<"Enter 6 for Power"<<endl;
    cout<<"Enter 7 for Squareroot"<<endl;
    cout<<"Enter 8 for Sum "<<endl;
    cout<<"Enter 9 for Square"<<endl;
    cout<<"Enter 10 for cube"<<endl;
    while(1){
    int choice;
    cout<<"Enter your choice";
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
          case 5:
              Factorial();
              break;
          case 6:
              Power();
              break;
          case 7:
              squareroot();
              break;
          case 8:
              sum();
              break;
          case 9:
              square();
              break;
          case 10:
              cube();
              break;
          case 0:
             exit(0);
      default:
         cout<<"Enter valid choice: ";
            
      }
    }
    return 0;

 }
