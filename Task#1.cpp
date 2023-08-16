/*
Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number.
*/

#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
    //clear screen
    system("CLS");

    srand(time(0));
    
    int num,gen_num;
    gen_num = (rand()% 100) +1;

    cout<<"Guess a Number between (0-100) : ";
    again:
    cin>>num;

    if(num!=gen_num){
        if(gen_num>num){
            cout<<"A bit Higher !! ";
        }
        else if ( gen_num<num){
            cout<<"A bit Lower !! ";
        }
        goto again;
    }
    else {
        cout<<"You Got !!! ";
    }

    return 0;
}