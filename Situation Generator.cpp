#include <iostream>
#include <string>

void situation1() {
    std::cout << "You find an ancient map leading to the lost city of Eldoria. What do you do?\n";
    std::cout << "1. Follow the map into the Emerald Forest.\n";
    std::cout << "2. Ignore the map and stay in the village.\n";
}

void situation2() {
    std::cout << "You enter the Emerald Forest and hear rustling in the bushes. What do you do?\n";
    std::cout << "1. Investigate the noise.\n";
    std::cout << "2. Keep walking cautiously.\n";
}

void situation3() {
    std::cout << "You find a mischievous sprite that offers to help you. What do you do?\n";
    std::cout << "1. Accept the sprite's help.\n";
    std::cout << "2. Decline and continue alone.\n";
}

void situation4() {
    std::cout << "You encounter a hungry wolf. What do you do?\n";
    std::cout << "1. Try to scare it away.\n";
    std::cout << "2. Climb a tree to escape.\n";
}

void situation5() {
    std::cout << "You reach a fork in the path. Which way do you go?\n";
    std::cout << "1. Take the left path.\n";
    std::cout << "2. Take the right path.\n";
}

void situation6() {
    std::cout << "You find a hidden cave. What do you do?\n";
    std::cout << "1. Explore the cave.\n";
    std::cout << "2. Avoid the cave and continue on the path.\n";
}

void situation7() {
    std::cout << "Inside the cave, you find a treasure chest. What do you do?\n";
    std::cout << "1. Open the chest.\n";
    std::cout << "2. Leave it alone.\n";
}

void situation8() {
    std::cout << "You finally see the ruins of Eldoria. What do you do?\n";
    std::cout << "1. Enter the city.\n";
    std::cout << "2. Camp outside and rest first.\n";
}

void situation9() {
    std::cout << "Inside Eldoria, you meet a guardian. What do you do?\n";
    std::cout << "1. Ask for guidance.\n";
    std::cout << "2. Challenge the guardian.\n";
}

void situation10() {
    std::cout << "The guardian presents you with a riddle. What do you do?\n";
    std::cout << "1. Attempt to solve the riddle.\n";
    std::cout << "2. Ask for a hint.\n";
}

void situation11() {
    std::cout << "You solve the riddle and pass the first trial. What do you do next?\n";
    std::cout << "1. Proceed to the next trial.\n";
    std::cout << "2. Explore the city further.\n";
}

void situation12() {
    std::cout << "The next trial involves a serene lake. What do you do?\n";
    std::cout << "1. Look into the water for answers.\n";
    std::cout << "2. Skip the trial and move on.\n";
}

void situation13() {
    std::cout << "You see visions in the water. What do you do?\n";
    std::cout << "1. Reflect on the visions.\n";
    std::cout << "2. Ignore them and focus on the trial.\n";
}

void situation14() {
    std::cout << "You pass the second trial. What do you do next?\n";
    std::cout << "1. Ask the guardian for more knowledge.\n";
    std::cout << "2. Leave the city with your newfound wisdom.\n";
}

void situation15() {
    std::cout << "The guardian offers you a choice: a powerful artifact or knowledge. What do you choose?\n";
    std::cout << "1. Choose the artifact.\n";
    std::cout << "2. Choose the knowledge.\n";
}

void situation16() {
    std::cout << "With the artifact in hand, you feel powerful. What do you do?\n";
    std::cout << "1 . Use the artifact to help your village.\n";
    std::cout << "2. Keep it for yourself and seek more power.\n";
}

void situation17() {
    std::cout << "With the knowledge gained, you return to your village. What do you do?\n";
    std::cout << "1. Share the knowledge with the villagers.\n";
    std::cout << "2. Use it to become a leader.\n";
}

void situation18() {
    std::cout << "You notice a dark force threatening your village. What do you do?\n";
    std::cout << "1. Use the artifact to confront the dark force.\n";
    std::cout << "2. Rally the villagers to defend against it.\n";
}

void situation19() {
    std::cout << "After defeating the dark force, you are hailed as a hero. What do you do?\n";
    std::cout << "1. Lead your village into a new era of prosperity.\n";
    std::cout << "2. Set off on another adventure.\n";
}

void situation20() {
    std::cout << "As you embark on a new journey, you reflect on your experiences. What do you do?\n";
    std::cout << "1. Write a book about your adventures.\n";
    std::cout << "2. Seek out new lands and mysteries.\n";
}

int main() {
    int choice;

    situation1();
    std::cin >> choice;
    if (choice == 1) situation2(); 
    else return 0; 

    
    

    return 0;
}