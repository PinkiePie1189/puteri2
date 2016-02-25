#include<cstdio>

using namespace std;
FILE*fin=fopen("puteri2.in","r");
FILE*fout=fopen("puteri2.out","w");
long long a[10001],b[10001];
int main()
{
    int N;
    fscanf(fin,"%d",&N);
    for(int i=1;i<=N;i++)
    {
        fscanf(fin,"%lld",&a[i]);
    }
    for(int i=1;i<=N;i++)
    {
        fscanf(fin,"%lld",&b[i]);
        long long pomf=b[i];
        b[i]%=100008;
        if(b[i]==0 && pomf)
        {
            b[i]=100008;
        }
    }
    long long s=0;
    for(int i=1;i<=N;i++)
    {
        int put=1;
        for(int j=1;j<=b[i];j++)
        {
            put*=a[i];
            put%=100019;
        }
        s+=put;
        s%=100019;
    }
    fprintf(fout,"%lld",s);
}
