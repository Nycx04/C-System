#include <iostream> 
//notes:
//ned to be able to search trhough an array
//need to make these a dynamic array to add any new lost items
//adjust code later for linked list coz i dont fully understand what he means by that
//need to be able to tell how many lost item in a category (can be done with for sizeof)
// still arguing with myself to use switch for categories
// the output dont have spaces for some reason not sure how to fix
//categories choices doesnt have numbers in it 


int main() {
    
    int choices;
    
    std::string categories[] = {"Clothes", "Toys", "Electronic devices"};
    int size = sizeof(categories) / sizeof(categories[0]);
    
    for (int i = 0; i < size; i++ ) {
    std::cout << categories[i] << " \n";
    }
    
    std::string Clothes[] = {"Tshirt", "Shorts", "jackets", "bracelet"};
    
    std::string toys[] = {"teddy bear", "toy car", "AK-47"};
    
    std::string electronics[] = {"Cellphone", "laptop", "tablet"};
    
    std::cout << "Choose Category nuumber: ";
    std::cin >> choices;

    switch (choices)
    {
    case 1: {//for clothes 
        int clothesize = sizeof(Clothes) / sizeof(Clothes[0]);
        for(int i = 0; i < clothesize; i++) {
        std::cout << Clothes[i];
        }
        break;
    }
    case 2: { // for toys
        int toysize = sizeof(toys) / sizeof(toys[0]);
        for(int i = 0; i < toysize; i++) {
            std::cout << toys[i];
        } 
        break;
    }
    case 3: {// for electronics
        int electronicssize = sizeof(electronics) / sizeof(electronics[0]);
        for (int i = 0; i < electronicssize; i++) {
            std::cout << electronics[i];
        }
        break;
    } 

    default: 
    std::cout << "invalid choice dumbass\n";
}
    
    
    
    return 0;
}
