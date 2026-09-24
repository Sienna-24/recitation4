#include "permitList.h"
#include "parkingPermit.h"
#include <iostream>
using namespace std;

PermitList::PermitList()
{
}

PermitList::~PermitList()
{
    cleanUpList();
}

void PermitList::addNew(int permitNumber, string studentName, char zone, int daysHeld)
{
    permits.push_back(new ParkingPermit(permitNumber, studentName, zone, daysHeld ));
};

int PermitList::getCount()
{
    return static_cast<int>(permits.size());
}

// This function prints a single permit given a pointer to the permit
//TO DO STEP 1 Print: Change the parameter of this function to receive a pointer
void PermitList::PrintPermit(ParkingPermit* permit)
{
    // TO DO STEP 1 Print: Write a cout statement that prints the information in a permit
    cout<< "Permit Number: " <<  permit->getPermitNumber() << endl;
    cout << "Permit Student Name: " << permit->getStudentName() << endl;
    cout << "Permit Zone: " << permit->getZone() << endl;
    cout << "Permit Days Held: " << permit->getDaysHeld() <<endl;
}

// This function iterates through all of the permits and calls the PrintPermit function for each of them
void PermitList::PrintAll()
{
    // TO DO STEP 1 Print: write the call to the PrintPermit function
    for (int i = 0; i < getCount(); i++) {
         PrintPermit(permits[i]);
    }
}

// This function returns a pointer to the longestHeld permit
//TO DO STEP 2 REWARDS: Change the parameter of this function to receive a pointer
// name the parameter longestHeld
bool PermitList::getLongestHeldPermit(ParkingPermit* &longestHeld)
{
    //TO DO STEP 2 REWARDS:  uncomment these lines once you have defined the parameter longestHeld

    if (getCount() == 0) {
        longestHeld = nullptr;
        return false;
    } 
    longestHeld = permits[0];

    cout << "longestHeld start " << longestHeld->getDaysHeld() << endl;


    //TO DO STEP 2 REWARDS: iterate through the permits to find the longest held permit
    for (int i = 1; i < getCount(); i++) {
        if (permits[i]->getDaysHeld() > longestHeld->getDaysHeld()) {
            longestHeld = permits[i];
    }
    }
    return true;

}

// This function should return the name of the permit holder who held it longest
string PermitList::runRewards()
{
    ParkingPermit* longestHeld = nullptr;
    string result=string();


    if(getCount() == 0){
        return "";
    }
   //TO DO STEP 2 REWARDS add the parameter in the following statement
    bool found = getLongestHeldPermit(longestHeld);   
    if (found && longestHeld != nullptr) {
        cout << "found " << found << " " << longestHeld->getStudentName() << endl;
        return longestHeld->getStudentName();
}

return "";
}


void PermitList::cleanUpList()
{
       for (int i = 0; i < getCount(); i++) {
            delete permits[i];
    } 
}
