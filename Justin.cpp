#include <iostream>
using namespace std;
int phase = 0;
void setup(){
    cout << "Welcome to the Command Line HackED terminal Hacking game \n" ;
    cout << "Please press 1 to Continue \n"; 
}
void phase1(){

}
void loop(){
    if(phase == 0){
        int input = 0;
        cin >> input;
        if(input == 1){
            phase = 1;
        }else{
            cin.clear();
            cout << "Invalid Input: Please try again \n";
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