//
// Created by Marius on 4/21/2022.
//

#ifndef VISMAMEETINGS_MEETING_H
#define VISMAMEETINGS_MEETING_H
#include <iostream>
#include <vector>
#include "Person.h"

using namespace std;

enum Category{
  CODE_MONKEY, HUB, SHORT, TEAM_BUILDING
};
class Meeting {
private:
  string _name = "no name";
  string _description = "no description";
  string _startDate;
  string _endDate;
  Person _person;
  vector<Person> _members{};
  Category _category;
  vector<string> _types{"Live", "InPerson"};
public:
  Meeting(const Person &person);

  const vector<Person> &getMembers() const;


  void addMember(const Person& person);

  const string &getName() const;

  void setName(const string &name);

  const string &getDescription() const;

  void setDescription(const string &description);

  const string &getStartDate() const;

  void setStartDate(const string &startDate);

  const string &getEndDate() const;

  void setEndDate(const string &endDate);

  const Person &getPerson() const;

  void setPerson(const Person &person);

  Category getCategory() const;

  void setCategory(Category category);

  const vector<string> &getTypes() const;

  void setTypes(const vector<string> &types);

};



#endif //VISMAMEETINGS_MEETING_H
