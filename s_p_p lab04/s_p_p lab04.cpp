#include <iostream>
#include <string>

using namespace std;

// Базовий клас "Велосипед"
class Bicycle {
protected:
    string model;
    int wheelSize;

public:
    Bicycle(const string& _model, int _wheelSize) : model(_model), wheelSize(_wheelSize) {}

    void displayInfo() const {
        cout << "Model: " << model << endl;
        cout << "Wheel Size: " << wheelSize << " inches" << endl;
    }
};

// Похідний клас "Заїзд"
class Ride : public Bicycle {
private:
    int number;
    string route;
    float time;

public:
    Ride(const string& _model, int _wheelSize, int _number, const string& _route, float _time)
        : Bicycle(_model, _wheelSize), number(_number), route(_route), time(_time) {}

    void displayInfo() const {
        Bicycle::displayInfo();
        cout << "Number: " << number << endl;
        cout << "Route: " << route << endl;
        cout << "Time: " << time << " hours" << endl;
    }
};

int main() {
    // Створення об'єкту класу "Заїзд"
    Ride ride("Mountain Bike", 26, 12345, "Mountain Trail", 2.5);

    // Вивід інформації про заїзд
    cout << "Ride Details:" << endl;
    ride.displayInfo();

    return 0;
}
