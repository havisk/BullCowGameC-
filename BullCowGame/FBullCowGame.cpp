//
//  FBullCowGame.cpp
//  BullCowGame
//
//  Created by kool Havis on 6/12/18.
//  Copyright © 2018 Divine Ordinance. All rights reserved.
//

#include "FBullCowGame.hpp"


int FBullCowGame::GetMaxTries() const{ return MyMaxTries;}
int FBullCowGame::GetCurrentTry()const {return MyCurrentTry;}


void FBullCowGame::Reset() { 
    return;
}

bool FBullCowGame::CheckGuessValidity(std::string) { 
    return false;
}


bool FBullCowGame::IsGameWon() const {
    return false;
}








