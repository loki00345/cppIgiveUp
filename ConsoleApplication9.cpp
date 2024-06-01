//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//struct Book {
//    string title;
//    string author;
//    string publisher;
//    string genre;
//};
//
//void printBook(const Book& book) {
//    cout << "Title: " << book.title << endl;
//    cout << "Author: " << book.author << endl;
//    cout << "Publisher: " << book.publisher << endl;
//    cout << "Genre: " << book.genre << endl;
//}
//
//void printAllBooks(Book books[], int size) {
//    cout << "All books in the library:" << endl;
//    for (int i = 0; i < size; ++i) {
//        cout << "Book " << i + 1 << ":" << endl;
//        printBook(books[i]);
//        cout << endl;
//    }
//}
//
//void searchByAuthor(Book books[], int size, const string& author) {
//    cout << "Books by author " << author << ":" << endl;
//    bool found = false;
//    for (int i = 0; i < size; ++i) {
//        if (books[i].author == author) {
//            printBook(books[i]);
//            found = true;
//        }
//    }
//    if (!found) {
//        cout << "No books found by author " << author << endl;
//    }
//}
//
//void searchByTitle(Book books[], int size, const string& title) {
//    cout << "Books with title " << title << ":" << endl;
//    bool found = false;
//    for (int i = 0; i < size; ++i) {
//        if (books[i].title == title) {
//            printBook(books[i]);
//            found = true;
//        }
//    }
//    if (!found) {
//        cout << "No books found with title " << title << endl;
//    }
//}
//
//void sortByTitle(Book books[], int size) {
//    sort(books, books + size, [](const Book& a, const Book& b) {
//        return a.title < b.title;
//        });
//}
//
//void sortByAuthor(Book books[], int size) {
//    sort(books, books + size, [](const Book& a, const Book& b) {
//        return a.author < b.author;
//        });
//}
//
//void sortByPublisher(Book books[], int size) {
//    sort(books, books + size, [](const Book& a, const Book& b) {
//        return a.publisher < b.publisher;
//        });
//}
//
//void editBook(Book& book) {
//    cout << "Enter new title: ";
//    getline(cin, book.title);
//    cout << "Enter new author: ";
//    getline(cin, book.author);
//    cout << "Enter new publisher: ";
//    getline(cin, book.publisher);
//    cout << "Enter new genre: ";
//    getline(cin, book.genre);
//}
//
//int main() {
//    const int size = 10;
//    Book books[size] = {
//        {"Book1", "Author1", "Publisher1", "Genre1"},
//        {"Book2", "Author2", "Publisher2", "Genre2"},
//        {"Book3", "Author3", "Publisher3", "Genre3"},
//        {"Book4", "Author1", "Publisher2", "Genre4"},
//        {"Book5", "Author2", "Publisher1", "Genre5"},
//        {"Book6", "Author3", "Publisher3", "Genre6"},
//        {"Book7", "Author1", "Publisher2", "Genre7"},
//        {"Book8", "Author2", "Publisher1", "Genre8"},
//        {"Book9", "Author3", "Publisher3", "Genre9"},
//        {"Book10", "Author1", "Publisher2", "Genre10"}
//    };
//
//    printAllBooks(books, size);
//    cout << endl;
//
//    searchByAuthor(books, size, "Author1");
//    cout << endl;
//
//    searchByTitle(books, size, "Book3");
//    cout << endl;
//
//    sortByTitle(books, size);
//    cout << "Books sorted by title:" << endl;
//    printAllBooks(books, size);
//    cout << endl;
//
//    sortByAuthor(books, size);
//    cout << "Books sorted by author:" << endl;
//    printAllBooks(books, size);
//    cout << endl;
//
//    sortByPublisher(books, size);
//    cout << "Books sorted by publisher:" << endl;
//    printAllBooks(books, size);
//    cout << endl;
//
//
//    cout << "Editing book 1:" << endl;
//    editBook(books[0]);
//    cout << "Book 1 after editing:" << endl;
//    printBook(books[0]);
//
//    return 0;
//}


//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// Структура для машини
//struct Car {
//    string color;
//    string model;
//    union {
//        string wordNumber;
//        int digitNumber;
//    } number;
//    bool isWord; // Поле для визначення, чи номер представлений як слово
//
//    // Конструктор за замовчуванням
//    Car() {}
//
//    // Функція для заповнення машини
//    void fill() {
//        cout << "Enter color: ";
//        getline(cin, color);
//        cout << "Enter model: ";
//        getline(cin, model);
//        cout << "Enter number (word or 5-digit number): ";
//        getline(cin, number.wordNumber);
//        if (number.wordNumber.size() <= 5) {
//            number.digitNumber = stoi(number.wordNumber);
//            isWord = false;
//        }
//        else {
//            isWord = true;
//        }
//    }
//
//    // Функція для друку машини
//    void print() {
//        cout << "Color: " << color << endl;
//        cout << "Model: " << model << endl;
//        cout << "Number: " << (isWord ? number.wordNumber : to_string(number.digitNumber)) << endl;
//    }
//};
//
//int main() {
//    const int size = 10;
//    Car cars[size];
//
//    // Заповнення масиву машин
//    for (int i = 0; i < size; ++i) {
//        cout << "Filling in information for car " << i + 1 << ":" << endl;
//        cars[i].fill();
//        cout << endl;
//    }
//
//    // Друк усіх машин
//    cout << "All cars in the list:" << endl;
//    for (int i = 0; i < size; ++i) {
//        cout << "Car " << i + 1 << ":" << endl;
//        cars[i].print();
//        cout << endl;
//    }
//
//    return 0;
//}

