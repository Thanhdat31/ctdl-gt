https://codelearn.io/learning/data-structure-and-algorithms/819552
int search(int a[], int n, int x) {
	int k = -1;
	for (int i = 0; i < n; i++) {
		if (a[i] == x) {
			k = i;
		}
	}
	return k;
}