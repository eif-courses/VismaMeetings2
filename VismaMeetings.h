//
// Created by Marius on 4/21/2022.
//

#ifndef VISMAMEETINGS_VISMAMEETINGS_H
#define VISMAMEETINGS_VISMAMEETINGS_H
#include "Meeting.h"
#include <vector>
using namespace std;

class VismaMeetings {
private:
  vector<Meeting> _meetings{};
public:
  void addMeetingToList(const Meeting& meeting);
  void displayMeetings();
  void displayMembers(const Person& person) const;
  void removeMeetingFromList(const Meeting& meeting);

  explicit VismaMeetings(const vector<Meeting> &meetings);

  const vector<Meeting> &getMeetings() const;
};


#endif //VISMAMEETINGS_VISMAMEETINGS_H
