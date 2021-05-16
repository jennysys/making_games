#include "Player.h"


Player::Player(){
    health = 0; //set everything to zero first
    damage = 0;
}

Player::Player(int hearts, int attack){
    health = hearts; //what is given, set it equal to that 
    damage = attack;
}

int Player::getHealth(){
    return health; //show health
}

int Player::getAttack(){
    return damage; //show attack power
}

int Player::changeminusHealth(int hearts){
    health = hearts - 1; //subtract a heart from the player
    return health; //give the health back
}

int Player::changeplusHealth(int hearts){
    health = hearts + 1; //add a heart to the player
    return health;
}
