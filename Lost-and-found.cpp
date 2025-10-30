#include <iostream> 
//notes:
//ned to be able to search trhough an array
//need to make these a dynamic array to add any new lost items
//impossible to turrn it into dynamic array coz it deletes the data after running again
//adjust code later for linked list coz i dont fully understand what he means by that
//need to be able to tell how many lost item in a category (can be done with for sizeof)
// still arguing with myself to use switch for categories
// the output dont have spaces for some reason not sure how to fix
//categories choices doesnt have numbers in it 

int searchclothes(std::string Clothes[], int clothesize, std::string clotheconfirm); // function declaration FOR CLOTHES 


int main() {
    
    int choices; // for the switch kind of self-explanatory tbh
    int searchNumber; //the number where its at
    std::string searchResult; //the thing were looking for
    
    std::string categories[] = {"1: Clothes", "2: Toys", "3: Electronic devices"};
    int size = sizeof(categories) / sizeof(categories[0]);
    
    for (int i = 0; i < size; i++ ) {
    std::cout << categories[i] << " \n";
    }
    
    std::string Clothes[] = {"Tshirt", "Shorts", "jackets", "bracelet"};
    int clothesize = sizeof(Clothes) / sizeof(Clothes[0]);
    
    std::string toys[] = {"teddy bear", "toy car", "AK-47"};
    int toysize = sizeof(toys) / sizeof(toys[0]);

    std::string electronics[] = {"Cellphone", "laptop", "tablet"};
    int electronicssize = sizeof(electronics) / sizeof(electronics[0]);

    std::cout << "Choose Category nuumber: ";
    std::cin >> choices;

    switch (choices)
    {
    case 1: {//for clothes 
        //int clothesize = sizeof(Clothes) / sizeof(Clothes[0]); //set the size for clothes, toys, electronics to comment coz searchNumber cant read variables declared inside the switch
        for(int i = 0; i < clothesize; i++) {
        std::cout << Clothes[i] << "\n";
        }
        break;
    }
    case 2: { // for toys
        //int toysize = sizeof(toys) / sizeof(toys[0]);
        for(int i = 0; i < toysize; i++) {
            std::cout << toys[i] << "\n";
        } 
        break;
    }
    case 3: {// for electronics
        //int electronicssize = sizeof(electronics) / sizeof(electronics[0]);
        for (int i = 0; i < electronicssize; i++) {
            std::cout << electronics[i] << "\n";
        }
        break;
    } 

    default: 
    std::cout << "invalid choice dumbass\n"; //remind me to change this 
}
    

    std::cout << "Whats the item youre looking for: "; //i added this to make the search thingy
    std::cin >> searchResult;

searchNumber = searchclothes(Clothes, clothesize, searchResult);  //the search thingy ONLY FOR CLOTHES dont have another one for toys and electronics yet coz im lazy
    if (searchNumber != -1) {
        std::cout << searchResult << "  is right at index: " << searchNumber;
    }
    else {
        std::cout << " it aint here man";
    }
    
    
    return 0;
}

//function define for clothes
int searchclothes(std::string Clothes[], int clothesize, std::string clotheconfirm) { //clotheConfirm is where the user inputs get storesd
    for(int i = 0; i < clothesize; i++) {
        if (Clothes[i] == clotheconfirm) {
            return i;
        }
    }
    return -1; //apparently its the default of saying "its not found in here man" in c++
}


