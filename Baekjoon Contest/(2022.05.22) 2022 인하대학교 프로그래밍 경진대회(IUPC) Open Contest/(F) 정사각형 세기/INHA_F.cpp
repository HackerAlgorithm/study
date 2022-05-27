#include <bits/stdc++.h>
using namespace std;

#define MAX 100001
#define INF 987654321

typedef struct {
	int x, y;
}vertex;

vertex arr[4][4];
int answer = 0;

void fill2Vertex(int x1, int y1, int x2, int y2, int dimension) {
	arr[dimension][0] = { x1, y1 };
	arr[dimension][2] = { x2, y2 };

}

bool canMakeLine(int x, int y) {
	if (arr[1][0].y <= y && y <= arr[1][2].y) {
		if (arr[3][0].x <= x && x <= arr[3][2].x) {
			return true;
		}
	}
	return false;
}

bool isExistArea3(int x, int y) {
	if (arr[2][0].x >= x && x >= arr[2][2].x) {
		if (arr[2][0].y >= y && y >= arr[2][2].y) {
			return true;
		}
	}

	return false;
}

int calcSquareNum(int x, int y) {
	int result = 0;
	int minLength = max(x - arr[1][0].x, y - arr[3][0].y);
	int maxLength = min(x - arr[1][2].x, y - arr[3][2].y);

	if (arr[2][2].x > x - minLength) return 0;
	if (arr[2][2].y > y - minLength) return 0;
	if (arr[2][0].x < x - maxLength) return 0;
	if (arr[2][0].y < y - maxLength) return 0;

	while (true) {
		if (isExistArea3(x - minLength, y - minLength)) {
			break;
		}
		else {
			minLength++; 
		}
	}
	while (true) {
		if (isExistArea3(x - maxLength, y - maxLength)) {
			break;
		}
		else maxLength--;
	}


	return maxLength - minLength + 1;
	/*
	for (int i = minLength; i <= maxLength; i++) {
		int nx = x - i;
		int ny = y - i;

		if (isExistArea3(nx, ny)) result++;

	}

	return result;
	*/

}

void solution() {

	int minX = max(arr[0][0].x, arr[3][0].x);
	int maxX = min(arr[0][2].x, arr[3][2].x);

	int minY = max(arr[0][0].y, arr[1][0].y);
	int maxY = min(arr[0][2].y, arr[1][2].y);

	

	for (int i = minY; i <= maxY; i++) {
		answer += calcSquareNum(minX, i) * (maxY - i+1);
	}

	for (int i = minX+1; i <= maxX; i++) {
		answer += calcSquareNum(i, minY) * (maxX - i + 1);

	}

}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < 4; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		fill2Vertex(x1, y1, x2, y2, i);
	}

	solution();

	cout << answer;


}