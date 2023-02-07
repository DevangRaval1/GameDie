#include "GameDie.h"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>
using namespace std;
//class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
    for(int i=0; i<FACES; i++)
      counter[i] = 0;
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{

   
    // vector<int> dist;
    int roll = rand() % FACES;

    counter[roll]++;
    return roll + 1;
}
//get the distribution of the values of die
vector<int> GameDie::get_distribution()
{
    vector<int> distribution;
    for(int i=0; i<FACES;i++){
        distribution.push_back(counter[i]);
    }
    return distribution;
}
