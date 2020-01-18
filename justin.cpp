#include <iostream>
#include<limits>
using namespace std;
int phase = 0;
void setup(){
    cout << "Welcome to the Command Line HackED terminal Hacking game \n" ;
    cout << "Please press 1 to Continue \n"; 
}
void inputRecognition(){
    if(phase == 0){
        char input[1000] = {};
        cin >> input;
        if(input[0] == '1'){
            cout << "Begin the Game!";
        }else{
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid Input: Please try again \n";
        }
    }
}


int main(){
    setup();
    while(phase == 0){
        loop();
    }
    return 0;
}   