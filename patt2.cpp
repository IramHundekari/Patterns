#include<iostream>
using namespace std;

int main()
{

	/*  int n;
    cin>>n;
    int row=1;
    while(row<=n)
    {
        //print space
        int space=n-row;
        while(space)
        {
           cout<<" ";
           space--;
        }
        //print 1st triangle
        int col=1;
        while(col<=row)
        {
            cout<<"*";
            col++;
        }
         //print 2nd triangle
         int start=row-1;
         while(start)
         {
             cout<<"*";
             start--;
         }
       cout<<endl;
       row++;
   
    }*/
	int n, c, k, space = 1;

	cout << "\nEnter the number of rows : ";
	cin >> n;

	space = n - 1;

	for (k = 1; k <= n; k++)
	{
		for (c = 1; c <= (n-k); c++)
			cout << " ";
      	
		for (c = 1; c <= 2*k-1; c++)
			cout <<"*";
		cout << endl;
}
	 space = 1;
	for ( k = 1; k <= n - 1; k++)
	{
		for ( c = 1; c <= (space); c++)
			cout << " ";
		space++;
		for ( c = 1 ; c <= 2*(n-k)-1; c++)
          cout << "*";
		cout << endl;
	}
	return 0;
}