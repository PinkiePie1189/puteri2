#include<cstdio>

using namespace std;
FILE*fout=fopen("rate.txt","w");
int main()
{
  const int p=100007;
  for(int a=1;a<=500;a++)
    {
      int rata=1;
      int put=1;
      while(put!=a)
      {
       put*=a; //a<p ,deci a%p==a
       put%=p;
       rata++;
      }
     fprintf(fin,"%d\n",rata);
    }
}
