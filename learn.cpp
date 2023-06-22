// типы переменных

// bool - логический тип

// char - символ
// char word[] = "Hello, World!"; // Массив символов
// char a[] = "a" - содержит a и ноль
// char a = 'a' - содержит просто a

// string - строка

// short - число 2 байта -32k 32k
// int - число 2 или 4 байта -2B 2B
// long - число 4 или 8 байт
// long long - число 8 байт

// float - число с плавающей запятой 4 байт
// duble - число с плавающей запятой 8 байт
// long duble - число с плавающей запятой 8 байт
// float - число с плавающей запятой 4 байт
// float - число с плавающей запятой 4 байт

// unsigned (int, short, long, long long) увеличивает диапазон за счет уменьшения отрицательных чисел

// Привидение типов в C

// double a = 10;
// (int)a;

// 0x, 0X - шестнадцатиричная система счисления
// 0 - восмиричная система счисления
// 0b, 0B - двоичная система счисления

// Условия
// && ||
// == >= <= != !var
// switch(var) {
    // case 1: {
        // break;
    // }
    // default: //сработает если case не сработал
// }

// srand(time(NULL)); // Убирает зависимости от времени
// rand() случайное число

// массивы 
// int array[10]
// float array2[2] = {1,2}

// new - выделяет память
// *array - указатель
// delete - удаляет из памяти данные

// Прототип функции - нужен для того чтобы можно было объявить функцию после использования
// int sum(int a, int b);
// template <typename T1, typename T2> T1 sum(T1 a, T2 b);

// Перегрузка функции
// такое же название функции только с разными типами аргументов

// Ссылка на переменную
// int num = 10;
// int &a = num; создание ссылки на переменную num (фактически является копией ссылки)
// & - оператор выводит адрес переменной
// Указатели - Хранит адрес
// int a = 10;
// int* ptra = &a;
// int** a - указательн на указатель
// int *&arr - ссылка на указатель
// int foo(int* a) {} - получение адреса в качестве аргумента
// foo(&a) - передача адреса
// int foo(int &a) {} - аргумент - ссылка
// foo(a) - передаем ссылку
// 1 - создаем вторую переменную на один и тот же массив
// 2 - берем адрес второй переменной
// Применяются только к указатлеям
// ptra = nullptr // удаляем то на что указывает
// ptra = NULL // тоже что ptra = 0
// * - оператор выводит значение переменной

// Файлы
// Запись
// ofstream file("file.txt", ios_base::out);
// if (file.is_open()) {
//     file << "vfdf";
//     file.close();
// }

// Чтение
// ifstream file("file.txt");
// if (file.is_open()) {
//     // char text[100];
//     // file.getline(text, 100);
//     string text;
//     file >> text;
//     cout << text;
//     file.close();
// }

// Структуры данных
// struct Tree {
//     string name;
//     int ages;
//     bool is_alive;
//     float height;

//     void get_info() {
//         cout << name;
//     }
// };

// Перечисления
// enum Options {
//     open,
//     close,
//     wait,
//     del
// };
// Options options = Options::open;

// Ошибки
// throw 100; //Вызов исключения
// try {} catch(int err) {}

// Встроенные функции
// string str1 = "str1", str2 = "str2";
// str1 + str2
// str1.append(str2) // Добавление строки к строке
// str1.pop_back() // Удаление последнего символа
// str1.push_back() // Добавление нового символа
// str1.length()
// str1.resize(5) // Обрезание строки до 5 символов

// pow() // Степень
// abs() // Модуль
// sin(), cos()
// sqrt() // Корень
// ceil() // округление числа к большему
// floor() // округление числа к меньшему
// round() // округление по правилам

// Члены класса, определенного с помощью ключевого слова class, по умолчанию являются private. Члены класса, определенного с помощью ключевого слова struct, по умолчанию являются public.
// При отсутствии спецификатора доступа у базового класса, базовый класс будет public если класс определен с помощью struct и private если класс определен с помощью class
// Есть популярное мнение, что для "расово правильных ООП классов" надо использовать только class, а для структур данных - только struct, и еще у struct не должно быть методов.

