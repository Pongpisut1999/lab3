#include<iostream>
#include<string>
using namespace std;

int main()
{
   string f,s;
   int N,i=0;
   cout<<"Enter the first text : ";
   cin>>f;
   cout<<"Enter the second text : ";
   cin>>s;
   cout<<"Enter N: ";
   cin>>N;
   while(i<=N)
   {
   	 if(i%2==1)
		cout<<f<<" ";
	 else
	    cout<<s<<" ";	
   	 i++;
   }
    
    
}