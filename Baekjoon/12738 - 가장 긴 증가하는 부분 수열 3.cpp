#include <cstdio>
#include <climits>
#include <algorithm>
#include <vector>

using namespace std;

int n, x, result;

int main(int argc, char* argv[]) {
	vector<int> memo = { INT_MIN };
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &x);
		if (memo.back() < x) {
			memo.push_back(x);
			++result;
		} else {
			auto it = lower_bound(memo.begin(), memo.end(), x);
			*it = x;
		}
	}

	printf("%d", result);
	return 0;
}

/*
 * �� ������ ���� ���� �κ� ����(LIS)�� �ϳ� ã�� ������ ī��Ʈ�ϸ� Ǯ����.
 * ���� ������ ã�� ���� key ������ ū ���� ���� ������ ã�� stl lower_bound ���ΰ�
 * ����Ž�� ������� �����Ǿ� �־� �����ϰ� �� �� �ִ�.
 * std::lower_bound() - nlogn
 */