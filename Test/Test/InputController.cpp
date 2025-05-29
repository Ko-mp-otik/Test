#include "InputController.h"
using namespace std;

int InputController::ChoiceInput(vector<string> variants) {
	for (int i = 0; i < variants.size(); i++) {
		cout << i + 1 << ") " << variants[i] << endl;
	}
	cout << "Choice ";
	int ch;
	cin >> ch;
	return ch;
}