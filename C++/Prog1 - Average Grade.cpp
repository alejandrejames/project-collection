#include <iostream>
#include <string>
using namespace std;
int main()
{
    int grade, nofld=0, clave=0, hgrde=0,b=0;//Varaiables
    //Loop for the average
    while(grade > 0 && grade < 10){
                   cout << "Enter student's grade: ";
                   cin >> grade;
                   //Control loop so that tha first value to be entered will not be zero
                   while(grade==0 &&b==0){
                                   cout << "Invalid value try again\n\n";
                                   cout << "Enter student's grade: ";
                                   cin >> grade;
                                  }
                                  b=1;
                                  
                   if(grade > hgrde && (grade <10 && grade > 0)){
                            hgrde = grade;
                            }
                   else{
                        
                        }
                   if(grade < 10 && grade > 0){
                            clave = clave + grade;
                            
                            }
                   if(grade < 4 && grade > 0){
                            nofld++;
                            }
                   }
    //Backup loop if the average is equal to zero and the user does not want to use the control loop               
    if(clave==0){
                 cout << "No input\n";}
     //Output values            }
    else{
         cout << "Class average " << clave << "\n";
         cout << "Highest grade " << hgrde << "\n";
         cout << "Number of studens that falied the course " << nofld << "\n";
         if(nofld > 10)
                 cout << "The teacher sucks!\n";
         }
    
         //Windows CMD so that cmd will not close after program execution....Delete this if codes below of neccessarry
        system("Pause");
        return 0;
}
