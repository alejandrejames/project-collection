#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n=0,ave=0,a,b=0; //Variables
  for(a=0;a==0;){
        //Inputs         
        cout << "Enter a value ";
        cin >> n;
        
        if(n>0){
                ave = ave + n;
                b++;
                }
        else if(n<0){
             cout << "ERROR\n"; //Error checker for negative values
             }
             //Outputs
        else{ 
             if(ave==0){
                cout << "No average \n";
                }
             else{
              ave = ave / b;
              cout << "The average is "<< ave << "\n";
              }
             a++;
             }
        }
        
        
        //Windows CMD so that cmd will not close after program execution....Delete this if codes below of neccessarry
        system("Pause");
        return 0;
}

