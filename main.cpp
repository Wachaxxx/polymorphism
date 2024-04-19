#include <iostream>
#include <string>
using namespace std;

class Product {
protected:
    string name;
    float price;
public:
    Product(string _name, float _price) : name(_name), price(_price) {}
    virtual void set_name(string _name) = 0;
    virtual void set_price(float _price) {
        price = _price;
    }
    virtual void print_info() {
        cout << "Product: " << name << ", Price: " << price << endl;
    }
    ~Product() {

    }
};


class Food : public Product {
private:
    string expiry_date;
public:
    Food(string _name, float _price, string _expiry_date) : Product(_name, _price), expiry_date(_expiry_date) {}
    void set_name(string _name) override {
        name = _name;
    }
    void print_info() override {
        cout << "Food: " << name << ", Price: " << price << ", Expiry Date: " << expiry_date << endl;
    }
    ~Food() {

    }
};

class Toy : public Product {

public:
    Toy(string _name, float _price) : Product(_name, _price) {}
    void set_name(string _name) override {
        name = _name;
    }
    void print_info() override {
        cout << "Toy: " << name << ", Price: " << price << endl;
    }
    ~Toy() {

    }
};

int main() {
    Food apple("Apple", 2.5, "2024-04-26");
    Toy teddy_bear("Teddy Bear", 15.99);

    apple.print_info();
    teddy_bear.print_info();
}
Лабараторка 15
Остапенко Денис Олександрович
​
Головань Володимир Володимирович
​

