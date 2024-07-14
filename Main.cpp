#include <iostream>
#include <string>


class Overcoat {
private:
    std::string type;
    int price;
public:
    Overcoat(std::string t, int p) : type(t), price(p) {}

    bool operator==(Overcoat& other) const {
        return this->type == other.type;
    }

    Overcoat& operator=(const Overcoat& other) {
        this->type = other.type;
        this->price = other.price;
        return *this;
    }

    bool operator>(Overcoat& other) const {
        return this->price > other.price;
    }

    bool operator<(Overcoat& other) const {
        return this->price < other.price;
    }

    void display() {
        std::cout << "Type: " << type << ", Price: " << price << std::endl;
    }
};


class Flat {
private:
    std::string type;
    int area;
    int price;
public:
    Flat(std::string t, int a, int p) : type(t), area(a), price(p) {}
    bool operator==(const Flat& other) {
        return this->area == other.area;
    }
    Flat& operator=(const Flat& other) {
        this->type = other.type;
        this->area = other.area;
        this->price = other.price;
        return *this;
    }
    bool operator>(const Flat& other) {
        return this->price > other.price;
    }
    void display() {
        std::cout << "Type: " << type << ", Area: " << area << " sqm, Price: " << price << " RUB" << std::endl;
    }
};


int main() {

    std::cout << "Task 1" << std::endl;

    Overcoat coat1("Windbreaker", 8000);
    Overcoat coat2("Trench coat", 7500);

    coat1.display();
    coat2.display();

    if (coat1 == coat2) {
        std::cout << "Coats are of the same type." << std::endl;
    }
    else {
        std::cout << "Coats are of different types." << std::endl;
    }

    if (coat1 > coat2) {
        std::cout << "Coat 1 is more expensive than Coat 2." << std::endl;
    }
    else {
        std::cout << "Coat 1 is not more expensive than Coat 2." << std::endl;
    }

    if (coat1 < coat2) {
        std::cout << "Coat 1 is less expensive than Coat 2." << std::endl;
    }
    else {
        std::cout << "Coat 1 is not less expensive than Coat 2." << std::endl;
    }

    Overcoat coat3("Windbreaker", 8000);
    coat3.display();

    coat3 = coat2;
    coat3.display();


    std::cout << "Task 2" << std::endl;

    Flat flat1("Two bedroom apartment", 37, 1'560'000);
    Flat flat2("Three bedroom apartment", 74, 7'810'000);
    Flat flat3("Penthouse", 125, 16'910'000);

    flat1.display();
    flat2.display();

    if (flat1 == flat2) {
        std::cout << "Flats have the same area." << std::endl;
    }
    else {
        std::cout << "Flats have different areas." << std::endl;
    }

    if (flat1 > flat2) {
        std::cout << "Flat 1 is more expensive than Flat 2." << std::endl;
    }
    else {
        std::cout << "Flat 1 is not more expensive than Flat 2." << std::endl;
    }

    Flat flat4("One-bedroom apartment", 55, 14'750'000);
    flat4.display();

    flat4 = flat3;
    flat4.display();


    return 0;
}