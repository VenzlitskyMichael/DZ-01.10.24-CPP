#include <iostream>
using namespace std;




// 1 zadanie 
/*

	int findMax(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    }
    int maxInRestArray = findMax(arr, size - 1);
    return (arr[size - 1] > maxInRestArray) ? arr[size - 1] : maxInRestArray;
}
int main() {
    const int size = 5;
    int arr[size] = { 64, 25, 12, 22, 11 };
    int maxElement = findMax(arr, size);
    cout << "Mux element: " << maxElement << endl;
}


*/
// 2 zadanie
/*
   int findMin(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    }
    int minInRestArray = findMin(arr, size - 1);
    return (arr[size - 1] < minInRestArray) ? arr[size - 1] : minInRestArray;
}
int main() {
    const int size = 5;
    int arr[size] = { 64, 25, 12, 22, 11 };
    int minElement = findMin(arr, size);
    cout << "Min element: " << minElement << endl;
}
*/
// 3 zadanie
/*
    int partition(int arr[], int low, int high) {
	int pivot = arr[high]; 
	int i = low - 1;  
	for (int j = low; j < high; j++) {
		if (arr[j] <= pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]); 
	return i + 1;
}
void quickSortLumoto(int arr[], int low, int high) {
	if (low < high) {
		int pivotIndex = partition(arr, low, high);
		cout << "Next pivot = " << arr[pivotIndex] << ": ";
		for (int i = 0; i < 5; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
		quickSortLumoto(arr, low, pivotIndex - 1);
		quickSortLumoto(arr, pivotIndex + 1, high);
	}
}

int main() {
	const int size = 5;
	int arr[size] = { 64, 25, 12, 22, 11 };
	cout << "Startov massive: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	quickSortLumoto(arr, 0, size - 1);
	cout << "finished massive : ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
*/

// next massive 

// 1 zadanie 
/*

	int findMax(int arr[], int size) {
	if (size == 1) {
		return arr[0];
	}
	int maxInRestArray = findMax(arr, size - 1);
	return (arr[size - 1] > maxInRestArray) ? arr[size - 1] : maxInRestArray;
}
int main() {
	const int size = 5;
	int arr[size] = { 34, 7, 23, 32, 5};
	int maxElement = findMax(arr, size);
	cout << "Mux element: " << maxElement << endl;
}


*/
// 2 zadanie
/*
   int findMin(int arr[], int size) {
	if (size == 1) {
		return arr[0];
	}
	int minInRestArray = findMin(arr, size - 1);
	return (arr[size - 1] < minInRestArray) ? arr[size - 1] : minInRestArray;
}
int main() {
	const int size = 5;
	int arr[size] = { 34, 7, 23, 32, 5 };
	int minElement = findMin(arr, size);
	cout << "Min element: " << minElement << endl;
}
*/
// 3 zadanie
/*
	int partition(int arr[], int low, int high) {
	int pivot = arr[high];
	int i = low - 1;
	for (int j = low; j < high; j++) {
		if (arr[j] <= pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return i + 1;
}
void quickSortLumoto(int arr[], int low, int high) {
	if (low < high) {
		int pivotIndex = partition(arr, low, high);
		cout << "Next pivot = " << arr[pivotIndex] << ": ";
		for (int i = 0; i < 5; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
		quickSortLumoto(arr, low, pivotIndex - 1);
		quickSortLumoto(arr, pivotIndex + 1, high);
	}
}

int main() {
	const int size = 5;
	int arr[size] = { 34, 7, 23, 32, 5 };
	cout << "Startov massive: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	quickSortLumoto(arr, 0, size - 1);
	cout << "finished massive : ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
*/

// next massive 

// 1 zadanie 
/*

	int findMax(int arr[], int size) {
	if (size == 1) {
		return arr[0];
	}
	int maxInRestArray = findMax(arr, size - 1);
	return (arr[size - 1] > maxInRestArray) ? arr[size - 1] : maxInRestArray;
}
int main() {
	const int size = 5;
	int arr[size] = { 1, 2, 3, 4, 5, 6 };
	int maxElement = findMax(arr, size);
	cout << "Mux element: " << maxElement << endl;
}


*/
// 2 zadanie
/*
   int findMin(int arr[], int size) {
	if (size == 1) {
		return arr[0];
	}
	int minInRestArray = findMin(arr, size - 1);
	return (arr[size - 1] < minInRestArray) ? arr[size - 1] : minInRestArray;
}
int main() {
	const int size = 5;
	int arr[size] = { 1, 2, 3, 4, 5, 6 };
	int minElement = findMin(arr, size);
	cout << "Min element: " << minElement << endl;
}
*/
// 3 zadanie
/*
	int partition(int arr[], int low, int high) {
	int pivot = arr[high];
	int i = low - 1;
	for (int j = low; j < high; j++) {
		if (arr[j] <= pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return i + 1;
}
void quickSortLumoto(int arr[], int low, int high) {
	if (low < high) {
		int pivotIndex = partition(arr, low, high);
		cout << "Next pivot = " << arr[pivotIndex] << ": ";
		for (int i = 0; i < 5; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
		quickSortLumoto(arr, low, pivotIndex - 1);
		quickSortLumoto(arr, pivotIndex + 1, high);
	}
}

int main() {
	const int size = 5;
	int arr[size] = { 1, 2, 3, 4, 5, 6 };
	cout << "Startov massive: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	quickSortLumoto(arr, 0, size - 1);
	cout << "finished massive : ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
*/

