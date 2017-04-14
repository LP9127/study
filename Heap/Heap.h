#include <algorithm>
#include <assert.h>
#include <vector>
#include <iostream>
using namespace std;

template <class T>
class Heap
{
public:
	//缺省的构造函数
	Heap()
	{}
	
	Heap( T* a, size_t size)
	{
		//将数组中的数据放到顺序表里面
		for (size_t i = 0; i < size; i++)
		{
			_a.reserve(size);
			_a.push_back(a[i]);
		}
		//进行调整
		for (int i = _a.size() / 2 - 1; i >= 0; --i)
		{
			_AdjustDown(i);
		}
		for (int j = _a.size() / 2 - 1; j >= 0; --j)
		{
			_AdjustDownSort(j,_a.size());
		}
	}
	//向堆尾插入元素
	void Push(int x)
	{
		_a.push_back(x);
		_AdjustUp(_a.size() - 1);
	}

	//删除堆顶元素
	void Pop()
	{
		swap(_a[0], _a[_a.size() - 1]);
		_a.pop_back();

		_AdjustDown(0);
	}
	//堆排序
	void HeapSort(int n)
	{
		//先调成小堆结构
		for (int i = _a.size() / 2 - 1; i >= 0; --i)
		{
			_AdjustDownSort(i, n);
		}

		int end = n - 1;
		while (end)
		{
			swap(_a[0], _a[end]);
			_AdjustDownSort(0, end);
			--end;
		}
	}
protected:
	//从最后一个非叶子节点开始调整
	void _AdjustDown(int root)
	{
		int left = root * 2 + 1;
		int right = left + 1;
		//如果左孩子不存在，则root为叶子节点，已不需再调整
		while (left < _a.size())
		{
			//找出左右孩子中较小的那一个
			int min = left;
			//注意判断右孩子有没有越界
			if (right<_a.size() && _a[left]>_a[right])
			{
				min = right;
			}
			//找出左右孩子中较小的那一个与父节点进行比较
			if (_a[min] < _a[root])
			{
				swap(_a[min], _a[root]);
				root = min;
				left = root * 2 + 1;
				right = left + 1;
			}
			else
				break;
		}
	}

	//从最后一个非叶子节点开始调整(排序用)
	void _AdjustDownSort(int root,int n)
	{
		int left = root * 2 + 1;
		int right = left + 1;
		//如果左孩子不存在，则root为叶子节点，已不需再调整
		while (left < n)
		{
			//找出左右孩子中较小的那一个
			int min = left;
			//注意判断右孩子有没有越界
			if (right<n && _a[left]>_a[right])
			{
				min = right;
			}
			//找出左右孩子中较小的那一个与父节点进行比较
			if (_a[min] < _a[root])
			{
				swap(_a[min], _a[root]);
				root = min;
				left = root * 2 + 1;
				right = left + 1;
			}
			else
				break;
		}
	}
	//从最后一个叶子节点开始往上调整
	void _AdjustUp(int root)
	{
		int child=root;
		while (child > 0)
		{
			int parent = (child - 1) / 2;
			if (_a[child] < _a[parent])
			{
				swap(_a[child], _a[parent]);
				child = parent;
			}
			else
			{
				break;
			}
		}
	}
private:
	vector<T> _a;
};

void TestHeap()
{
	int arr[10] = { 10, 16, 18, 12, 11, 13, 15, 17, 14, 19 };
	Heap<int> hp1(arr, 10);
	hp1.HeapSort(10);
	//hp1.Pop();
	hp1.Push(8);
}

/*
//大堆
#include <iostream>
using namespace std;
#include <vector>

template <class T>
class Heap
{
public:
	//构造函数
	Heap()
	{}
	
	Heap(const T* a, size_t size)
	{
		_a.reserve(size);
		//先将数组中的元素放入顺序表中
		for (size_t i = 0; i < size; ++i)
		{
			_a.push_back(a[i]);
		}
		//从最后一个非叶子节点向上调整
		for (int i = (_a.size()-1)/2; i >= 0; --i)//注：i不能设置成size_t类型
		{
			_AdjustDown(i);
		}
	}

	//向堆中插入数据
	void Push(const T x)
	{
		_a.push_back(x);
		
		_AdjustUp(_a.size() - 1);
	}
	//删除堆顶元素
	void Pop()
	{
		swap(_a[0], _a[_a.size() - 1]);
		_a.pop_back();
		_AdjustDown(0);
	}
protected:
	//从根开始调整，以大堆为例
	void _AdjustDown(int root)
	{
		int parent = root;
		int child = root * 2 + 1;
		while (child < _a.size())
		{
			if (child + 1 < _a.size() && _a[child + 1] > _a[child])
			{
				++child;
			}
			if (_a[child] > _a[parent])
			{
				swap(_a[child], _a[parent]);
				parent = child;
				child = parent * 2 + 1;
			}
			else
			{
				break;
			}
		}
	}

	//从最后一个叶子节点开始调整
	void _AdjustUp(int root)
	{
		int child = root;
		while (child > 0)
		{
			int parent = (child - 1) / 2;
			if (_a[child] > _a[parent])
			{
				swap(_a[child], _a[parent]);
				child = parent;
			}
			else
				break;
		}
	}
private:
	vector<T> _a;
};

void TestHeap()
{
	int arr[10] = { 1, 7, 9, 3, 4, 5, 2, 6, 8, 0 };
	Heap<int> hp1(arr,10);

	hp1.Push(10);
	hp1.Pop();
}
*/