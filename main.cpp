#include "VismaMeetings.h"
#include <vector>
#include <algorithm>

int main() {
  vector<Meeting> meetings;
  Person jonas("Jonas", true);
  Meeting jonasMeeting(jonas);
  Person onute("Onute", true);
  Meeting onuteMeeting(onute);
  meetings.emplace_back(jonasMeeting);
  meetings.emplace_back(onute);

  VismaMeetings vismaMeetings(meetings);
  vismaMeetings.displayMeetings();

  int input;
  cout << "Pasirinkite vartotoja: ";
  cin >> input;
  vismaMeetings.displayMembers(meetings[input-1].getPerson());

  std::vector<Meeting>::iterator it;
  string temp = meetings[input-1].getPerson().getName();
  it = std::find_if(meetings.begin(), meetings.end(), [temp](Meeting const& obj)
  {
    return obj.getPerson().getName() == temp;
  });




  //it->addMember(Person("Petras", false));

 // if(it != meetings.end())

//    cout << "Lamba rezultatas: " << it->getPerson().getName()<<endl;

//    //std::cout<<"Item Price ::"<<it->getPrice()<<" Count :: "<<it->getCount()<<std::endl;
//  else
//    std::cout<<"Item not Found"<<std::endl;



//  if(it != vecOfItems.end())
//    std::cout<<"Item Price ::"<<it->getPrice()<<" Count :: "<<it->getCount()<<std::endl;
//  else
//    std::cout<<"Item not Found"<<std::endl;
//
//  //it = std::find(vecOfItems.begin(), vecOfItems.end(), Item("D123",99,0));
//  if(it != vecOfItems.end())
//    std::cout<<"Found with Price ::"<<it->getPrice()<<" Count :: "<<it->getCount()<<std::endl;
//  else
//    std::cout<<"Item with ID :: D126 not Found"<<std::endl;




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
          it->addMember(jonas);
        for(auto iii: it->getMembers()){
          cout << "______________________"<< iii.getName() << "_______________________________\n";
        }
        break;
      case 2:
        break;
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
