#include "GameDie.h"
#include <cstdlib>
#include <ctime>

//class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
    for(int i=0; i<SIDES; i++)
      counter[i] = 0;
}

GameDie::GameDie(unsigned int sides)
{
    srand(time(NULL));
    if(sides%2 == 0 && sides>0){
        for(int i=0;i<sides;i++){
            counter[i] = 0;
        }
    }
    else{
        cout << "Enter an even number/positive number" << endl;
    }
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % SIDES;
    counter[roll]++;
    return roll + 1;
}