// next massive 

// 1 zadanie 
/*

	int findMax(int arr[], int size) {
	if (size == 1) {
		return arr[0];
	}
	int maxInRestArray = findMax(arr, size - 1);
	return (arr[size - 1] > maxInRestArray) ? arr[size - 1] : maxInRestArray;
}
int main() {
	const int size = 5;
	int arr[size] = { 90, 80, 70, 60, 50, 40, 30 };
	int maxElement = findMax(arr, size);
	cout << "Mux element: " << maxElement << endl;
}


*/
// 2 zadanie
/*
   int findMin(int arr[], int size) {
	if (size == 1) {
		return arr[0];
	}
	int minInRestArray = findMin(arr, size - 1);
	return (arr[size - 1] < minInRestArray) ? arr[size - 1] : minInRestArray;
}
int main() {
	const int size = 5;
	int arr[size] = { 90, 80, 70, 60, 50, 40, 30 };
	int minElement = findMin(arr, size);
	cout << "Min element: " << minElement << endl;
}
*/
// 3 zadanie
/*
	int partition(int arr[], int low, int high) {
	int pivot = arr[high];
	int i = low - 1;
	for (int j = low; j < high; j++) {
		if (arr[j] <= pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return i + 1;
}
void quickSortLumoto(int arr[], int low, int high) {
	if (low < high) {
		int pivotIndex = partition(arr, low, high);
		cout << "Next pivot = " << arr[pivotIndex] << ": ";
		for (int i = 0; i < 5; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
		quickSortLumoto(arr, low, pivotIndex - 1);
		quickSortLumoto(arr, pivotIndex + 1, high);
	}
}

int main() {
	const int size = 5;
	int arr[size] = { 90, 80, 70, 60, 50, 40, 30 };
	cout << "Startov massive: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	quickSortLumoto(arr, 0, size - 1);
	cout << "finished massive : ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
*/

// next massive 

// 1 zadanie 
/*

	int findMax(int arr[], int size) {
	if (size == 1) {
		return arr[0];
	}
	int maxInRestArray = findMax(arr, size - 1);
	return (arr[size - 1] > maxInRestArray) ? arr[size - 1] : maxInRestArray;
}
int main() {
	const int size = 5;
	int arr[size] = { 5, 3, 8, 8, 1, 5, 3, 9 };
	int maxElement = findMax(arr, size);
	cout << "Mux element: " << maxElement << endl;
}


*/
// 2 zadanie
/*
   int findMin(int arr[], int size) {
	if (size == 1) {
		return arr[0];
	}
	int minInRestArray = findMin(arr, size - 1);
	return (arr[size - 1] < minInRestArray) ? arr[size - 1] : minInRestArray;
}
int main() {
	const int size = 5;
	int arr[size] = { 5, 3, 8, 8, 1, 5, 3, 9 };
	int minElement = findMin(arr, size);
	cout << "Min element: " << minElement << endl;
}
*/
// 3 zadanie
/*
	int partition(int arr[], int low, int high) {
	int pivot = arr[high];
	int i = low - 1;
	for (int j = low; j < high; j++) {
		if (arr[j] <= pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return i + 1;
}
void quickSortLumoto(int arr[], int low, int high) {
	if (low < high) {
		int pivotIndex = partition(arr, low, high);
		cout << "Next pivot = " << arr[pivotIndex] << ": ";
		for (int i = 0; i < 5; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
		quickSortLumoto(arr, low, pivotIndex - 1);
		quickSortLumoto(arr, pivotIndex + 1, high);
	}
}

int main() {
	const int size = 5;
	int arr[size] = { 5, 3, 8, 8, 1, 5, 3, 9 };
	cout << "Startov massive: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	quickSortLumoto(arr, 0, size - 1);
	cout << "finished massive : ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
*/