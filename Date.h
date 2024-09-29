#ifndef DATE_H
#define DATE_H

class Date {
public:
    Date(int year,int month,int day);
    bool lessThan(const Date& d) const;
    void print() const;

private:
    int year,month,day;
};

#endif
