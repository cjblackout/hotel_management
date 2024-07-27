#ifndef GUEST_H
#define GUEST_H

#include <string>
#include <vector>

class Guest {
public:
    Guest(std::string name, int id, int roomNumber);

    void checkIn();
    void checkOut();

    std::string getName() const;
    int getId() const;
    int getRoomNumber() const;

private:
    std::string name;
    int id;
    int roomNumber;
    bool isCheckedIn;
};

#endif
