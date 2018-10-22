#include <iostream>

using namespace std;

class Car
{
    public:

    string brand;
    string model;
    int year;
    int mileage;
    int horsepower;

    void add()
    {
        cout<<"DODAWANIE NOWEGO SAMOCHODU DO BAZY: "<<endl;
        cout<<"Podaj marke: ";
        cin>>brand;
        cout<<"Podaj model: ";
        cin>>model;
        cout<<"Podaj rocznik: ";
        cin>>year;
        cout<<"Podaj przebieg(w km): ";
        cin>>mileage;
        cout<<"Podaj moc(w KM): ";
        cin>>horsepower;
    }

    void show()
    {
        cout<<"WCZYTYWANIE SAMOCHODU Z BAZY: "<<endl;
        cout<<brand<<endl;
        cout<<model<<endl;
        cout<<year<<endl;
        cout<<mileage<<"km"<<endl;
        cout<<horsepower<<"KM"<<endl;
    }
};

class Animal
{
    public:

    string species;
    string name;
    string age;

    void add()
    {
        cout<<"DODAWANIE NOWEGO ZWIERZECIA DO BAZY: "<<endl;
        cout<<"Podaj gatuek: ";
        cin>>species;
        cout<<"Podaj imie: ";
        cin>>name;
        cout<<"Podaj wiek: ";
        cin>>age;
    }

    void show(){
        cout<<"WCZYTYWANIE ZWIERZECIA Z BAZY: "<<endl;
        cout<<species<<endl;
        cout<<name<<endl;
        cout<<age<<"lat"<<endl;
    }
};

int main()
{
    Car car1;

    car1.add();
    car1.show();

    Animal animal1;

    animal1.add();
    animal1.show();

}
