#include<iostream>
#include<cstdlib>       //for random number  
#include<ctime>         //for time function
#include<iomanip>      //for setprecision(rounding upto two decimal values)
using namespace std;
int main()
{
    srand(time(NULL));
    
    char randomop[]={'+' , '/' , '*' , '-'};
    int n = rand()%4;
    
char op=randomop[n];
    cout<<"WELCOME TO RANDOM MATHS PROBLEM GENERATOR:"<<endl;
    cout<<endl;
    cout<<"Enter the maximum range of number as default would start from 0. So enter 100 if you want numbers from 0 to 100-"<<endl;
    int p;
    cin>>p;
    int a = rand()%p;
    int b= rand()%p;
    cout<<"Yours First Problem comes here"<<endl;
    cout<<endl;
    char c=op;
    cout<<a<<" "<<c<<" "<<b<<" = "<<endl;
    cout<<endl;
    cout<<"Enter the answer of the above problem"<<endl;
    cout<<endl;
    cout<<"If the answer is in decimal then enter upto two decimal places of the answer only."<<endl;
    cout<<endl;
    float ans;
    cin>>ans;
    cout<<endl;
    float check=0;
    if(op=='+')
    {
        check=a+b;
    }
  else if(op=='-')
        {
            check=a-b;
        }
   else if(op=='/')
        {
            check=(float)a/b;
        }
   else if(op=='*')
        {
            check=a*b;
        }
    if(ans==check)
    {
        cout<<"Congratulations! Your answer is correct"<<endl;
    }
    else{
        cout<<"Oh No! Your answer is wrong. The correct answer is = "<<fixed<<setprecision(2)<<check<<endl;
    }

    int choice;
    cout<<"Do you want to Play Again? If yes then press 1 else press 0"<<endl;
    cin>>choice;
    if(choice==1)
    {
        main();
    }
    else 
    {
        cout<<"Programmed by ~ ArnavBhure"<<endl;
        return 0;
    }
     
 }



