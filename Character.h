#ifndef CHARACTER_H
#define CHARACTER_H

#include <unordered_map>
#include <string>

using namespace std;

class Character{
  private:
    string _name;
    int _health;
    int _strength;
    unordered_map<string, int> _inventory;
  public:
    Character(string name = "none", int health = 100, int strength = 1);
    void attack(Character target) const;
    void heal(int amount);
    int getHealth() const;
    int getStrength() const;
    void setHealth(int amount);
    void setStrength(int amount);
    bool getItemInInventory(string& item);

    friend ostream& operator<<(ostream& out, Character& in);
    
};

#endif
