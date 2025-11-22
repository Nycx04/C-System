#include <iostream> 
using namespace std;
//somethingsomething
//Load all courses into array
//Build linked list for dynamic operations
//Build tree for alphabetical subjects
//Build graph for prerequisites
//Initialize queue (requests)
//Initialize stack (undo) 

//menu 
//1. Display all courses
//2. Add course (linked list)
//3. Remove course (linked list)
//4. Sort courses by day/time
//5. Search courses by code or instructor
//6. Add scheduling request (queue)
//7. Process next request (queue)
//8. Undo last action (stack)
//9. Show subjects alphabetically (tree)
//10. Show prerequisites (graph)
//11. Exit

struct Ncourses { //where i made the linkedlist
    string course; 
    Ncourses* next;
};

Ncourses* createNode(string courseName) {
    Ncourses* newNode = new Ncourses;
    newNode->course = courseName;
    newNode->next = NULL;
    return newNode;
}


void insertEnd(Ncourses*& head, string courseName) {
    Ncourses* newNode = createNode(courseName);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Ncourses* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void displayCourses(Ncourses* head) {
    cout << "\n--- Course List ---\n";
    Ncourses* temp = head;
    while (temp != NULL) {
        cout << temp->course << endl;
        temp = temp->next;
    }
    cout << "---------------------------------\n"; 
}

void addCourses(Ncourses*& head) { //add new courses on ruun time
    string course;
    char choices;
    cout << "Add new course? (Y/N)";
    cin >> choices;
    if (choices == 'N' || choices == 'n'){
        cout << "Okay... Moving on!";
        return;
    }

    cin.ignore(); 

    cout << "\nEnter New course: ";
    getline(cin, course);

    insertEnd(head, course);
    cout << "course added!";
}

void deletecourses(Ncourses*& head) { //delete courss 
    if (head = NULL) {
        cout << "Nothing to delete fam";
        return;
    } 

    string redundant;
    char deleted;
    cout << "are youu gonna delete a course? (Y/N)";
    if (deleted == 'Y' || deleted == 'y') {
        cout << "goodbye then hope to never see you again";
        return;
    }

    cin.ignore();

    cout << "Enter course to delete: ";
    cin >> redundant;
    
    Ncourses* temp = head;
    Ncourses* prev = NULL;

    while

}

int main () {
    std::cout << "-------------------------------------------------------------------------------------------";
    cout << "\n\n";
    cout << " **       **  ********  **        ******    ******   ****     ****  ******** \n";
    cout << "/**      /** /**/////  /**       **////**  **////** /**/**   **/** /**///// \n";
    cout << "/**   *  /** /**       /**      **    //  **    // /**//** ** /** /**      \n";
    cout << "/**  *** /** /******* /**      /**       /**       /** //***  /** /******* \n";
    cout << "/** **/**/** /**////  /**      /**       /**       /**  //*   /** /**////  \n";
    cout << "/**** ///**** /**      /**      //**    **//**    **/**   /    /** /**      \n";
    cout << "/**/   ///** /********/******** //******  //****** /**        /** /********\n";
    cout << "//       //  //////// ////////   //////    //////  //         //  //////// \n";
    cout << "\n";
    cout << "-------------------------------------------------------------------------------------------";
    
    string courses[] = {
        "\n1. Programming", 
        "\n2. Ptech",
        "\n3. Mmw", 
        "\n4. Data Strctures\n"
    };

    int courseCount = sizeof(courses) / sizeof(courses[0]);

    Ncourses* head = NULL;

    for (int i = 0; i < courseCount; i++) {
        insertEnd(head, courses[i]);
    }

    displayCourses(head);
    addCourses(head);
    displayCourses(head);

    return 0;

}
