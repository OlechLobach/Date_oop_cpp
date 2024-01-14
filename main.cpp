#include "Date.h"

int main() {
    Date date1(10, 1, 2022);
    Date date2(15, 3, 2023);

    
    date1.display();
    date2.display();

    
    int difference = date2 - date1;
    cout << "Difference in days: " << difference << " days" << endl;

    
    int daysToAdd = 100;
    Date newDate = date1 + daysToAdd;
    cout << "Date after adding " << daysToAdd << " days:" << endl;
    newDate.display();

    return 0;
}