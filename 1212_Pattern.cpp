#include <iostream>
using namespace std;
int main()
{
    int m,n;
    m = 6; //columns    HARD-CODED COLUMNS
    n = 4; //rows       HARD-CODED ROWS
    // cin>>n;  // Take rows as a input from user.
    // cin>>m;  // Take columns as a input from user.

for(int i=1; i<=n; i++)
{
    for(int j=1; j<=m; j++)
    {
        if((i+j)%2==0)
        {
            cout<<"1";
        }
        else
        {
            cout<<"2";
        }
    }
    cout<<endl;
}
    return 0;
}
