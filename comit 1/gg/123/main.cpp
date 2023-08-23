#include <iostream>

using namespace std;
string wyraz;
int ciag;
int main()
{

   cin>>wyraz;
   cin >>ciag;

   int dlugosc=wyraz.length() ;

   for(int i=dlugosc;i>=0;i--)
   {

     cout<<wyraz[i];
     cout<<ciag;


   }








    return 0;
}
