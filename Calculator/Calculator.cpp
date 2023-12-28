#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<iomanip>


char op;
using namespace std;

void sum()
   {   
    int sum = 0;
    int n;
    int numberitems;
    cout <<"\t\tEnter number of items: ";
    cin >> numberitems;

    for(int i=1;i<=numberitems;i++)
    {
        cout<< "\t\tEnter number "<<i<<": " ;
        cin>>n; 
        sum+=n;
    }
    cout<<"\t\tSum is: "<< sum<<endl<<endl;
    }
    
void diff()
    {
     int diff;
     int n1,n2;
     cout<<"\t\tEnter two numbers to find their difference:\n\n";
     cout<<"\t\tenter first number:";
     cin>>n1;
     cout<<"\n\t\tenter second number:";
     cin>>n2;
     diff=n1-n2;
     cout<<"\n\t\tdifference is:"<<diff<<endl<<endl;
     }
     
void pro()
    
    {
     int pro=1;
     int n;
     int numberitems;
     cout<<"enter number of items:\n";
     cin>>numberitems;
     for(int i=0;i<=numberitems;i++)
     {
             cout<<"\nenter item "<<i<<":";
             cin>>n;
             pro*=n;
     }
             
     cout<<"product is:"<<pro<<endl<<endl;    
     }
       
 void div()
     {
      int div;
      int n1;
      int n2;
      cout<<"enter 2 numbers to find their quotient\n\n";
      cout<<"enter numerator:";
      cin>>n1;
      cout<<"\nenter denominator:";
      cin>>n2;
      div=n1/n2;
      cout<<"\nquotient is:"<<div<<endl<<endl;
      }      

void power()
     {     
     long int p;
     int res=1,n; 
     cout<<"enter number:";
     cin>>n;
     cout<<"\nenter power:";
     cin>>p;
     for(int i=1;i<=p;i++)
     {
      res=n*res;
     }
      cout<<n<<"\n power "<<p<<" is :"<<res<<endl;
     } 
       
void sq()
     {
     float s;
     int n;
     cout<<"enter number to find its square root:";
     cin>>n;
     s=sqrt(n);
     cout<<"\nsquare root of "<<n<<" is :"<<s<<endl;
     }
     
 void fact()
     {
      long int f=1;
      int c=1,n;
      cout<<"enter number to find its factorial:";
      cin>>n;
      while(c<=n)
      {
                 f=f*c;
                 c+=1;
      }     
                 cout<<"\nfactorial of "<<n<<" is :"<<f<<endl;     
      }
      
void expo()
{
    long double res=1,p; 
    double e=2.718281828;     
    cout<<"enter power of exponential function:";
    cin>>p;
    for(int i=1;i<=p;i++)
    {
    	res=e*res;
    }
    cout<<" e^ "<<p<<" is :"<<res<<endl;
}

int main()
{   
    system("cls");
    do
    {         
	    system("pause");         
	    system("cls");
		cout<<"\n\t\t\Welcome to the Calculator"<<endl;
	    cout<<"\t\tWhich operation you want to perform\n\n";
	    cout<<"\t\tpress 0 for exit\n";
	    cout<<"\t\tpress 1 for addition\n";
	    cout<<"\t\tpress 2 for subtraction\n";
	    cout<<"\t\tpress 3 for multiplication\n";
	    cout<<"\t\tpress 4 for division\n";
	    cout<<"\t\tpress 5 for power calculation\n";
	    cout<<"\t\tpress 6 for square root \n";
	    cout<<"\t\tpress 7 for factorial calculation\n";
	    cout<<"\t\tpress 8 for exponential calculation\n";
	    
		cout<<"\n\t\tPress option number: ";
	    cin>>op;
	    system("cls");
	    switch(op)
   		{
              case '1':
              sum();
              break;
              
              case '2':
              diff();
              break;
              
              case '3':
              pro();
              break;
              
              case '4':
              div();
              break;
              
              case '5':
              power();
              break;
              
              case '6':
              sq();
              break;
              
              case '7':
              fact();
              break;
              
              case '8':
              expo();
              break;
			       
              case '0':
              exit(0);
			    
              default:
              cout<<"invalid input";
              
              system("cls");
    	} 
    }                                                                     
    while(op!='0');
    getch();
}
