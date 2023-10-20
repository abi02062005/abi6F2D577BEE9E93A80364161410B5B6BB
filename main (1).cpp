#include <iostream>

class Player {
public:
    void play() {
        std::cout << "The player is playing cricket." << std::endl;
    }
};

class Batsman : public Player {
public:
    void play() {
        std::cout << "The batsman is batting." << std::endl;
    }
};

class Bowler : public Player {
public:
    void play() {
        std::cout << "The bowler is bowling." << std::endl;
    }
};

int main() {
    Player player;
    Batsman batsman;
    Bowler bowler;

    std::cout << "Calling play() method for Player:" << std::endl;
    player.play();

    std::cout << "Calling play() method for Batsman:" << std::endl;
    batsman.play();

    std::cout << "Calling play() method for Bowler:" << std::endl;
    bowler.play();

    return 0;
}

