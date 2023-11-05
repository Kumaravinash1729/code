#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;
    heap()
    {
        arr[0]=-1;
        size = 0;
    }
    void insert(int val)
    {
        size = size +1;
        int index = size;
        arr[index] = val;
         
        while(index>1)
        {
            int parent = index/2;
            if(arr[index]>arr[parent])
            {
                swap(arr[index],arr[parent]);
                index = parent;
            }
            else
            {
                return;
            }
        }

    }
    void print()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void deletenode()
    {
       arr[1] = arr[size];
       int last = arr[size];
       size--;
       int loc = 1;
       int left = 2;
       int right = 3;
       while(right<size)
       {
        if(arr[left]<last &&arr[right]<last)
        {
            arr[loc] = last;
            return ;
        }
         if(arr[left]>=arr[right])
        {
            arr[loc] = arr[left];
            loc = left;
        }
        else{
            arr[loc] = arr[right];
            loc = right;
        }
        left = 2*loc;
        right = 2*loc+1;
       }
       if(left == size&& arr[left]>last)
       {
        arr[loc] = arr[left];
        loc = left;
       }
       arr[loc] = last;
    }
};

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(54);
    h.insert(52);
    h.insert(53);
    
    h.print();
    h.deletenode();
    h.print();
}