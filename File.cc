#include "File.h"
#include <iostream>

File::File(const std::string& name,const std::string& content,const Date& date)
    :name(name),content(content),date2(date){}

bool File::lessThan(const File& date22) const{
    return date2.lessThan(date22.date2);
}

void File::print() const{
    std::cout<<"filename: "<<name<<"\nmodify date: ";
    date2.print();
    std::cout<<std::endl;
}

void File::printContents() const{
    print();
    std::cout<<"content: "<<content<<std::endl;
}
