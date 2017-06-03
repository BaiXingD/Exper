#include <iostream>
#include <vector>

using namespace std;

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void Pop_sort(vector<int> &source)
{
	int n = source.size();
	for (int i = 0; i < n-1; i++){
		for (int j = n - 1; j > i; j--)
		{
			if (source[j] < source[j - 1]) {
				swap(source[j],source[j-1]);
			}
		}
	}
}

void Insert_sort(vector<int> &source) {
	int n = source.size();
	for (int i = 1; i < n; i++) {
		for (int j = i; j > 0; j--) {
			if(source[j] < source[j - 1]) {
				swap(source[j], source[j - 1]);
			}
		}
	}
}

void Insertion_sort(vector<int> &source) {
	int n = source.size();
	for (int i = 1; i < n; i++) {
		int key = source[i];
		int j = i ;
		while (j > 0 && source[j-1] > key) {
			source[j] = source[j-1];
			j--;
		}
		source[j] = key;
	}
}

void Quick_sort(vector<int> &source) {
	int n = source.size();
}



//拷旺電會。。。。。。
void mergeArray(vector<int> &source, int begin, int mid, int end) {
	int i = begin, j = mid + 1;
	vector<int> temp;
	while (i <= mid && j <= end) {
		if (source[i] < source[j]) {
			temp.push_back(source[i]);
			i++;
		}
		else {
			temp.push_back(source[j]);
			j++;
		}
	}
	while (i<=mid){
		temp.push_back(source[i]);
		i++;
	}
	while (j<=end){
		temp.push_back(source[j]);
		j++;
	}
	for (int m = begin, n = 0; m <= end; m++, n++) {
		source[m] = temp[n];
	}
}
void Merge_sort(vector<int> &source, int begin, int end) {
	if (begin < end) {
		int mid = (begin + end) / 2;
		Merge_sort(source, begin, mid);
		Merge_sort(source, mid + 1, end);
		mergeArray(source, begin, mid, end);
	}
}



int main() 
{
	vector<int> Type_In;
	int temp = 0;
	while (cin>>temp) {
		Type_In.push_back(temp);
	}
	//Pop_sort(Type_In);
	//Insert_sort(Type_In);
	//Insertion_sort(Type_In);
	Merge_sort(Type_In,0,Type_In.size()-1);

	for (vector<int>::iterator iter = Type_In.begin(); iter != Type_In.end(); iter++) {
		cout << *iter << endl;
	}

	//system("pause");
	return 0;
}
