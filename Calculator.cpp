#include<iostream>
#include<cstdlib>

using namespace std;
int n1,n2;
void getdata(){
cout<<"Enter two number:";
cin >>n1>>n2;

}
void cal(){
char op;
cout<<" + - * / \n";

while('+'){

 cout <<"Enter Operator:\t";
 cin>>op;

switch(op){
case '+' :cout <<"RESULT="<<n1+n2<< endl;
break;
case '-' :cout <<"RESULT="<<n1-n2 <<endl;
break;
case '*' :cout <<"RESULT="<<n1*n2 <<endl;
break;
case '/' :cout <<"RESULT="<<n1/n2<<endl;
break;
case '#' :
    exit(0);
    break;
default :cout <<"*****INVALID CHOICE,Enter valid choice*****....." <<endl;
break;
}
}
}
int main(){
    cout<<"\t\t welcome to the calculator, developed by Surbhi shriwastva .......!\n "<< endl;
    cout <<"******** Press # to quit the program ********\n"<<endl;
getdata();
cal();
return 0;
}
