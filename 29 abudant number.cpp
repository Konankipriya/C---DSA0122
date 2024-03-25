#include <iostream>
bool isAbundant(int num) {
  int sum = 1; 
  for (int i = 2; i * i <= num; ++i) {
    if (num % i == 0) {
      sum += i;
      if (i != num / i) {
        sum += num / i;
      }
    }
  }

  return sum > num;
}

int main() {
  int number ;
  std:: cout<<"enter the number:";
  std:: cin>>number;

  if (isAbundant(number)) {
    std::cout << number << " is an abundant number." << std::endl;
  } else {
    std::cout << number << " is not an abundant number." << std::endl;
  }

  return 0;
}
