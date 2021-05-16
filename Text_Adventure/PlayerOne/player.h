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

#endif
