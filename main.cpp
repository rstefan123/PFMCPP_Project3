/*
 Project 3 - Part 1 / 5
Video:  Chapter 2 Part 5
 User-Defined Types

 Create a branch named Part1

 Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to reinforce the syntax habits that C++ requires.  What you create in this project will be used as the basis of Project 5 in the course.   
 
 1) write 10 user-defined types, each with a random number of member variables
    make the member variables have names that are related to type of work the UDT would perform.
    see the example below for clarity on this instruction
 
 2) give the member variables relevant data types
 
 3) add at least 2 member functions to each of your 10 types.  
    make the function parameter list for those member functions use some of your User-Defined Types
    You'll write definitions in part2 for these functions
    you'll call each of these functions in part3
 
 4) make 2 of the 10 user-defined types have a nested class.  this nested class also needs member functions.
 
 5) One of your 10 UDTs should only use UDTs for its member variable types.   
     No primitives allowed!
 
 6) After you finish defining each type, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

/*
 example:
 */
//1) a U.D.T. with a random number of member variables
struct CarWash           
{
    //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
    int numSponges = 3;
    double amountOfSoapUsedPerCar = 2.6;
    unsigned int numCarsProcessed = 0;
    
    struct Car                             //4) nested class
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);   
    };
    
    //3) member function with a user-defined type as the parameter.
    //The user-defined type parameter happens to be the nested class.
    void washAndWaxCar( Car car );           
    
    //5) a member variable whose type is a UDT.
    Car myCar;  
};


/*
 1)
 */

/*
 2)
 */

/*
 3)
 */

/*
 4)
 */

/*
 5)
 */

/*
 6)
 */

/*
 7)
 */

/*
 8)
 */

/*
 9)
 */

/*
 10)
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
