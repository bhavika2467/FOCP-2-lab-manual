#include<iostream.
using namespace std;
MovieTicket {
    int member ;
    string movieName;
    int seatNumber;
    int ticketPrice;
    bool isBooked;
    public :
    MovieTicket();
    MovieTicket(string name , int seat ,int price );
    void bookTickets();
    void cancelTicket();
    void  displayDetails();
};
   MovieTicket::MovieTicket() {
        movieNmae="unkonown";
        seatNumber= 0;
        tickerprice=200;
        isBooked= false ;
    }
    MovieTicket::MovieTicket(string name , int seat ,int price ) {
          movieNmae="pk";
        seatNumber= 30;
        tickerprice=2000;
    }
    void MovieTicket::bookTickets()
    bookTickets(){
       if( isBooked = true) {
        cout<<"ticket is booked";}
        else {
            cout<<"ticket is not booked";
        }
    }
    void MovieTicket::cancelTicket(){
        if(isBooked = false ) {
            cout<<"ticket is cancelled ";
            else {
                cout<<"not cancelled "
            }
        }
    }
    void MovieTicket::displayDetails(){
        
    }