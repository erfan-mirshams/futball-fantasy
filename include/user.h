#ifndef USER_H_
#define USER_H_

#include "account.h"
#include "general.h"
#include "player.h"
#include "week.h"

class User : public Account {
public:
  User(string _name, string _pass);
  virtual ~User();
  bool isAdmin() { return false; }
  void sellPlayer(Player *p);
  bool hasCompleteTeam();
  int firstEmptyRole(Role r);
  int findPlayerId(Player *p);
  void buyPlayer(Player *p);
  void addPoints(Week *w);
  void sortPlayers();
  void resetSellCnt() {
    getsSellRestrcition |= hasCompleteTeam(), sellsCnt = 0;
  }
  inline Player *getPlayerByIndex(int ind) { return fantasyTeam[ind]; }
  inline double getPoint() { return point; }

private:
  Player *fantasyTeam[FANTASY_TEAM_SIZE];
  double point;
  bool getsSellRestrcition;
  int sellsCnt;
};

#endif // USER_H_
