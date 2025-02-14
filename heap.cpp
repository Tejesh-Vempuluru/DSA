#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
void maxHeapify(vector<int> &A, int target, int n, int i, long &steps) 
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && A[l] > A[largest])
        largest = l;

    if (r < n && A[r] > A[largest])
        largest = r;

    if (largest != i) 
    {
        swap(A[i], A[largest]);
        maxHeapify(A, target, n, largest, steps);
    }

    do
    {
        if (A[i] > target)
        {
            if(A[l] <= target)
            {
                A[l]++;
                A[i]--;
            }
            else
            {
                A[r]++;
                A[i]--;
            }
            steps++;
        }
    } while (A[i] > target);
}

void buildMaxHeap(vector<int> &A, int target,int n, long &steps) 
{
    for (int i = n / 2 - 1; i >= 0; i--) 
    {
        maxHeapify(A, target,n, i, steps);
    }
}

void heapSort(vector<int> &A, int target, int n, long &steps) 
{
    buildMaxHeap(A, target, n, steps);

    for (int i = n - 1; i > 0; i--) 
    {
        swap(A[0], A[i]);
        maxHeapify(A, target, i, 0, steps);
    }
}

int main() {
    vector<int> A;
    int total = 0;
    int n, a;
    long steps = 0;

    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");
    
    if (!inputFile)
    {
        cerr<<"Error ! Can't open input file !"<<endl;
    }

    if (!outputFile)
    {
        cerr<<"Error ! Can't open output file !"<<endl;
    }

    inputFile >> n;

    while (inputFile >> a)
    {
        A.push_back(a);
        total+=a;
    }
    inputFile.close();

    int target = total / n;

    heapSort (A,target,n,steps);

    cout << "Final distribution: [";
    for (int i = 0; i < n; i++) {
        if (i > 0) cout << ", ";
        cout << A[i];
    }
    cout << "]" << endl;

    cout << "Steps: " << steps << endl;
    
    outputFile << "[";
    for (int i = 0; i < A.size(); i++) 
    {
        if (i > 0) outputFile << ",";
        outputFile << A[i];
    }
    outputFile << "]" << endl;

    outputFile << "Steps: " << steps << endl;
}