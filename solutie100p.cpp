#include<cstdio>
#define L 10001
FILE*fin=fopen("puteri2.in","r");
FILE*fout=fopen("puteri2.out","w");
unsigned long long a[L];
unsigned long long b[L];
int p=100019;
unsigned long long putereinlog(unsigned long long a,unsigned long long b)
{
    if(b==0)
    {
        //printf("1\n");
        return 1;
    }
    int r=1;
    while(b>1)
    {

        if(b%2==0)
        {
            a=((a%p)*(a%p))%p;
            b=b/2;
        }
        else
        {
            r=((r%p)*(a%p))%p;
            a=((a%p)*(a%p))%p;
            b=(b-1)/2;

        }
    }
    //printf("%lld\n",a*r);
    return ((a%p)*(r%p))%p;
}
int main()
{
    int N;
    fscanf(fin,"%lld",&N);
    for(int i=0; i<N; i++)
    {
        fscanf(fin,"%lld",&a[i]);

    }
    for(int i=0; i<N; i++)
    {
        fscanf(fin,"%lld",&b[i]);
       /* int pomf = b[i];
        b[i]%=100008;
        if(b[i]==0 && pomf)
        {
            b[i]=100008;
        }*/
    }
    unsigned long long s=0;
    for(int i=0; i<N; i++)
    {
        s+=putereinlog(a[i],b[i])%p;
        s%=p;
    }
    fprintf(fout,"%lld",s%p);
    return 0;
}
