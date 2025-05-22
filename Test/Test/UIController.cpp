#include "UIController.h"

void UIController::Print(string out) {
	cout << out << endl;
}
void UIController::PrintM(vector<string> out) {
	for (int i = 0; i < out.size(); i++ ) {
		cout << out[i] << " ";
	}
}