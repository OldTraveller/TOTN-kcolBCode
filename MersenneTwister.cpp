#include <iostream>
#include <random> 
using namespace std; 

namespace MersenneTwister {
		int getRandMersenneNumber(const int& A, const int& B) {
			static std::random_device randDev;
			static std::mt19937 twister(randDev());
			static std::uniform_int_distribution<int> dist;

			dist.param(std::uniform_int_distribution<int>::param_type(A, B));
			return dist(twister);
		}
		
		void checkMersenneNumbers() {
			cout << "Enter the range of numbers : " << endl; 
			int a, b; 
			cin >> a >> b; 
			int rand_number = getRandMersenneNumber(a, b); 
			cout << "Random number generated is : " << endl; 
			cout << rand_number << endl; 			
		}
}

namespace Jarvis {
    int addThreeNumbers(int a, int b, int c) {
        return a + b + c; 
    }
}

int main() {
	MersenneTwister :: checkMersenneNumbers(); 
}
