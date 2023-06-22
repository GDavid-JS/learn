#include<iostream>

// Прототип класса
// class FriendClass;

// class TestClass {
//     friend FriendClass;
// private:
//     int value1;
//     int value2;
// public:
//     TestClass(int a) {}
//     TestClass(const TestClass &other) { // Конструктор копирования - принимает в качестве аргумента экземпляр класса который скопирует элементы текущего экземпляра
//     // По умолчанию конструктор копиварония копирует элемент по битово - в следствие чего в ноывй элемент скопируются все указатели, то есть скопированный элемент будет иметь переменные указатели которого ссылаются на один и тот же объект

//     }

//     const TestClass& operator=(const TestClass &other) { // 
//         // По умолчанию оператор присвания работает также как оператор копирования
//         return other;
//     }

//     bool operator==(const TestClass& other) {}
//     bool operator!=(const TestClass& other) {}
//     TestClass operator+(const TestClass& other) {}

//     TestClass& operator++() {
//         this->value1++;
//         this->value2++;

//         return *this;
//     } // Перегрузка префиксного инкремента ++a
//     TestClass& operator++(int value) {
//         TestClass temp(*this);

//         this->value1++;
//         this->value2++;

//         return temp;
//     } // Перегрузка постфиксного инкремента a++
//     TestClass& operator--() {} // Перегрузка префиксного инкремента --a
//     TestClass& operator--(int value) {} // Перегрузка постфиксного инкремента a--

//     // Дружественная функция - функция которая объявлена все класса, но имеет доступ к полям private, protected
//     friend void foo(TestClass &testclass);
// };
// void foo(TestClass &testclass) {
//     testclass.value1;
// }
// // Дружественный класс
// class FriendClass {
// public:
//     FriendClass() {}
// };

// Вирутальные функции
// Полиморфизм - один и тот же метод может воплощаться по-разному
// virtual - означает что функцию можно переопределить в дочернем классе
// override - контролирует прототип дочернего класса
// виртуальный деструктор

class Gun {
public:
    virtual void Shoot() {}

    virtual ~Gun() {
        std::cout << "Деструктор Gun\n";
    }
};

class SubmachineGun : Gun {
public:
    void Shoot() override {}

    ~SubmachineGun () override {
        std::cout << "Деструктор SubmachineGun\n";
    }
};


// абстрактный класс - класс который не должен иметь экземпляров класса
class Weapon {
public:
    virtual void Shoot() = 0;
    virtual ~Weapon() = 0;
};

Weapon::~Weapon() {}

class AnotherGun : public Weapon {
public:
    void Shoot() {}

    ~AnotherGun() override {
        std::cout << "Деструктор AnotherGun\n";
    }
};

class Player {
public:
    void Shoot(Weapon* weapon) {
        weapon->Shoot();
    }
};


// Делегирующий конструктор
class Human {
private:
    std::string name;
    int age = 0;
    int weight = 0;
public:
    Human(std::string name) {
        this->name = name;
    }

    Human(std::string name, int age) : Human(name) {
        this->age = age;
    }

    Human(std::string name, int age, int weight) : Human(name, age) {
        this->weight = weight;
    }
};

class A {
public:
    A() {}
    virtual void someMethod() {}
};

class B : public A {
public:
    void someMethod() override {
        ::A::someMethod();
        std::cout << "text\n";
    }
};

// Порядок вызова конструктор при множественном наследовании - B, A
// Вызов дестркуторов идет в обратном порядке
class C : B, A {
public:
    C() {

    }
};

int main() {
    // TestClass a(10);
    // TestClass b = a; // Вызывается конструктор копирования - записб эквивалента TestClass b(a);

    // a = b; // тоже что a.operator=(b);


    // Gun gun;
    // SubmachineGun machinegun;

    // Gun *weapon = &gun;

    // AnotherGun anotherGun;

    // Player player;
    // player.Shoot(&anotherGun);
    B b;
    b.someMethod();



    return 0;
}