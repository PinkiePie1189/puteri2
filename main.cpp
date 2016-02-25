#include<cstdio>
#define L 10000
#define rata 100018
using namespace std;
FILE*fin=fopen("puteri2.in","r");
FILE*fout=fopen("puteri2.out","w");
long long a[L],b[L];
int main()
{
   //const int p=nr ala din pb;
   int N;
   long long s=0;
   fscanf(fin,"%d",&N);
   for(int i=0;i<=N;i++)
    fscanf(fin,%lld,&a[i];
   for(int i=0;i<=N;i++)
    {fscanf(fin,%lld,&b[i]);
     b[i]%=rata;
     if(b[i]==0) b[i]=rata;
    }
   for(int i=1;i<=N;i++)
   {
    int put=1;
    for(int i=1;i<=b[i];i++)
     {
       put*=a
       put%=p;
     }
     s+=put;
     s%=p;
   }
 fprintf(fout,%lld,s%p);
}
