#include<bits/stdc++.h>
using namespace std;

// void swap(int *xp, int *yp)
// {
//     int temp = *xp;
//     *xp = *yp;
//     *yp = temp;
// }

// Bubble Sort

int main()
{
    int n; cin >> n;
    // int v[n];
    vector<int> v(n);
    
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    
    // int n = v.size();
    
    for(int i=0;i<n-1;i++)
    {
        bool swaping = false;
        for(int j=0;j<n-i-1;j++)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
                swaping =  true;
            }
            if(!swaping)
            {
                break;
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
