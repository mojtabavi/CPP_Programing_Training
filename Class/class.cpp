#include <iostream>
using namespace std;


class GradeBook
{
    public:
        void displayMessage()
        {
            cout << "Welcome to the Grade Book" << endl; 
        }
};

int main()
{
    GradeBook myGradeBook;
    myGradeBook.displayMessage();
}