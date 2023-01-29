#include<iostream>
using namespace std;

int main()
{
    int i, j,n,count;
    cout<<"Enter the value of n:";
    cin>>n;
    count =0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            count=count++;
        }
    }
    cout<<"n: "<<n<<endl;
    cout<<"count:"<<count<<endl;
    return 0;
}
