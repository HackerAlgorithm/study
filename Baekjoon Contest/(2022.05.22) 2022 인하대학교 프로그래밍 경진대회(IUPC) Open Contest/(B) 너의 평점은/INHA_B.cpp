#include <bits/stdc++.h>
using namespace std;

double sumScore = 0;
double answer = 0;

double scoreToDouble(string score) {

	if (score == "A+") {
		return 4.5;
	}
	else if (score == "A0") {
		return 4.0;
	}

	else if (score == "B+") {
		return 3.5;
	}
	else if (score == "B0") {
		return 3.0;
	}

	else if (score == "C+") {
		return 2.5;
	}
	else if (score == "C0") {
		return 2.0;
	}
	else if (score == "D+") {
		return 1.5;
	}
	else if (score == "D0") {
		return 1.0;
	}
	else if (score == "F") {
		return 0.0;
	}

}

int main() {
	for (int i = 0; i < 20; i++) {
		string name;
		double scoreNum;
		string score;
		cin >> name >> scoreNum >> score;
		if (score == "P") continue;
		else {
			answer += scoreToDouble(score) * scoreNum;
			sumScore += scoreNum;
		}
	}

	answer /= sumScore;

	cout << answer;
}