#include <gtest/gtest.h>
#include "permitList.h"

using namespace std;

// Set up for our tests by instantiating our list and deallocating it
class ParkingListTest : public ::testing::Test {
protected:
    PermitList* list;
    
    void SetUp() override {
        // This runs before each test to instantiate our  list
        list = new PermitList();
    }
    
    void TearDown() override {
        // This runs after each test
        delete list;
    }
    
};

// ********** Example 1
TEST_F(ParkingListTest, getCountWhenEmpty){
    // GIVEN -- the empty list

    // WHEN -- ask for how many elements in the list
    int result = list->getCount();

    // THEN -- count of elements returned should be 0
    EXPECT_EQ(result, 0);
}

// ********** Example 2 This will run your Print functions
//  STEP 1 Print:  Make sure this works
TEST_F(ParkingListTest, getCountAfterAddingPermits) {
    // GIVEN -- two permits added
    list->addNew(101, "Jordan", 'B', 32);
    list->addNew(102, "Maya", 'C', 12);

    // WHEN -- get the number of permits
    int result = list->getCount();

    // THEN -- the count should be 2
    EXPECT_EQ(result, 2);
    list->PrintAll();
}

//TO DO STEP 2 REWARDS Write a test that gets a permit in the middle of the list with the longest time held
TEST_F(ParkingListTest, getLongestHeld) {
    // GIVEN -- add at least three permits  into the list
    list->addNew(103, "Cathy", 'E', 13);
    list->addNew(104, "John", 'D', 33);
    list->addNew(105, "Sadie", 'A', 2);

    // WHEN -- run the rewards function
    string result = list->runRewards();

    // THEN -- return the name of the person with the longest one
    EXPECT_EQ(result, "John");
}
//TO DO STEP 2 REWARDS Write a test that gets a permit at the end of the list with the longest time held
TEST_F(ParkingListTest, getLongestLastPermit) {
    // GIVEN -- add some permits where the last one added is the biggest
    list->addNew(103, "Cathy", 'E', 13);
    list->addNew(104, "John", 'D', 33);
    list->addNew(105, "Sadie", 'A', 42);

    // WHEN -- run the rewards function
        string result = list->runRewards();

    // THEN -- return the correct name
    EXPECT_EQ(result, "Sadie");

}
//TO DO STEP 2 REWARDS Write a test that gets a permit at the front of the list with the longest time held
TEST_F(ParkingListTest, getLongestFirstPermit) {
    // GIVEN -- add some permits where the first one added is the biggest
    list->addNew(103, "Cathy", 'E', 78);
    list->addNew(104, "John", 'D', 33);
    list->addNew(105, "Sadie", 'A', 42);

    // WHEN -- run the rewards function
        string result = list->runRewards();


    // THEN -- return the correct name
    EXPECT_EQ(result, "Cathy");

}

// TO DO STEP 3 SEG FAULTS: 



//TO DO STEP 3 SEG FAULTS: Write a test that gets a permit checking the edge case that the list is empty
// Run the Valgrind command from command line 
//          valgrind --leak-check=full --track-origins=yes ./
// write here about what the problem was and how you fixed it


TEST_F(ParkingListTest, getLongestHeldEmptyList) {
    // GIVEN -- an empty permit list
// don't write anything here because we want the list to be empty

    // WHEN -- run the rewards function
        string result = list->runRewards();

    // THEN -- return an empty string 
    EXPECT_EQ(result, "");

}

//TO DO STEP 3 SEG FAULTS: 
// Try commenting out the contents of the clean-up function
// what does the Valgrind command say now?
// Run the Valgrind command from command line 
