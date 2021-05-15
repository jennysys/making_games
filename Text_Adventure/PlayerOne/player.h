#ifndef PLAYER_H
#define PLAYER_H

class Player{
    public:
        Player(); //default constructor
        Player(int hearts, int attack); //constructs the player
        int getHealth(); //show health
        int getAttack(); //show attack
        int changeminusHealth(int hearts); // - 1 health
        int changeplusHealth(int hearts); // +1 health
        
    private:
        int health; //health at the moment
        int damage; //attack : coming soon!
};

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

#endif
