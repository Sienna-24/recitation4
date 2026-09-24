#ifndef INT_PERMIT_H
#define INT_PERMIT_H

#include <string>
using namespace std;

class ParkingPermit{
private:
    int permitNumber;
    string studentName;
    char zone;
    int daysHeld;

public:
    ParkingPermit(int permitNumber, string studentName, char zone, int daysHeld = 0);
    int getPermitNumber();
    string getStudentName();
    char getZone();
    int getDaysHeld();

};
#endif // permit_H

