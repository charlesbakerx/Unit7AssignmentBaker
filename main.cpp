/*
Charles Baker, Programming Fundamentals I: COSC-1436-57001
IDE: Replit
Summary: 
*/

#include <iostream>
#include <string>
using namespace std;

class GreenTea {
  private:
    bool delicious;
    string nameTea;
  public:
    void setDelicious(bool);
    bool getDelicious();
    void setNameTea(string);
    string getNameTea();
};

void GreenTea::setDelicious(bool d) {
  delicious = d;
}

bool GreenTea::getDelicious() {
  return delicious;
}

void GreenTea::setNameTea(string nt) {
  nameTea = nt;
}

string GreenTea::getNameTea() {
  return nameTea;
}

class Student {
  private:
    string name;
    int id;
    char letterGrade;
    GreenTea preference;
  public:
    void setName(string);
    void setId(int);
    void setLetterGrade(char);
    void setPreference(GreenTea);
    string getName();
    int getId();
    char getLetterGrade();
    GreenTea getPreference();
    void printTranscript();
};

void Student::setName(string n) {
  name = n;
}

void Student::setId(int i) {
  id = i;
}

void Student::setLetterGrade(char lg) {
  letterGrade = lg;
}

void Student::setPreference(GreenTea p) {
  preference = p;
}

string Student::getName() {
  return name;
}

int Student::getId() {
  return id;
}

char Student::getLetterGrade() {
  return letterGrade;
}

GreenTea Student::getPreference() {
  return preference;
}

void Student::printTranscript() {
  cout << "\nName: " << name;
  cout << "\nID: " << id;
  cout << "\nGrade: " << letterGrade;
  cout << "\nTea Name: " << preference.getNameTea();

  if (preference.getDelicious() == true) {
    cout << "\nWell said, McMillanite, " << preference.getNameTea() << ", green tea is great !!!" << endl;
  } else {
    cout << "\n :'(" << endl;
  }
}