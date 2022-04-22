#include "VismaMeetings.h"
#include <vector>
#include <algorithm>

int main() {
  vector<Meeting> duomenys;
  Person jonas("Jonas", true);
  Meeting jonasMeeting(jonas);
  Person onute("Onute", true);
  Meeting onuteMeeting(onute);
  duomenys.emplace_back(jonasMeeting);
  duomenys.emplace_back(onute);

  VismaMeetings vismaMeetings(duomenys);
  vismaMeetings.displayMeetings();

  int input;
  cout << "Pasirinkite vartotodja: ";
  cin >> input;
  //vismaMeetings.displayMembers(vismaMeetings.getMeetings()[input-1].getPerson());

  Meeting meeting = vismaMeetings.getMeetings()[input-1];

  //it->addMember(Person("Petras", false));


  int option = 1;
  while (option != 0){
    cout << "===================================================\n";
    cout << "================Organizatoriaus meniu===========\n";
    cout << "1. Ideti dalyvi\n";
    cout << "2. Pasalinti dalyvi\n";
    cout << "0. Uzdaryti programa\n";
    cout << "==================================================\n";
    cout << "Pasirinkite meniu punkta: ";
    cin >> option;
    switch (option) {
      case 1:
          meeting.addMember(onute);
         // TODO fix vismaMeetings.displayMembers(meeting.getPerson());
//        for(auto iii: meeting.getMembers()){
//          cout << "______________________"<< iii.getName() << "_______________________________\n";
//        }
        break;
      case 2:
        for(auto iii: meeting.getMembers()){
          cout << "______________________"<< iii.getName() << "_______________________________\n";
        }        break;
      case 0:
        break;
      default:
        cout << "Blogai ivestas meniu punktas ";
        break;
    }
  }













 // vismaMeetings.displayMembers(onute);




//  for (auto it:vismaMeetings.getMeetings()) {
//    cout << it.getPerson().getName() << "\n";
//    for(auto member : it.getMembers()){
//      cout << member.getName() << "\n";
//    }
//  }


  //vismaMeetings.displayMembers(onute);




  // Join
  // Pasirinkti ir prsijungti meeting
  // Prideti random zmogu arba nauja
  // Imituotu kad kalba
  //






  return 0;
}
