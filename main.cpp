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
struct guitarRepair
{
    struct Guitar  //nested class
    {
        int numPickups = 2;
        int switchPositions = 3;
        bool needsNewFrets = false;
    };

    bool upgradesDesired = true;
    void upgradeGuitar(Guitar guitar);
    bool checkGuitar(Guitar guitar);
};

/*
 2)
 */
struct bassRepair
{
    struct Bass
    {
        struct strings
        {
            bool stringsOld = false;
            void changeStrings(strings Strings);
        };
        struct electronics
        {
            bool happyWithElectronics = false;
        };
    };

    struct wiringDiagram
    {
        bool newPickups = true;
        int s1Switches = 3;
        void wireBass(Bass bass);
    };
};

/*
 3)
 */
 struct keyboardRepair
 {
     struct Keyboard
     {
        bool tinesOkay = false;
        bool electronicsOkay = false;
        bool potsOkay = true;
     };
     
     void replaceTines(Keyboard keyboard);
     void repairElectronics(Keyboard keyboard);
 };

/*
 4)
 */
struct speakerRepair
{
    struct Speaker
    {
        bool voiceCoilOpen = false;
        bool voiceCoilShort = true;
        bool tweeterOkay = false;
    };
    
    void replaceDriver(Speaker speaker);
    void replaceTweeter(Speaker speaker);
};

/*
 5)
 */
struct pedalRepair
{
    struct Pedal
    {
        bool potsOkay = false;
        bool boardOkay = false;
        bool wiresBurned = true;
        bool caseDamaged = true;
        bool soundOutput = false;
    };
    void trash(Pedal myTubeScreamer);
    void buildNewPedal(Pedal myNewTubeScreamer);
};

/*
 6)
 */
struct DIbuild
{
    struct Transformer
    {
        double ratio = 12;
        double ratedImpedance = 10000;
        bool centerTapped = false;
    };
    struct Jacks
    {
        int XLRJacks = 1;
        int TSJacks = 1;
    };
    void wireTStoPrimary(Jacks DIJacks, Transformer Jensen);
    void wireXLRtoSecondary(Jacks DIJacks, Transformer Jensen);
};

/*
 7) ONLY UDTs
 */
struct junkyard
{
    struct Vehicle;
    void Demolish(Vehicle Car1);
    void sell(Vehicle Car2);
};

/*
 8)
 */
struct workFromHome
{
    bool officeSpaceSetUp = true;
    int computerMonitors = 3;
    bool foodinFridge = false;
    bool workDownloaded = false;

    void goShopping(int itemsOnList = 20);
    void downloadWork(bool AsperaConnected = true);
};

/*
 9)
 */
struct repairPreamp
{
    struct Preamp
    {
        bool potsOkay = true;
        bool electronicsOkay = false;
        double THD = 10;
        bool clipping = true;
        double noiseFloor = 50;
    };

    void repairElectronics(Preamp preamp);
    void test(Preamp preamp);
};

/*
 10)
 */
struct mixSong
{
    struct Song
    {
        double drumLevel = 2;
        double bassLevel = 10;
        double guitarLevel = 5;
        double voxLevel = 1;
    };
    void turnUpDrums(Song MySong);
    void turnDownBass(Song MySong);
    void turnUpVox(Song MySong);
};


#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
