https://codelearn.io/learning/data-structure-and-algorithms/825257

int BinSearch(int a[], int n, int x) {
	int l = 0, r = n - 1;
	while (l < r) {
		int mid = (l + r) / 2;
		if (a[mid] < x) {
			l = mid + 1;
		}
		else {
			r = mid;
		}
	}
	if (a[l] == x) {
		return l;
	}
	return -1;
}