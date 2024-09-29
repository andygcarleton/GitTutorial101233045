#include "Date.h"
#include <iostream>

Date::Date(int year,int month,int day):year(year),month(month),day(day){}

bool Date::lessThan(const Date& d) const{
    if(year!=d.year)return year<d.year;
    if(month!=d.month)return month<d.month;
    return day<d.day;
}

void Date::print() const{
    std::cout<<month<<"/"<<day<<"/"<<year;
}
