#include<cstdio>

using namespace std;
FILE*fout=fopen("rate.txt","w");
int main()
{
  const int p=100019;
  for(int a=1;a<=500;a++)
    {
      int rata=0;
      int put=a;
      do
      {
       put*=a; //a<p ,deci a%p==a
       put%=p;
       rata++;
      }while(put!=a);
     fprintf(fout,"%d\n",rata);
    }
}
