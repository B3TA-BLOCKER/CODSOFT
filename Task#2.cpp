/*
Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.
*/

#include<iostream>
#include<cmath>
#include<windows.h>

using namespace std;

void Calculator(void);
double Factorial(double);

int main(){
   
   Calculator();

   return 0;
}

void Calculator(void){

    again :
    //clear Screen
    system("CLS");
    //Heading;
    cout<<"\t\t\t\t\t\t\t   ...............CALCULATOR..............."<<endl<<endl<<endl;
    // First Row;
    cout<<"\t\t\t\t\t _______________     _________________    ___________________    _______________"<<endl;
    cout<<"\t\t\t\t\t|               |   |                 |  |                   |  |               |\t"<<endl;
    cout<<"\t\t\t\t\t|  1-ADDITION   |   | 2-SUBSTRACTION  |  | 3-MULTIPLICATION  |  |  4-DIVISION   |\t"<<endl;
    cout<<"\t\t\t\t\t|_______________|   |_________________|  |___________________|  |_______________|"<<endl;

    //Second Row;
    cout<<"\t\t\t\t\t\t\t       _________    _________    _________"<<endl;
    cout<<"\t\t\t\t\t\t\t      |         |  |         |  |         |"<<endl;
    cout<<"\t\t\t\t\t\t\t      | 5-sin() |  | 6-cos() |  | 7-tan() |"<<endl;
    cout<<"\t\t\t\t\t\t\t      |_________|  |_________|  |_________|"<<endl;

    //Third Row;
    cout<<"\t\t\t\t      _________________     _________________    _____________________    _________________"<<endl;
    cout<<"\t\t\t\t     |                 |   |                 |  |                     |  |                 |\t"<<endl;
    cout<<"\t\t\t\t     |  8-SQUARE ROOT  |   |   9-FACTORIAL   |  |  10-EXPONENTIATION  |  |  11-CUBE ROOT   |\t"<<endl;
    cout<<"\t\t\t\t     |_________________|   |_________________|  |_____________________|  |_________________|"<<endl;

    cout<<endl<<endl<<endl<<endl<<endl<<endl;
    int num;
    cout<<"\t\t\t\t Chose The Operation and Enter it's Respective Number : ";
    cin>>num;

    double num1,num2,result;
    switch(num){
        case (1) :{
            system("CLS");
            cout<<endl<<endl<<"\t\t\t\t Enter The First Number : ";
            cin>>num1;
            cout<<"\t\t\t\t Enter The Second Number : ";
            cin>>num2;
            result = num1+num2;
            cout<<"\t\t\t\t  "<<num1 <<" + "<<num2<<" = "<<result<<endl;
        }
        break;
        case (2):{
            system("CLS");
            cout<<endl<<endl<<"\t\t\t\t Enter The First Number : ";
            cin>>num1;
            cout<<"\t\t\t\t Enter The Second Number : ";
            cin>>num2;
            result = num1-num2;
            cout<<"\t\t\t\t  "<<num1 <<" - "<<num2<<" = "<<result<<endl;
        }
        break;
        case (3):{
            system("CLS");
            cout<<endl<<endl<<"\t\t\t\t Enter The First Number : ";
            cin>>num1;
            cout<<"\t\t\t\t Enter The Second Number : ";
            cin>>num2;
            result = num1*num2;
            cout<<"\t\t\t\t  "<<num1 <<" x "<<num2<<" = "<<result<<endl;
        }
        break;
        case (4) :{
            system("CLS");
            cout<<endl<<endl<<"\t\t\t\t Enter The First Number : ";
            cin>>num1;
            cout<<"\t\t\t\t Enter The Second Number : ";
            cin>>num2;
            if(num2==0){
               cout<<" \t\t\t\t  Math Error !!!!!"<<endl;
            }
           else{
              result = num1/num2;
               cout<<"\t\t\t\t  "<<num1 <<"/"<<num2<<" = "<<result<<endl;
           }
        }
        break;
        case (5):{
            system("CLS");
            cout<<endl<<endl<<"\t\t\t\t Enter The Angle in Radians : ";
            cin>>num1;
            result = sin(num1);
            cout<<"\t\t\t\t  "<<" sin("<<num<<") = "<<result<<endl;
        }
        break;
        case (6) :{
            system("CLS");
            cout<<endl<<endl<<"\t\t\t\t Enter The Angle in Radians : ";
            cin>>num1;
            result = cos(num1);
            cout<<"\t\t\t\t  "<<" cos("<<num<<") = "<<result<<endl;
        }
        break;
        case (7) :{
            system("CLS");
            cout<<endl<<endl<<"\t\t\t\t Enter The Angle in Radians : ";
            cin>>num1;
            result = tan(num1);
            cout<<"\t\t\t\t  "<<" tan("<<num<<") = "<<result<<endl;
        }
        break;
        case (8) :{
            system("CLS");
            cout<<endl<<endl<<"\t\t\t\t Enter The Number : ";
            cin>>num1;
            cout<<"\t\t\t\t "<< " Square Root of "<<num1<<" = "<< sqrt(num1)<<endl;
        }
        break;
        case (9) :{
            system("CLS");
            cout<<endl<<endl<<"\t\t\t\t Enter The Number : ";
            cin>>num1;
            cout<<"\t\t\t\t "<<num1<<"! = "<<Factorial(num1)<<endl;
        }
        break;
        case (10) :{
            system("CLS");
            cout<<endl<<endl<<"\t\t\t\t Enter The Base Number : ";
            cin>>num1;
            cout<<"\t\t\t\t Enter The Power Number : ";
            cin>>num2;
            cout<<"\t\t\t\t "<<num1<<"^"<<num2<<" = "<<pow(num1,num2)<<endl;
        }
        break;
        case (11) :{
            system("CLS");
            cout<<endl<<endl<<"\t\t\t\t Enter The Number : ";
            cin>>num1;
            cout<<"\t\t\t\t "<< " Cuber Root of "<<num1<<" = "<<cbrt(num1)<<endl;
        }
        break;
        default:{
            system("CLS");
            cout<<endl<<endl<<"\t\t\t\t\t WRONG ENTRY !!! "<<endl<<"\t\t\t\t\t Try Again "<<endl<<endl<<"\t\t\t\t\t Loading ";
            for(int i=0;i<5;i++){
                cout<<" .";
                Sleep(1000);
            }
            goto again;
        }

    }

    Sleep(3000);

    int choice;
    wrong_entry:
    system("CLS");
    cout<<endl<<endl<<endl<<"\t\t\t\t\t 1- Calculate Again"<<endl;
    cout<<"\t\t\t\t\t 2- Exit"<<endl;
    cout<<endl<<"\t\t\t\t\t Enter your Choice : ";
    cin>>choice;

    if(choice == 1){
        system("CLS");
            cout<<endl<<endl<<"\t\t\t\t\t Loading ";
            for(int i=0;i<5;i++){
                cout<<" .";
                Sleep(1000);
            }
            goto again;
    }
    else if(choice>2 || choice<1){
        system("CLS");
            cout<<endl<<endl<<"\t\t\t\t WRONG ENTRY !!! "<<endl<<"\t\t\t\t Try Again "<<endl<<endl<<"\t\t\t\t Loading ";
            for(int i=0;i<5;i++){
                cout<<" .";
                Sleep(1000);
            }
        goto wrong_entry;
    }
    else if(choice==2){
        system("CLS");
        cout<<endl<<endl<<endl<<endl<<"\t\t\t\t\t\t Exiting ";
            for(int i=0;i<5;i++){
                cout<<" .";
                Sleep(1000);
            }
    }
    
}

double  Factorial(double num1){
    if (num1 == 0 || num1 == 1) {
        return 1;
    } 
    else {
        return num1 * Factorial(num1 - 1);
    }
}
