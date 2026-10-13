#include <iostream>
#include <cstdlib>
#include <ctime>


// Homework 7 — Joshua Van Brunt
// CIS 5 Week 07 · Odd and Even

int main() {
    const int N = 20;
    int values[N];

    srand(static_cast<unsigned>(time(nullptr)));
    for (int i = 0; i < N; ++i) {
        values[i] = rand() % 100;
    }
   
	std::cout << "Random Values : ";
	for (int i = 0; i < N; ++i) {
		std::cout << values[i] << " ";
	}
	std::cout << std::endl;

    int evens[N];
    int odds[N];
    int evenCount = 0;
    int oddCount = 0;

	for (int i = 0; i < N; ++i) {
		if (values[i] % 2 == 0) {
			evens[evenCount++] = values[i];
		}
		else {
			odds[oddCount++] = values[i];
		}
	}

	for (int i = 0; i < evenCount; ++i) {
		std::cout << "Even: " << evens[i] << std::endl;
	}
	for (int i = 0; i < oddCount; ++i) {
		std::cout << "Odd: " << odds[i] << std::endl;
	}
	
	std::cout << "Sorted Evens: ";
	std::copy(evens, evens + evenCount, std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	std::cout << "Sorted Odds: ";
	std::copy(odds, odds + oddCount, std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

    return 0;
}