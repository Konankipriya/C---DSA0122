#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int pageCount;

public:
    Book(const std::string& t, const std::string& a, int pages) : title(t), author(a), pageCount(pages) {
        std::cout << "Creating book: " << title << " by " << author << ", " << pageCount << " pages." << std::endl;
    }
    ~Book() {
        std::cout << "Destroying book: " << title << std::endl;
    }
};

int main() {
    Book myBook("The Great Gatsby", "F. Scott Fitzgerald", 218);

    return 0;
}
