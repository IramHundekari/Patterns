    ****
   ****
  ****
 **** 

#include<iostream>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int r=1;
     while(r<=n)
     {
        int sp=n-r;
        while(sp){
            cout<<" ";
            sp--;
        }
        int c=1;
        while(c<=n){
            if(r==1 && r==n && c==1 && c==n){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
            c++;
        }
        cout<<endl;
        r++;
     }

    return 0;
}
