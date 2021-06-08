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
 * 이 문제는 최장 증가 부분 수열(LIS)를 하나 찾는 과정을 카운트하면 풀린다.
 * 다음 수열을 찾기 위해 key 값보다 큰 가장 작은 정수를 찾는 stl lower_bound 내부가
 * 이진탐색 기반으로 구현되어 있어 적절하게 쓸 수 있다.
 * std::lower_bound() - nlogn
 */