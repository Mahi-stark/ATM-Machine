#include<iostream>
using namespace std;

int main()
{   int n,p,i,w,a,an;
    float b=0;
    char c;

    cout<<"Welcome to ATM..!"<<endl;
    cout<<"please enter your  card & pin:"<<endl;
    cin>>p;
    cout<<"please enter your  current Balance:"<<endl;
    cout<<"$";
    cin>>b;

    for(i=1;i<100;i++)
    {
    cout<<"MENU:"<<endl;
    cout<<"1. Withdraw Money \n2. Transfer Money \n3. Check Your Recent Transactions "<<endl;
    cout<<"\n**To Chose A Option Pick A Choice(1-3)"<<endl;
    cin>>n;

    if(n<=3 && n>=1) //option
    {
        switch(n)
        {
        case 1: cout<<"Enter the amount you want to withdraw \n$";
                cin>>w;
                if(w<=b)
                    {
                cout<<"Here is you withdrawn Money:$"<<w<<endl;
                b=b-w;
                cout<<"Your updated Balance: \n$"<<b<<endl;
                    }
                    else
                    {
                        cout<<"You dont have sufficient Balance \nyour current Balance is:$"<<b<<endl;
                    }
               break;

        case 2: cout<<"please enter recipient's account number"<<endl;
                cin>>an;
                cout<<"please enter the amount you want to transfer : $";
                cin>>a;
                if(a<=b)
                {
                    cout<<"Transfer Successful"<<endl;
                    b=b-a;
                    cout<<"Your updated Balance: \n$"<<b<<endl;
                }
                else
                    {
                        cout<<"You dont have sufficient Balance \nyour current Balance is:$"<<b<<endl;
                    }

            break;

        case 3: cout<< "Recent Transactions:" << endl;
                cout<<"withdrawn money = $"<<w<<"\ntransfered money = $"<<a<<" to account no : "<<an<<"\nBalance = $"<<b<<endl;

            break;
        }
        cout<<"Do you want to perform Another Transition?(y/n)"<<endl;
        cin>>c;
        switch(c)
        {
        case 'y': continue; //to exit if-else or not then loop

        case 'n': break;
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
