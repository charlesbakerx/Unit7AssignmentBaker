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