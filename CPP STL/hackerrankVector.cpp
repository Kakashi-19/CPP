#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q,i1,i2,l,val;
    cin>>n>>q;
    vector< vector<int> > ans(n);  //syntax : vector <vector<Type> > name(row, vector<Type>(col);
                                    //for creating a 2D vector with row  rows and col columns
    ans.reserve(10000);
    for(int i =0; i < n; i++)
    {
        cin>>l;
        ans[i] = vector<int>(l);

        for(int k = 0; k < l ; k++)
        {
            cin>>val;
            ans[i][k] = val;
        }


    }
    for(int j = 0;j < q; j++)
    {
        cin>>i1>>i2;
        cout<<ans[i1][i2]<<endl;
    }
        return 0;
}

/*2 3                        input
4 1 5 6 8  input
6 2 6 9 10 22 4  input
0 2 input
6        output
1 4     input
22       output
0 3  input
8        output

Process returned 0 (0x0)   execution time : 66.147 s
Press any key to continue.
*/
