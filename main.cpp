#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

class Item {
public:
    string name;
    string type;
    int effect;

    Item(string name, string type, int effect) : name(name), type(type), effect(effect) {}
};

class Player {
public:
    int health;
    int lives;
    int score;
    vector<Item> inventory;
    int combatRating;

    Player() : health(10), lives(3), score(0), combatRating(12) {}

    void addItem(const Item &item) {
        inventory.push_back(item);
        if (item.type == "weapon") {
            combatRating += item.effect;
        } else if (item.type == "clothing") {
            combatRating += item.effect;
        } else if (item.type == "food") {
            health += item.effect;
        } else if (item.type == "potion") {
            health += item.effect;
        }
    }

    void showInventory() {
        cout << "Inventory:\n";
        for (const auto &item: inventory) {
            cout << "- " << item.name << " (" << item.type << ")\n";
        }
    }
};

class Game {
private:
    Player player;

public:
    Game() {}

    void start() {
        srand(static_cast<unsigned>(time(0)));

        cout << "Realm of Legends: Quest for Destiny!\n";
        cout << "You have " << player.lives << " lives.\n";

        while (player.lives > 0) {
            cout << "Current health: " << player.health << "\n";
            cout << "Current score: " << player.score << "\n";
            player.showInventory();

            cout << "Realm of Legends: Quest for Destiny:\n";
            vector<string> choices = {


};
int main() {

    return 0;
}
