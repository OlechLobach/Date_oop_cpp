#include "Date.h"

Date::Date(int d, int m, int y) : day(d), month(m), year(y) {}

int Date::operator-(const Date& other) const {
    int days1 = year * 365 + month * 30 + day;
    int days2 = other.year * 365 + other.month * 30 + other.day;
    return days1 - days2;
}

Date Date::operator+(int days) const {
    int totalDays = year * 365 + month * 30 + day + days;
    int newYear = totalDays / 365;
    int newMonth = (totalDays % 365) / 30;
    int newDay = (totalDays % 365) % 30;
    return Date(newDay, newMonth, newYear);
}

void Date::display() const {
    cout << "Date: " << day << "/" << month << "/" << year << endl;
}