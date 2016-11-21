#include "iostream"

using namespace std;

int main(){
    unsigned long long int p;

	while(std::cin >> p && p != - 1){
        if(p > 0)
			std::cout << p-1 << endl;
		else 
			std::cout << 0 << endl;
    }

	return 0;
}