// классы
// public - модификатор доступа, обозначающий, что программист будет использовать элементы класса либо в других частях программы, либо в других классах
// private - модификатор доступа, обозначающий, что программист будет использовать элементы в пределах самого объявленного класса.
// protected — Модификатор доступа, обозначающий, что программист будет использовать элементы класса либо внутри непосредственно своего основного класса, либо непосредственно в своём потомке-классе

// private - доступен внутри класса
// protected - доступен внутри класса и дочерних классов
// public - доступен везду

// негласное правило - все поля(переменные) должны быть private
// class Building {
// private:
//     int year;
//     string type;
// public:
//     Building() {} // - перегрузка коснтруктура

//     Building(int year, string type) { // - конструктур
//         this->year = year;
//         this->type = type;
//     }

//     ~Building() { // Деструктор - выполняет код перед удалением класса

//     }

//     void get_info() {
//         cout << this->year;
//     }
// };
// Building school(10, "vfdvfd");

// Дружественные функции

// class Car;
// class Person;

// class Person {
// private:
//     int age;
// public:
//     friend void info_car(Car &car, Person &person);
// };

// class Car {
// private:
//     string name;
// public:
//     friend void info_car(Car &car, Person &person);
// };

// void info_car(Car &car, Person &person) {
//     cout << car.name << " " << person.age;
// }

// Дружественные классы
// class Person;

// class Dog {
//     private:
//         int health = 100;
//     public:
//         friend class Person;
// };

// class Person {
//     public:
//         void Damage(Dog &dog) {
//             dog.health -= 10;
//             cout << dog.health << "\n";
//         }
// };

// Наследование
// class A {
//     protected:
//         int a;
//     public:
//         void function() {}    
// };
// class B: public A {
//     B(): A() {}
//     void function() {
//         A::function();
//     }
// };

// шаблоны
// template <class T> // для классов тоже что и для функций

// template <typename T>
// void print_arr(T* arr, const int length) {
//     for (int i = 0; i < length; i ++) {
//         cout << arr[i] << "\n";а
//     }
// }
// const int length = 3;
// int arr[length] = {1,2,3};
// print_arr<int>(arr, length);

// ассемблерный код, при компиляции надо указывать флаг -masm=intel
// __asm (
//         "mov al, 1\n"
//         "mov bl, 2\n"
//         "mul bl\n"
//     );

// Приведение типов
// double a = 10;
// (int)a

// Умные указатели

// автоматически определяет тип данных
// auto a = 10;

// union - выделяется память равная максимальному элементу union. Каждая переменная union хранит определенную часть байт
union MyUnion {
    short int a;
    int b;
    float c;    
};

int main(int argc, char* argv[])  {
    // argc - колво аргументов
    // argv - массив аргументов
    return 0;
}

// Указатель на функции
// int (*funcName)(int a, int b);

#include<iostream>
#include<string>
#include<cstring> // Работа с строками
#include<cmath> // Работа с матем функциями
#include<fstream> // Работа с файлами
using namespace std; // пространство имен

void FillArray(int* const arr, const int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10;
    }
}

void showArray(const int* const arr, const int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    }
    cout << "\n";
}

void push_back(int *&arr, int &size, int value) {
    int *newarr = new int[size+1];

    for (int i = 0; i < size; i++) {
        newarr[i] = arr[i];
    }
    newarr[size++] = value;

    delete[] arr;
    arr = newarr;
}

void pop_back(int *&arr, int &size) {
    int* newarr = new int[--size];

    for (int i = 0; i < size; i++) {
        newarr[i] = arr[i];
    }

    delete [] arr;
    arr = newarr;
}

int strLen(const char *string) {
    int counter = 0;
    while (string[counter] != '\0') {
        counter+=1;
    }
    return counter;
}

int main() {
    setlocale(LC_ALL, "RU");


    return 0;
}