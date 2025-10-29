#include <iostream> 
//notes:
//ned to be able to search trhough an array
//need to make these a dynamic array to add any new lost items
//adjust code later for linked list coz i dont fully understand what he means by that
//need to be able to tell how many lost item in a category (can be done with for sizeof)
// still arguing with myself to use switch for categories

int main() {
    
    std::string categories[] = {"Clothes", "Toys", "Electronic devices"};
    int size = sizeof(categories) / sizeof(categories[0]);
    
    std::string Clothes[] = {"Tshirt", "Shorts", "jackets", "bracelet"};
    
    std::string toys[] = {"teddy bear", "toy car", "AK-47"};
    
    std::string electronics[] = {"Cellphone", "laptop", "tablet"};
    
    //shpws categories
    std::cout << "Categories: \n";
    for(int i = 0; i < size; i++) {
    std::cout << categories[i] << "  \n";
    }

    
    
    
    
    
    return 0;
}
