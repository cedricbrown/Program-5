#include <iostream>
#include <cmath>
#include <time.h>
#include <cstdlib>
using namespace std;

int main(){
    
    char ch;
    
    int win = 0;
    int tie = 0;
    int lose = 0;
    
    do{
    int choice;
    
    cout << "--------------------------------------" << endl;
    cout << "-- Lets play Earthquake, Tornado, Tsuname! --" << endl;
    cout << "--------------------------------------" << endl;
    
    cout << "Press 1 for Earthquake, 2 for Tornado, 3 for Tsuname:" << endl;
    cin >> choice;
    
    int ai = rand() % 3 + 1;
    cout <<  "The computer chose: " << ai << endl;
    
    if(choice == 1 && ai == 1){
         cout << "Earthquake meets Earthquake WORLD IS DESTROYED!" << endl;
         tie++;
         }
    else if(choice ==1 && ai== 2){
         cout << "Earthquake is stopped by Tornado the computer wins!." << endl;
         lose++;
         }
    else if(choice == 1 && ai == 3){
         cout << "Earthquake destroys Tsuname you win!" << endl;
         win++;
         }
    else if(choice == 2 && ai == 1){
         cout << "Tornado stopped Earthquake you win!" << endl;
         win++;
         }
    else if(choice == 2 && ai == 2){
         cout << "Tornado meets Tornado WORLD IS DESTROYED!" << endl;
         tie++;
         }
    else if(choice == 2 && ai == 3){
         cout << "Tornado joins Tsuname the computer wins!" << endl;
         lose++;
         }
    else if( choice == 3 && ai == 1){
         cout << "Tsuname is destroyed by Earthquake computer wins!" << endl;
         lose++;
         }
    else if( choice == 3 && ai == 2){
         cout << "Tsuname consumes Tornado you win!" << endl;
         win++;
         }
    else if(choice == 3 && ai == 3){
         cout << "Tsuname meet Tsuname WORLD IS DESTROYED!" << endl;
         tie++;
         }
         
    else{
         cout << "You didn't select 1, 2, or 3" << endl;
         }
         
         cout << "Wins: " << win << endl;
         cout << "Ties:" << tie << endl;
         cout << "Losses:" << lose << endl;
         cout << "Would you like to play again? Y/N" << endl;
         cin >> ch;
         system("CLS");
         }while(ch == 'Y' || ch == 'y');
    
    return 0;
    
}