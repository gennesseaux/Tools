// MakeLower.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <algorithm>

int main( int argc, char *argv[], char *envp[] ) {
	if (argc == 2) {
		std::string input = argv[1];
		std::transform(input.begin(), input.end(), input.begin(), tolower);
		std::cout << input.c_str(); 
	}
	return 0;
}
