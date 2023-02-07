#ifndef GAMEDIE_H
#define GAMEDIE_H

class GameDie
{
  public:
   GameDie();
   GameDie(unsigned int);
   int roll();
  private:
   const static int SIDES = 6;
   int counter[SIDES];
};

#endif
