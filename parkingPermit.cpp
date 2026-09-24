#include "parkingPermit.h"

ParkingPermit::ParkingPermit(int permitNumber, string studentName, char zone, int daysHeld)
{
    this->permitNumber = permitNumber;
    this->studentName = studentName;
    this->zone = zone;
    this->daysHeld = daysHeld;
}

int ParkingPermit::getPermitNumber()
{
    return permitNumber;
}

string ParkingPermit::getStudentName()
{
    return studentName;
}

char ParkingPermit::getZone()
{
    return zone;
}

int ParkingPermit::getDaysHeld()
{
    return daysHeld;
}
