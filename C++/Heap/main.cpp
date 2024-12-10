#include <iostream>
using namespace std;


struct heap{
    int *arr;
    int size;

    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){

        // Step 1: increase the size of heap by 1 and insert the element at the end of the heap

        size++;
        int index = size;
        arr[index] = val;

        // Step 2: heapify the element to maintain heap property

        while (index > 1){
            int parent = index/2;

            // if parent is smaller than the element then swap parent with the element

            if (arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }

            // if parent is greater than the element then return as heap property is maintained

            else{
                return;
            }
        }
    }

    void insertHeapify(int data){
        size++;
        arr[size] = data;

        for (int i = size/2; i>=1; i--){
            heapify(arr, size, i);
        }
    }

    void deleteMax(){

        // if heap is empty then return

        if (size == 0){
            cout << "Heap is empty" << endl;
            return;
        }

        // Step 1: swap first and last element

        arr[1] = arr[size];
        size--;

        // Step 2: heapify the root element to maintain heap property

        int index = 1;
        while (index < size){
            int left = 2*index;
            int right = 2*index + 1;

            // if left child is greater than root then swap left child with root

            if (left < size && arr[index] < arr[left]){
                swap(arr[index], arr[left]);
                index = left;
            }

            // if right child is greater than root then swap right child with root

            else if (right < size && arr[index] < arr[right]){
                swap(arr[right], arr[index]);
                index = right;
            }

            // if both children are smaller than root then return as heap property is maintained, this means that the root is at its correct position

            else{
                return;
            }
        }
    }

    void heapify(int arr[], int n, int index){
        int largest = index;
        int left = 2*index;
        int right = 2*index + 1;

        if (left < n and arr[largest] < arr[left]){
            largest = left;
        }

        if (right < n && arr[largest] < arr[right]){
            largest = right;
        }

        if (largest != index){
            swap(arr[largest], arr[index]);
            heapify(arr, n, largest);
        }
    }

    void heapifyMin(int arr[], int n, int index){
        int smallest = index;
        int left = 2*index;
        int right = 2*index + 1;

        if (left < n and arr[smallest] > arr[left]){
            smallest = left;
        }

        if (right < n && arr[smallest] > arr[right]){
            smallest = right;
        }

        if (smallest != index){
            swap(arr[smallest], arr[index]);
            heapifyMin(arr, n, smallest);
        }
    }

    void buildHeap(int arr[], int n){
        for (int i = n/2; i >= 1; i--){
            heapify(arr, n, i);
        }
    }

    void heapSort(int arr[], int n){
        int size = n;
        heapify(arr, size, 1);
        
        while (size > 1){
            swap(arr[1], arr[size]);
            size--;
            heapify(arr, size, 1);
        }
    }

    void print(){
        for (int i = 1; i <= size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};


int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deleteMax();
    h.print();
    
    return 0;
}