#include "LibraryRecord.hpp"
#include <iostream>
#include <vector>
using namespace std;
/** @param:   A reference to a Book object to be checked in

    @return:  returns true if a book was successfully added to items_, false otherwise

    @post:    adds book to items_.

 */
bool LibraryRecord::checkIn(const Book& book){
  if(add(book)){
    return true;
  }else{
    return false;
  }
}

/** @param:   A reference to a Book object to be checked out   

    @return:  returns true if a book was successfully removed from items_, false otherwise

    @post:    removes the book from the LibraryRecord and if remove was successful, it adds the book to the vector of checked-out books.

 */
bool LibraryRecord::checkOut(const Book& books){
    if(remove(books)){
        checked_.push_back(books);
        return true;
    }else{
        return false;
    }
}


/**

  @param:   A reference to a Book object

  @return:  The number of times (int) the referenced Book has been checked out

*/
int LibraryRecord::getCheckOutHistory(const Book& booked) const{
int count;
for(int i = 0;i < checked_.size(); i++){
    if(booked.getTitle() == checked_[i].getTitle()){
        count++;
    }
    return count;
}
}

/**

    @post:    Outputs the names of the Books in the LibraryRecord and the number of times each Book has been cheked out


      For each Book in the LibraryRecord you will output:

             "[title_] is written by [author_]. Page Count: [page_count_]. [It is / It is not] available digitally.\n

             It has been checked out [_] times.\n"

  */
void LibraryRecord::display(){
    for(int i = 0; i< item_count_; i++){
     items_[i].display();
     cout << "It has been checked out " << getCheckOutHistory(items_[i]) << " times.\n";
}
}

/**

  @post:    Prints the title of each Book in the LibraryRecord

  Example:

  "title1, title2, title3, title4!\n" Note the commas and exclamation mark.

*/
void LibraryRecord::displayTitles(){
for(int i = 0; i< item_count_; i++){
  cout << items_[i].getTitle() <<" ,"<<"!/n";
}
}

/**
  @param:   A reference to a book

  @return: True if at least one copy of the referenced book was removed from items_, false otherwise 

  @post: remove all occurrences of the referenced book

*/
bool LibraryRecord::removeStock(const Book& booke){
    
}