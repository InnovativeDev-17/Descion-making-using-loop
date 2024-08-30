//Aryan Thorat entc a2 032 6e floyd's series

#include<iostream>
 
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    k = 1;
    for(i=1;i<=n;i++)
    {
         for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
       
        for(j=1;j<=i;j++)
        {
            cout<<k<<' ';
            k++;
        }
        cout<<endl;
    }
}
/*output
Enter the number:
 5
        1 
      2 3 
    4 5 6 
  7 8 9 10 
11 12 13 14 15 */