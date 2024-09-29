#include "File.h"
#include <iostream>

File::File(const std::string& name,const std::string& content,const Date& date)
    :name(name),content(content),date2(date){}

bool File::lessThan(const File& file2) const{
    return date2.lessThan(file2.date2);
}

void File::print() const{
    std::cout<<"File: "<<name<<"\nLast modified: ";
    date2.print();
    std::cout<<std::endl;
}
void File::printContents() const{
    print();
    std::cout<<"Content: "<<content<<std::endl;
}
