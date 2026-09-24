#ifndef INT_PERMIT_LIST_H
#define INT_PERMIT_LIST_H

#include <vector> 
#include "parkingPermit.h"
using namespace std;

class PermitList {
private:
    vector<ParkingPermit*> permits;

    //TO DO STEP 1 Print: Change the parameter of this function to receive a pointer
    void PrintPermit(ParkingPermit* permit);

    //TO DO STEP 2 REWARDS: Change the parameter of this function to receive a pointer
    // name the parameter longestHeld
    bool getLongestHeldPermit(ParkingPermit* &longestHeld);
    void cleanUpList();

public:
    PermitList();
    ~PermitList();

    void addNew(int permitNumber, string studentName, char zone, int daysHeld = 0);

    int getCount();

    void PrintAll();

    string runRewards();

};
#endif // INT_PERMIT_LIST_H