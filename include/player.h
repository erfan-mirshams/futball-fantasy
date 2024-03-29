#ifndef PLAYER_H_
#define PLAYER_H_

#include "general.h"

const int YELLOW_CARD_CAP = 3;
const int INJURY_SUSPENSION = 3;

class Player {
public:
  Player(string _name, Role _role);
  virtual ~Player();
  inline string getName() { return name; }
  inline Role getRole() { return role; }
  string getRoleString();
  inline bool isSuspended() { return suspendedWeeks; }
  double getScore() {
    return ((scoredWeeksCnt) ? scoreSum / scoredWeeksCnt : 0);
  }
  void redCardPenalty();
  void yellowCardPenalty();
  inline void injuryPenalty() { suspendedWeeks = INJURY_SUSPENSION; }
  void passWeekUpdate(double score);

private:
  string name;
  Role role;
  int yellowCardCnt;
  int suspendedWeeks;
  double scoreSum = 0;
  int scoredWeeksCnt = 0;
};

#endif // PLAYER_H_
