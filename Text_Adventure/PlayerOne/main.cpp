//This is the beginning of my text adventure game

#include <iostream>
//#include <cstdlib> //rand
#include <stdlib.h> //random srand / rand
#include "player.h"

using namespace std;

int main(){
    //for randomized numbers testing
    /*
    srand (time(NULL));
    int r = rand() % 10;
    
    cout << r << endl;
    */
    
    int hearts = 4; //start with health
    int attack = 2; //attack damage
    int choice; // for the if statements yes or no
    
    Player one = {hearts, attack}; //create the player 
    
    cout << "Health: " << one.getHealth() << endl; //starting with health
    cout << "Attack: " << one.getAttack() << endl; //start attack
    
    cout << "The Beginning of a Game..." << endl; //start of the game
    
    cout << "Choose 1 or 2: ";
    cin >> choice; //for the player to learn I guess?
    
    if(choice == 1){
        cout << "You chose wrong!" << endl;
        cout << "Take one damage" << endl;
        hearts = one.changeminusHealth(hearts); //removes a heart
        cout << "Health: " << one.getHealth() << endl; //shows health
        cout << "There's the start of the game..." << endl;
        cout << "Choose 1 for yes, and 2 for no." << endl;
        cout << "Good luck!" << endl;
    }
    else if (choice == 2){
        cout << "You chose right!" << endl;
        cout << "Get one heart" << endl;
        hearts = one.changeplusHealth(hearts); // plus one heart
        cout << "Health: " << one.getHealth() << endl; //get health
        cout << "There's the start of the game..." << endl;
        cout << "Choose 1 for yes, and 2 for no." << endl;
        cout << "Good luck!" << endl;
    }
    
    cout << endl;
    cout << "You encounter an enemy..." << endl;
        
    cout << "Will you fight it? 1 or 2: ";
    cin >> choice;
    
    if(choice == 1){
        cout << "You prepare to battle the enemy." << endl;
        cout << "What will you do?";
        cout << "(1) Punch it, or (2) Flee: ";
        cin >> choice;
        if(choice == 1){
            cout << "You missed! The enemy punches you back!" << endl;
            cout << "Lose one heart" << endl;
            hearts = one.changeminusHealth(hearts);
            cout << "Health: " << one.getHealth() << endl;
            
            cout << "There isn't much you can do. The enemy's too strong!" << endl;
            cout << "In the end, you escape successfully, and return home." << endl;
            cout << "END OF GAME" << endl;
        }
        else{
            cout << "You ran home, avoiding an attack as you left." << endl;
            cout << "END OF GAME"<< endl;
        }
    }
    else{
        cout << "You skedaddled successfully, and return home." << endl;
        cout << "END OF GAME" << endl;
    }
    
    return 0;
}


