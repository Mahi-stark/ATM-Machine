#include<iostream> 
using namespace std;

class ATMachine
{
 
double balance;
double withdrawal_amount; 
double transfer_amount;

public:

void ba (double x)
{
balance=x;

}
void withdraw(double y)
{
if(y>balance)
{
cout<<"You dont have sufficient Balance \nyour current Balance is:$"<<balance<<endl;
}

else if (y<balance)
{
balance=balance-y;
cout<<"Here is you withdrawn Money:$"<<y<<endl;

withdrawal_amount=y;
cout<<"Your updated Balance: \n$"<<balance<<endl;

}}

void transfer (double z)
{if(z>balance)
{
cout<<"You dont have sufficient Balance \nyour current Balance is:$"<<balance<<endl;
}
else if (z<balance)
{
balance=balance-z; 
cout<<"Transfer Successful"<<endl;
cout<<"Transfered Amount :$"<<z<<endl; 
cout<<"Your updated Balance: \n$"<<balance<<endl;
 
transfer_amount=z;

}
}
void transaction(int an)
{
cout<< "Recent Transactions:" << endl;

cout<<"withdrawn money = $"<<withdrawal_amount<<"\ntransfered money = $"<<transfer_amount<<" to account no : "<<an<<"\nBalance = $"<<balance<<endl;
}
};

int main()
{
ATMachine m; 
int p,n,an; 
double x,y,z; 
char c;
cout<<"Welcome to ATM..!"<<endl; 
cout<<"please enter your card & pin:"<<endl;
cin>>p;
cout<<"please enter your current Balance:"<<endl; 
cout<<"$";
cin>>x; 
m.ba(x);
for(int i=1;i<100;i++)
{
cout<<"MENU:"<<endl;
cout<<"1. Withdraw Money \n2. Transfer Money \n3. Check Your Recent Transactions "<<endl;
cout<<"\n**To Chose A Option Pick A Choice(1-3)"<<endl; 
cin>>n;
if(n<=3 && n>=1) //option
{
switch(n)
{
case 1:
cout<<"Enter the amount you want to withdraw \n$"; 
cin>>y;
m.withdraw(y); 
break;
 
case 2:
cout<<"please enter recipient's account number"<<endl; 
cin>>an;
cout<<"please enter the amount you want to transfer : $"; 
cin>>z;
m.transfer(z); 
break;
case 3:
m.transaction(an); 
break;
}
cout<<"Do you want to perform Another Transition?(y/n)"<<endl; 
cin>>c;

switch(c)
{
case 'y':
 continue; //to exit if-else or not then loop case 'n': break;
}
}
else
{
cout<<"You have chosen an Invalid option"<<endl;
}
break;//loop
}
cout<<"Thank you for using ATM...!!"<<endl; 
return 0;

}
