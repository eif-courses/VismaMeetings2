//
// Created by Marius on 4/21/2022.
//

#include "Person.h"

const string &Person::getName() const {
  return _name;
}

void Person::setName(const string &name) {
  _name = name;
}

bool Person::isIsResponsible() const {
  return _isResponsible;
}

void Person::setIsResponsible(bool isResponsible) {
  _isResponsible = isResponsible;
}

Person::Person(const string &name, bool isResponsible = true) : _name(name), _isResponsible(isResponsible) {}
