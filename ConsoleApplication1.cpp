#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;
    int age;
    std::string section;

public:
    Animal(std::string name, int age, std::string section) : name(name), age(age), section(section) {}

    virtual std::string getType() const = 0;

    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getSection() const {
        return section;
    }
};

class Bird : public Animal {
public:
    Bird(std::string name, int age, std::string section) : Animal(name, age, section) {}

    std::string getType() const override {
        return "Птица";
    }
};

class Fish : public Animal {
public:
    Fish(std::string name, int age, std::string section) : Animal(name, age, section) {}

    std::string getType() const override {
        return "Рыба";
    }
};

class Mammal : public Animal {
public:
    Mammal(std::string name, int age, std::string section) : Animal(name, age, section) {}

    std::string getType() const override {
        return "Млекопитающие";
    }
};

class Reptile : public Animal {
public:
    Reptile(std::string name, int age, std::string section) : Animal(name, age, section) {}

    std::string getType() const override {
        return "Рептилия";
    }
};

class Amphibian : public Animal {
public:
    Amphibian(std::string name, int age, std::string section) : Animal(name, age, section) {}

    std::string getType() const override {
        return "Амфибия";
    }
};

int main() {

    setlocale(LC_ALL, "Russian");

    Bird eagle("Джо", 10, "Открытая клетка");
    Fish goldfish("Бритни", 3, "Аквариум");
    Mammal wolf("Дружок", 7, "Вольер для хищников");
    Reptile snake("Анастасия", 5, "Терариум");
    Amphibian salamandra("Искорка", 2, "Терариум");


    std::cout << "Информация о животных:" << std::endl;
    std::cout << "Имя: " << eagle.getName() << ", Вид: " << eagle.getType() << ", Возраст: " << eagle.getAge() << ", Расположение: " << eagle.getSection() << std::endl;
    std::cout << "Имя: " << goldfish.getName() << ", Вид: " << goldfish.getType() << ", Возраст: " << goldfish.getAge() << ", Расположение: " << goldfish.getSection() << std::endl;
    std::cout << "Имя: " << wolf.getName() << ", Вид: " << wolf.getType() << ", Возраст: " << wolf.getAge() << ", Расположение: " << wolf.getSection() << std::endl;
    std::cout << "Имя: " << snake.getName() << ", Вид: " << snake.getType() << ", Возраст: " << snake.getAge() << ", Расположение: " << snake.getSection() << std::endl;
    std::cout << "Имя: " << salamandra.getName() << ", Вид: " << salamandra.getType() << ",Возраст: " << salamandra.getAge() << ", Расположение: " << salamandra.getSection() << std::endl;

    return 0;
}
