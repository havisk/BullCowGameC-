//
//  FBullCowGame.hpp
//  BullCowGame
//
//  Created by kool Havis on 6/12/18.
//  Copyright © 2018 Divine Ordinance. All rights reserved.
//

#ifndef FBullCowGame_hpp
#define FBullCowGame_hpp

#include <stdio.h>
#include <string>
#pragma once

#endif /* FBullCowGame_hpp */

class FBullCowGame {
public:
    
    int GetMaxTries() const;
    int GetCurrentTry() const;
    bool IsGameWon() const;
    
    void Reset(); //make a status return
    bool CheckGuessValidity(std::string);// make a more rich return
    
private:
    int MyCurrentTry = 1;
    int MyMaxTries = 5;
};
