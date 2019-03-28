#include <iostream>
#include <string>
#include<math.h>
using namespace std;
int main()
{
  
  int n=999,x=999,a,b; //Variables
      long long int gmean=1,hmean;
        //Geometric mean
        
        for(a=1;a<999;a++){
                           gmean=gmean*a;
                           cout << gmean<<"\n";
                           }
        cout << gmean<<"\n";
        b=1/999;
        gmean = pow(gmean,b);
        cout << gmean;
        
        //Windows CMD so that cmd will not close after program execution....Delete this if codes below of neccessarry
        system("Pause");
        return 0;
}

