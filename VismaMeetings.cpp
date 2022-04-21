//
// Created by Marius on 4/21/2022.
//

#include "VismaMeetings.h"

void VismaMeetings::addMeetingToList(const Meeting &meeting) {
  _meetings.emplace_back(meeting);
}

void VismaMeetings::displayMeetings() {
  for (int i = 0; i < _meetings.size(); i++) {
    cout << (i + 1) << ". " << _meetings[i].getPerson().getName() << "\n";
  }
}

void VismaMeetings::removeMeetingFromList(const Meeting &meeting) {

}

void VismaMeetings::displayMembers(const Person &person) const {

  for (const auto& it: getMeetings()) {

    if (it.getPerson().getName() == person.getName()) {
      cout << it.getPerson().getName() << "\n";
      cout << "=========================================\n";
      for (const auto& member: it.getMembers()) {
        cout << member.getName() << "\n";
      }
    }
  }
}

VismaMeetings::VismaMeetings(const vector<Meeting> &meetings) : _meetings(meetings) {}

const vector<Meeting> &VismaMeetings::getMeetings() const {
  return _meetings;
}
