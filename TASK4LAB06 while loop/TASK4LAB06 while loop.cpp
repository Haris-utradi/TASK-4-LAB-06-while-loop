#include<iostream>
using namespace std;
int main() {
	int i = 1;
	while (i <= 3) {
		cout << " WEEK " << i << endl << endl;
		int j = 1;
		while (j <= 7) {
			cout << " DAYS " << j << endl;
			j++;
		}
		i++;
	}


	return 0;

}