#include <iostream>
#include <string>

using namespace std;

// Перелічуваний тип для типів сутностей
enum EntityType {
    BIRD,
    ANIMAL,
    HUMAN
};

// Об'єднання для характеристик сутностей
union Characteristic {
    double flightSpeed;     // для птаха
    bool ruminant;          // для худоби
    int iqLevel;            // для людини
};

// Структура "Жива сутність"
struct LivingEntity {
    double speed;
    EntityType type;
    string color;
    Characteristic characteristics;
};

// Функція для введення інформації про живу сутність
void inputLivingEntity(LivingEntity& entity) {
    cout << "Enter speed: ";
    cin >> entity.speed;
    cout << "Enter type (0 for BIRD, 1 for ANIMAL, 2 for HUMAN): ";
    int type;
    cin >> type;
    entity.type = static_cast<EntityType>(type);
    cout << "Enter color: ";
    cin >> entity.color;
    if (entity.type == BIRD) {
        cout << "Enter flight speed: ";
        cin >> entity.characteristics.flightSpeed;
    }
    else if (entity.type == ANIMAL) {
        cout << "Is it a ruminant? (1 for true, 0 for false): ";
        cin >> entity.characteristics.ruminant;
    }
    else if (entity.type == HUMAN) {
        cout << "Enter IQ level: ";
        cin >> entity.characteristics.iqLevel;
    }
}

// Функція для друку інформації про живу сутність
void printLivingEntity(const LivingEntity& entity) {
    cout << "Speed: " << entity.speed << endl;
    cout << "Type: ";
    switch (entity.type) {
    case BIRD:
        cout << "BIRD";
        break;
    case ANIMAL:
        cout << "ANIMAL";
        break;
    case HUMAN:
        cout << "HUMAN";
        break;
    }
    cout << endl;
    cout << "Color: " << entity.color << endl;
    if (entity.type == BIRD) {
        cout << "Flight speed: " << entity.characteristics.flightSpeed << endl;
    }
    else if (entity.type == ANIMAL) {
        cout << "Ruminant: " << (entity.characteristics.ruminant ? "true" : "false") << endl;
    }
    else if (entity.type == HUMAN) {
        cout << "IQ level: " << entity.characteristics.iqLevel << endl;
    }
}

// Функція для редагування даних сутності
void editLivingEntity(LivingEntity& entity) {
    inputLivingEntity(entity);
}

// Функція для пошуку сутностей за характеристикою
void searchByCharacteristic(const LivingEntity entities[], int size, EntityType type) {
    for (int i = 0; i < size; ++i) {
        if (entities[i].type == type) {
            printLivingEntity(entities[i]);
            cout << endl;
        }
    }
}

int main() {
    // Створення масиву з 10 екземплярів структури "Жива сутність"
    LivingEntity entities[10];

    // Введення інформації про кожну сутність
    for (int i = 0; i < 10; ++i) {
        cout << "Enter information for entity " << i + 1 << endl;
        inputLivingEntity(entities[i]);
    }

    // Друк інформації про кожну сутність
    cout << "\nAll entities information:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Information for entity " << i + 1 << endl;
        printLivingEntity(entities[i]);
        cout << endl;
    }

    // Приклад редагування даних сутності
    int editIndex;
    cout << "Enter the index of the entity to edit (1-10): ";
    cin >> editIndex;
    if (editIndex >= 1 && editIndex <= 10) {
        editLivingEntity(entities[editIndex - 1]);
    }

    // Друк відредагованої сутності
    cout << "Updated information for entity " << editIndex << endl;
    printLivingEntity(entities[editIndex - 1]);

    // Приклад пошуку за характеристикою
    cout << "Enter the type of entity to search (0 for BIRD, 1 for ANIMAL, 2 for HUMAN): ";
    int searchType;
    cin >> searchType;
    cout << "Entities of type ";
    switch (searchType) {
    case BIRD:
        cout << "BIRD" << endl;
        break;
    case ANIMAL:
        cout << "ANIMAL" << endl;
        break;
    case HUMAN:
        cout << "HUMAN" << endl;
        break;
    }
    searchByCharacteristic(entities, 10, static_cast<EntityType>(searchType));

    return 0;
}
