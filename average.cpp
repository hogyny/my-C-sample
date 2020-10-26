#include <iostream>
#include <iomanip>
using namespace std;
// only input data for 3 input between 1 and 100
int main()
{
  float testScore;
   float total;
   int n = 3;
   int i ;
   float Average;
   for (i = 0 ; i < 3 ; i++){
       cout << "Score of test #" << i+1 <<": ";
       cin >> testScore;
       if (testScore > 0 || testScore < 100 ){
           total += testScore;
       }
       else{
       cout << "invalid in put";
       break;
       }
   }
    
    Average = total / n;
    cout << setprecision(1) << fixed << "Average = " << Average;
    
    return 0;
}
