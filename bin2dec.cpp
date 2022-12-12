#include <iostream>
#include <cstring>

int main(int argc, char *argv[]) {
	for (int i=1; i < argc; i++) {
		int result = 0;
		int length = std::strlen(argv[i]);
		for (int j = length - 1; j >= 0; j--) {
			if (argv[i][j] == '1') {
				int addition = 1;
				for (int k = length - 1; k > j; k--) {
					addition = addition * 2;
				}
				result += addition;
			} 
		}
		std::cout << result << ' ';
	}
	std::cout << std::endl;
}
