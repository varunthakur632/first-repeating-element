#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mins=INT_MAX;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    const int N=1e6+2;
    int idix[N];
    for(int i=0;i<N;i++)
    {
        idix[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
        if(idix[a[i]]==-1)
        {
            idix[a[i]]=i;
        }
        else
        {
            mins=min(mins,idix[a[i]]);
        }
    }
    cout<<mins+1<<endl;
    return 0;

}
