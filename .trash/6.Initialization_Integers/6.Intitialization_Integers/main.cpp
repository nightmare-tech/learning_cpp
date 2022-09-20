#include <iostream>

int braced(){
    //Braced intializers
    //Variable may contain random garbage value
    int elephant_count;
    int lion_count{};//Initializes to zero
    int dog_count {10};//Initializes to 10
    int cat_count {15};//Initializes to 15
    //Can use expression as intializer
    int domesticated_animals {dog_count + cat_count};
    // int narrowing_conversion_braced {2.9}; //Compiler Error

    std::cout << "Elephant count; " << elephant_count << std::endl;
    std::cout << "Lion count; " << lion_count << std::endl;
    std::cout << "Dog count; " << dog_count << std::endl;
    std::cout << "Cat count; " << cat_count << std::endl;
    std::cout << "Domestic Anumals count; " << domesticated_animals << std::endl;

    return 0;
    
}

int functional(){

    // Functional Initialization
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);
    // int bad_init{doesnt_exists1 + doesnt_exists2} //gives compile error
    int narrowing_conversion_functional(2.9); // Information lost. Less safe than braced initializers
    std::cout << "Apple Count; " << apple_count << std::endl;
    std::cout << "Orange Count; " << orange_count << std::endl;
    std::cout << "Fruit Count; " << fruit_count << std::endl;
    std::cout << "Narrowing Conversion; " << narrowing_conversion_functional << std::endl;

    return 0;
    
}

int assignment(){
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_assignment = 2.9;

    std::cout << "Bike Count; " << bike_count << std::endl;
    std::cout << "Truck Count; " << truck_count << std::endl;
    std::cout << "Vehicle Count; " << vehicle_count << std::endl;
    std::cout << "Narrow Conversion; " << narrowing_conversion_assignment << std::endl;

    return 0;
}

int main(){
    
    std::cout << "Braced Initialization:- " << std::endl;
    braced();
    std::cout << "\n\nFunction Initialization:- " << std::endl;
    functional();
    std::cout << "\n\nAssignment Initialization:-" << std::endl;
    assignment();
    return 0;

}
