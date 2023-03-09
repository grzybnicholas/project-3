#ifndef LIBRARY_RECORD_HPP
#define LIBRARY_RECORD_HPP
#include <iostream>
#include <vector>
#include "ArrayBag.hpp"
#include "Book.hpp"
using namespace std;

class LibraryRecord : public ArrayBag<Book>{
 private:
 vector<Book> checked_;
 public:
 bool checkIn(const Book& book);
 bool checkOut(const Book& books);
 int getCheckOutHistory(const Book& booked) const;
 void display();
 void displayTitles();
 bool duplicateStock();
 bool removeStock(const Book& booke);
 bool equivalentRecords(const LibraryRecord& rec);
 void operator+=(const LibraryRecord& recs);
 void operator/=(const LibraryRecord& record);
};
#include "LibraryRecord.cpp"
#endif