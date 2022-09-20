#include <iostream>
#include <algorithm>
using namespace std;


class Movie {
    private: // Only code that is inside the class can access the following code
        string rating;

    public: // Any other code outside of this class can access the following
        string title;
        string director;
        // Constructor Function
        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            setRating(aRating);
            }

        void setRating(string aRating){
            string acceptedRatings[] = {"G", "PG", "PG-13", "R", "NR"};
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
                rating = aRating;
            }else {rating = "NR";}
        }
        string getRating(){
            return rating;
        }
};


int main(){
    
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");

    // avengers.setRating("Dog");

    cout << avengers.getRating() << endl;


    return 0;
}
