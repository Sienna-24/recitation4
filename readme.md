## This activity
In this activity, you will work with a program that manages parking permits using a vector of pointers to dynamically allocated parking objects. You will practice implementing and testing  methods that use pointers as parameters. You will also run valgrind on the program and diagnose memory problems.

You will complete the activity in three steps. You can use the find function in VSCode to help you find the tasks.

1. **Print:** These steps are marked, TO DO STEP 1 Print
You will update parameters to functions and write implementations to display information about the parking permits. Run the test to make sure it works.

2. **Rewards:** TO DO STEP 2 REWARDS 
Write implementations and write tests that determine which person should get a reward based on how long their permit has been held. You'll update parameters too.

3. **Debug:** TO DO STEP 3 SEG FAULTS
Run the program with **Valgrind**, investigate a segmentation fault, and fix the underlying memory or pointer problem. Try commenting out the delete code to see how valgrind responds.

## Turn in
Do not zip files when submitting
Turn in permitList.cpp
        test_case.cc
        a screenshot of your terminal showing passing tests (that are implemented)

Be sure that you have written tests. Unfortunately Google tests reports a passing test even when it is empty. But passing an empty test doesn't count.

## To build
### make a build directory ( with the folder icon in VScode or with the command: mkdir <foldername> in this case, mkdir build  )  
cd build

cmake ..

make 

## to run the program
### from the build directory ( you might need to "cd build" if you aren't already there)
./parking

### to run tests
./mytests

### to run valgrind on the test executable
### make sure you are in the build directory for this too

 valgrind --leak-check=full --track-origins=yes ./mytests