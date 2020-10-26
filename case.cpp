#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int shape;
    float area, radius, base ,height, length, width;
    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> shape;
    
    
        switch (shape){
            case 1: //circle
            cout <<"r = ";
            cin >> radius;
            if (radius >= 0){
                area = (M_PI * pow(radius, 2));
                cout << fixed << showpoint << setprecision(2) << "Area = " << area <<endl;
                
            }
            else {
               cout << "Wrong data!" << endl; 
            }
            break;
            
            case 2: //rectangle
            cout <<"a = ";
            cin >> length;
            cout <<"b = ";
            cin >> width;
            if (length >= 0 && width >= 0){
                area = length * width;
                cout << fixed << showpoint << setprecision(2) << "Area = " << area <<endl;
                
            }
            else {
               cout << "Wrong data!" << endl; 
            }
            break;
            
            case 3://triangle
            cout <<"a = ";
            cin >> base;
            cout <<"b = ";
            cin >> height;
            if (base >= 0 && height >= 0){
                area = (base * height) / 2;
                cout << fixed << showpoint << setprecision(2) << "Area = " << area <<endl;
                
            }
            else {
               cout << "Wrong data!" << endl; 
            }
            break;
            
            default:
            cout << "Wrong choice!";
        
        }

    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    char package;
    float hours, payMon, addWork, subBill, totalBill;
    cout << "Enter package number (A, B, C): ";
    cin >> package;
    
    
        switch (package){
            case 'a'://package A
            case 'A':
            cout << "Enter how many hours were used: ";
            cin >> hours;
            if (hours >= 0 && hours <= 744){
                if (hours > 10){
                    subBill= hours - 10;
                    addWork = 2.00;
                    payMon = 9.95,
                    subBill = subBill * addWork;
                    totalBill = subBill + payMon;
                    cout << fixed << showpoint << setprecision(2) << "Total amount: " << totalBill << " $" <<endl;
                }
                else {
                    payMon = 9.95;
                    cout << fixed << showpoint << setprecision(2) << "Total amount: " << payMon << " $" <<endl;
                }
                
            }
            else if (hours < 0){
                cout << "Error: the number of hours should be a positive value!" <<endl;
            }
            
            else if (hours > 744){
                cout << "Error: the number of hours should be equal or less than 744!" << endl;
            }
            break;
            
            case 'b'://package B
            case 'B':
            cout << "Enter how many hours were used: ";
            cin >> hours;
            if (hours >= 0 && hours <= 744){
                if (hours > 20){
                    subBill= hours - 20;
                    addWork = 1.00;
                    payMon = 14.95,
                    subBill = subBill * addWork;
                    totalBill = subBill + payMon;
                    cout << fixed << showpoint << setprecision(2) << "Total amount: " << totalBill << " $" <<endl;
                }
                else {
                    payMon = 14.95;
                    cout << fixed << showpoint << setprecision(2) << "Total amount: " << payMon << " $" <<endl;
                }
                
            }
            else if (hours < 0){
                cout << "Error: the number of hours should be a positive value!" <<endl;
            }
            
            else if (hours > 744){
                cout << "Error: the number of hours should be equal or less than 744!" << endl;
            }
            break;
            
            case 'c'://package c
            case 'C':
            cout << "Enter how many hours were used: ";
            cin >> hours;
            if (hours >= 0 && hours <= 744){
                
                    payMon = 19.95;
                    cout << fixed << showpoint << setprecision(2) << "Total amount: " << payMon << " $" <<endl;
                
                
            }
            else if (hours < 0){
                cout << "Error: the number of hours should be a positive value!" <<endl;
            }
            
            else if (hours > 744){
                cout << "Error: the number of hours should be equal or less than 744!" << endl;
            }
            break;
        
            
            default:
            cout << "Wrong package!";
        
        }

    return 0;
}


