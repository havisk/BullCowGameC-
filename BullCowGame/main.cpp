//
//  main.cpp
//  BullCowGame
//
//  Created by kool Havis on 6/11/18.
//  Copyright © 2018 Divine Ordinance. All rights reserved.
//

#include <iostream>
#include <string>
#include "FBullCowGame.hpp"


void PrintIntro();
void PlayGame();
std::string GetGuess();
std::string PrintGuess();
bool AskToPlayAgain();
FBullCowGame BCGame;


int main() {
    bool PlayAgain = false;
    do {
        PrintIntro();
        PlayGame();
        PlayAgain = AskToPlayAgain();
    }
    while (PlayAgain);
    return 0; // exit app
}

//introduce Game
void PrintIntro(){
    constexpr int WORD_LENGTH = 5;
    std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
    std::cout << "Can you guess the " << WORD_LENGTH;
    std::cout << " letter isogram I'm thinking of? \n";
    std::cout << std::endl;
    return;
}

void PlayGame() {
    
    int MaxTries = BCGame.GetMaxTries();
    
    //loop through #of turns asking for guesses
    for(int count= 1; count<=MaxTries; count++){
        std::string Guess = GetGuess();
        //print guess back to player
        std::cout << "Your guess was: " << Guess << std::endl;
        std::cout << std::endl;
    }
}

std::string GetGuess() {
    int Tries = BCGame.GetCurrentTry();
    //get a guess from the player
    std::cout << "Try " << Tries << " Enter your guess: ";
    std::string Guess = "";
    getline(std::cin, Guess);
    return Guess;
}

bool AskToPlayAgain() {
    std::cout << "Do you want to play again? (y/n): ";
    std::string Response = "";
    getline(std::cin, Response);
    return (Response[0] == 'y') || (Response[0] == 'Y');
}

