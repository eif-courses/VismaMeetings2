//
// Created by Marius on 4/21/2022.
//

#ifndef VISMAMEETINGS_PERSON_H
#define VISMAMEETINGS_PERSON_H
#include<iostream>
using namespace std;

class Person {
private:
  string _name;
  bool _isResponsible;
public:
  Person(const string &name, bool isResponsible);

  const string &getName() const;

  void setName(const string &name);

  bool isIsResponsible() const;

  void setIsResponsible(bool isResponsible);
};


#endif //VISMAMEETINGS_PERSON_H
