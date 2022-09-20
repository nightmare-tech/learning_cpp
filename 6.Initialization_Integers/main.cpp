#include <iostream>

int braced(){
    //Braced Initialization
    int elephant_count; //Variable may contain random garbage value
    int lion_count{}; //Initialises to zero
    int dog_count{10}; //Initialises to 10
    int cat_count{15}; //Initialises to 15
    int domestic_animals(dog_count + cat_count);

    // int narrowing_conversion_braced{2.9}; //Compile Error
    std::cout << "\n Braced Initialization" << std::endl; 

    std::cout << "Elephants : " << elephant_count << std::endl;
    std::cout << "Lions : " << lion_count << std::endl;
    std::cout << "Dogs : " << dog_count << std::endl;
    std::cout << "Domestic Animals : " << domestic_animals << std::endl;

    return 0;   
}

int functional(){

    //Variable may contain random garbage value
    // Functional Initialization
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);
    // int bad_initialisation(doesnt_exists1 + doesnt_exists2); // Gives Compile Error
    int narrowing_conversion_functional(2.9); // Converts 2.9 to 2 removing the deciaml and hence is an implicit conversion

    std::cout << "\n Functional Initialisation" << std::endl;

    std::cout << "Apples : " << apple_count << std::endl;
    std::cout << "Oranges : " << orange_count << std::endl;
    std::cout << "Total Fruits : " << fruit_count << std::endl;
    std::cout << "Narrowing Conversion (value = 2.9) :" << narrowing_conversion_functional << std::endl;
    return 0;
}

int assignment(){

    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_assignment = 2.9;

    std::cout << "\n Assignment Initialization" << std::endl;

    std::cout << "Bikes : " << bike_count << std::endl;
    std::cout << "Trucks : " << truck_count << std::endl;
    std::cout << "Total Vehicles : " << vehicle_count << std::endl;
    std::cout << "Narrowing Conversion : " << narrowing_conversion_assignment << std::endl;
    
    std::cout << "\n\n sizeof int : " << sizeof(int) << std::endl;
    std::cout << "sizeof truck_count variable : " << sizeof(truck_count) << std::endl;

    return 0;
}

int main(){
    std::cout << "-------------Initializing Integers-------------" << std::endl;
    braced();
    functional();
    assignment();
    return 0;
}