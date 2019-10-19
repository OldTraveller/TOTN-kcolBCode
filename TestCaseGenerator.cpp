#include <bits/stdc++.h>
using namespace std; 

int getRandomNumberNow(int lower, int upper) { 
	    srand(time(0)); 
        int num = (rand() % (upper - lower + 1)) + lower; 
        return num; 
} 
 
signed main() {
	cout << "How many test cases files you want to create? " << endl; 
	int no_of_tc;
	cin >> no_of_tc;
	
	if (no_of_tc > 10 or no_of_tc < 0) {
		cout << "Please enter a valid value between 1 and 10 inclusive." << endl; 
		return 0; 
	}
	/* Maximum number of test cases can be 10 */  
	for (int i = 0; i < no_of_tc; i++) {
		char filename_prefix = char('0' - i); 
		char temp_file_name[5];
		temp_file_name[0] = filename_prefix;
		temp_file_name[1] = '.'; 
		temp_file_name[2] = 't';
		temp_file_name[3] = 'x'; 
		temp_file_name[4] = 't'; 
		freopen(temp_file_name, "w", stdout); 
		/*
			First Line should contain the number of lines of random numbers required.
			2nd - nth line should proceed in the following format. 
			[NUMBER OF RANDOM NUMBERS] [LOWER RANGE VALUE] [UPPER RANGE VALUE] 
		*/
		int number_of_lines; 
		cin >> number_of_lines; 
		for (int j = 0; j < number_of_lines; j++) {
			int number, lower, upper; 
			cin >> number >> lower >> upper; 
			for (int k = 0; k < number; k++) {
				cout << getRandomNumberNow(lower, upper) << " "; 
			}				
			cout << endl; 
		}
	}
}
