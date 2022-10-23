*****
****
***
**
*
**
***
****
*****

#include<iostream>
using namespace std;
int main()
{
    int r,c,n;
    cin>>n;
    for(r=n;r>=1;r--){
        for(c=1;c<=r;c++){
            cout<<"*";
        }
        cout<<endl;

    }
    int r1,c1;
    for(r1=2;r1<=n;r1++){
        for(c1=1;c1<=r1;c1++){
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}
