#include<iostream>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int row=1;
     while(row<=n)
     {
         int col=1;
         while(col<=n)
         {
             if(row==col)
             {
                 cout<<"0"<<" ";
             }
             else{
                 cout<<col<<" ";
             }
             col++;
         }
    cout<<endl;
    row++;
     }
}