#include <fstream>
#include <cstring>
using namespace std;
ifstream f("paranteze1.in");
ofstream g("paranteze1.out");


int main()
{
   int n,vf=0;
   char s[256];
   f>>n;
   for(int i=0;i<n;i++)
   {
       f.get();
       f.get(s,256);
       vf=0;
       int ok=1;
       for(int j=0;j<strlen(s);j++)
       {
           if(s[j]=='(')
           {
               vf++;
           }
           else
           {
               vf--;
           }
           if(vf<0)
           {
              ok=0;
           }
       }
       if(vf!=0)
       {
           ok=0;
       }
       g<<ok<<endl;
   }

    return 0;
}
