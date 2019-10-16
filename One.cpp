#include <iostream>
using namespace std;

int main() {
    char vec;
    int hour,ehour;
    double pay;
    const double C1=1.0, C2=1.5, L1=1.5, L2=2.5, B1=2.0, B2=3.5;
    cout <<"\nEnter C for car, L for Lorry or B for Bus:";
    cin >>vec;
    cout <<"\nEnter parking time in hour:";
    cin >>hour;
    ehour= hour>3?(hour-3):0;
    hour= hour>3?3:hour;
    switch(vec)
     {case 'C':
        pay=(hour*C1)+(ehour*C2);
        break;
      case 'L':
        pay=(hour*L1)+(ehour*L2);
        break;
      case 'B':
        pay=(hour*B1)+(ehour*B2);
        break;
      default :
        cout <<"Invalid Character.";
    
     }
cout <<"The total amount is "<<pay;
return 0;
   
}
