#include <iostream>
#include "Character.h"

using namespace std;

Character::Character(string name, int health, int strength) : _name(name), _health(health), _strength(strength){
}

void Character::attack(Character target) const{
    target._health -= _strength;
}

void Character::heal(int amount){
    _health += amount;
}

int Character::getHealth() const{
    return _health;
}

int Character::getStrength() const{
    return _strength;
}

void Character::setHealth(int amount){
    _health = amount;
}

void Character::setStrength(int amount){
    _strength = amount;
}

bool Character::getItemInInventory(string& item){
    if (_inventory[item] > 0){
        _inventory[item] -= 1;
        return true;
    } 
    cout << item << " does not exist in your Inventory" << endl;
    return false;
}

ostream& operator<<(ostream& out, Character& in){
    out << '[' << in._name << "Stats]" << endl;
    out << "Health: " << in._health << endl;
    out << "Strength: " << in._strength << endl;
    return out;
}
