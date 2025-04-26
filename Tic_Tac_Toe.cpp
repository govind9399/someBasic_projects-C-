 #include<iostream>
 #include<string>
 using namespace std;
 int main(){
     int space[3][3]={1,2,3,4,5,6,7,8,9};
     string n1,n2;
     cout<<"Enter Name of First Player"<<endl;
     getline(cin,n1);
     cout<<"Enter Name of Second player"<<endl;
     getline(cin,n2);
     cout<<n1<<" will play first"<<endl;
     cout<<n2<<" will play Second"<<endl;
  
    cout<<"    |    |   "<<endl;
    cout<<"  "<<space[0][0]<<" | "<<space[0][1]<<"  | "<<space[0][2]<<endl;
    cout<<"____|____|____"<<endl;
    cout<<"    |    |   "<<endl;
    cout<<"  "<<space[1][0]<<" | "<<space[1][1]<<"  | "<<space[1][2]<<endl;
    cout<<"____|____|____"<<endl;
    cout<<"    |    |   "<<endl;
    cout<<"  "<<space[2][0]<<" | "<<space[2][1]<<"  | "<<space[2][2]<<endl;
    cout<<"    |    |   "<<endl;
 }
