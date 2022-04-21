//
// Created by Marius on 4/21/2022.
//

#include "Meeting.h"

const string &Meeting::getName() const {
  return _name;
}

void Meeting::setName(const string &name) {
  _name = name;
}

const string &Meeting::getDescription() const {
  return _description;
}

void Meeting::setDescription(const string &description) {
  _description = description;
}

const string &Meeting::getStartDate() const {
  return _startDate;
}

void Meeting::setStartDate(const string &startDate) {
  _startDate = startDate;
}

const string &Meeting::getEndDate() const {
  return _endDate;
}

void Meeting::setEndDate(const string &endDate) {
  _endDate = endDate;
}

const Person &Meeting::getPerson() const {
  return _person;
}

void Meeting::setPerson(const Person &person) {
  _person = person;
}

Category Meeting::getCategory() const {
  return _category;
}

void Meeting::setCategory(Category category) {
  _category = category;
}

const vector<string> &Meeting::getTypes() const {
  return _types;
}

void Meeting::setTypes(const vector<string> &types) {
  _types = types;
}

Meeting::Meeting(const Person &person) : _person(person) {
  _members.emplace_back(person);
}

void Meeting::addMember(const Person &person) {
  _members.emplace_back(person);
}

const vector<Person> &Meeting::getMembers() const {
  return _members;
}
