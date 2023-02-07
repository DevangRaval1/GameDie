#ifndef GAMEDIE_H
#define GAMEDIE_H
#include <vector>
using namespace std;
class GameDie
{
  public:
   GameDie();
   int roll();
   vector <int> get_distribution();
  private:
   const static int FACES = 6;
   int counter[FACES];
};

#endif
