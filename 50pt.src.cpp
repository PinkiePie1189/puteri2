#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
long long a[10000];
long long b[10000];

unsigned long long put(long long a,long long b)
{
    unsigned long long res=1;
    for(register int i=1;i<=b;i++)
    {
        res*=a;
    }
    return res;
}
int main()
{
    //freopen("in.txt","r",stdin);
    freopen("puteri2.in","r",stdin);
    freopen("puteri2.out","w",stdout);
    int load;
    cin>>load;
    for(register int i=0;i<=load-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(register int i=0;i<=load-1;i++)
    {
        scanf("%d",&b[i]);
    }
    unsigned long long s;
    unsigned long long p=0;
    int exp;
    unsigned long long puto;
    for(register int i=0;i<=load-1;i++)
    {
        s=1;
        if(a[i]==1 || b[i]==0)
        {
            goto end;
        }
        puto=1;
        exp=0;
        while(puto<=100019 && exp<b[i])
        {
            puto*=a[i];
            //cout<<puto<<endl;
            exp++;
        }
        puto%=100019;
        //cout<<"pentru "<<a[i]<<" avem puterea "<<puto<<" cu exponentul "<<exp<<endl;
        for(register int k=1;k<=b[i]/exp;k++)
        {
            s*=puto;
            s%=100019;
        }
        for(register int k=1;k<=b[i]%exp;k++)
        {
            s*=a[i];
            s%=100019;
        }
        end:
        p+=s;
    }
    cout<<p%100019;
}
