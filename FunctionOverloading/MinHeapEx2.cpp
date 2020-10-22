
/// function insertKey is overloaded
#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{

    int p=*a;
    *a=*b;
    *b=p;
}
class minHeap
{
private:
int *arr;
int capacity;
int heapSize;
public:
    minHeap(int capacity)
    {
        this->capacity=capacity;
        arr=new int[capacity];
        heapSize=0;
    }

    void heapify(int);
    int parent(int i)
    {
        return (i-1)/2;
    }

    int left(int i)
    {

        return 2*i+1;
    }

    int right(int i)
    {

        return 2*i+2;
    }

    void insertKey(int Key);
   void insertKey(char Key);
    int extractMin();
    void decreaseKey(int i,int new_value);
    int getMin(){return arr[0];}
    void deleteKey(int i);


};



void minHeap::insertKey(int key)
{

    if(heapSize>=capacity)
    {

        cout<<"Warning: Heap overFlow"<<endl;
        return;
    }


    int i=heapSize;
       heapSize++;
    arr[i]=key;


    while(i!=0&&arr[parent(i)]>arr[i])
    {

        swap(&arr[i],&arr[parent(i)]);
        i=parent(i);
    }


}
void minHeap::insertKey(char key)
{

key=key-'0';
    if(heapSize>=capacity)
    {

        cout<<"Warning: Heap overFlow"<<endl;
        return;
    }


    int i=heapSize;
       heapSize++;
    arr[i]=key;


    while(i!=0&&arr[parent(i)]>arr[i])
    {

        swap(&arr[i],&arr[parent(i)]);
        i=parent(i);
    }


}
void minHeap::decreaseKey(int i,int value)
{
    arr[i]=value;
    while(i!=0&&arr[parent(i)]>arr[i])
    {

        swap(&arr[parent(i)],&arr[i]);
        i=parent(i);
    }
}
int minHeap::extractMin()
{

    if(heapSize<=0)
    {
        cout<<"Currently Heap is empty"<<endl;
        return INT_MIN;
    }

    if(heapSize==1)
    {
        heapSize--;
        return arr[0];

    }

    int root=arr[0];



    arr[0]=arr[heapSize-1];
    heapSize--;
    heapify(0);



    return root;
}


void minHeap::deleteKey(int i)
{
if(i<0||i>heapSize)
{

    cout<<"Not possible to Delete such key"<<endl;
    return;
}

decreaseKey(i,INT_MIN);
extractMin();



}

void minHeap::heapify(int i)
{
    int l=left(i);
    int r=right(i);
    int smallest=i;
    if(l<heapSize&&arr[l]<arr[i])
    {

        smallest=l;
    }

    if(r<heapSize&&arr[r]<arr[smallest])
    {

        smallest=r;
    }

    if(smallest!=i)
    {
        swap(&arr[i],&arr[smallest]);
        heapify(smallest);
    }

}


int main()
{

minHeap h(11);
  h.insertKey('3');
    h.insertKey(2);
     cout << h.getMin() << " ";
   h.deleteKey(0);
    h.insertKey(15);
    h.insertKey(5);
    cout << h.getMin() << " ";
    h.insertKey('4');
    h.insertKey(45);
    cout << h.getMin() << " ";
    cout << h.extractMin() << " ";
    cout << h.getMin() << " ";
    h.decreaseKey(2, 1);
    cout << h.getMin();
return 0;
}
