#include <iostream>
using namespace std;
int phase = 0;
void setup(){
    cout << "Welcome to the Command Line HackED terminal Hacking game \n" ;
    cout << "Please press 1 to Continue \n"; 
}
void loop(){
    if(phase == 0){
        int input = 0;
        try{
            cin >> input;
        }catch( exception& e){
            cout << "Invalid Input: Please try again \n";
        }
        if(input == 1){
            phase = 1;
        }else{
            cout << "Invalid Input: Please try again \n";
            input = 0;
        }
    }
}

int main(){
    setup();
    while(true){
        loop();
    }
    return 0;
}   
