 #include<iostream>
 #include<windows.h>
 using namespace std;
  int current=0;
  void up(){
       int n;
       cout<<"Enter Floor where  you want to go"<<endl;
       cin>>n;
       for(int i=current;i<=n;i++){
        if(i<n){
            cout<<"lift is at "<<i<<endl;
            Sleep(5000);
        }
        else{
            cout<<"Welcome to "<<i<<" floor"<<endl;
            current=i;
            return;
        }
       }
  }
  void down(){
        int n;
        cout<<"Enter Floor where you want to go"<<endl;
        cin>>n;
        for(int i=current;i>=n;i--){
              if(i>n){
                cout<<"Lift is at "<<i<<endl;
                Sleep(5000);
              }
              else {
                cout<<"Welcome to "<<i<<"floor"<<endl;
                current=i;
                return;
              }
        }
  }
 int main(){
 cout<<"**************Developed by Govind Patel...............\t\t\t"<<endl;
       int choice;
       while(1){
   cout<<"Enter 1 For go up"<<endl;
   cout<<"Enter 2 For go Down"<<endl;
   cout<<"Enter 3 For Exit"<<endl;
     cin>>choice;
     switch(choice){
         case 1:
            up();
            break;
        case 2:
           down();
          break;
        case 3:
          exit(0);
    default :
          cout<<"Enter valid number:"<<endl;
    
     }
       }
 }
