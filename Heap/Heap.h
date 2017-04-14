#include <algorithm>
#include <assert.h>
#include <vector>
#include <iostream>
using namespace std;

template <class T>
class Heap
{
public:
	//ȱʡ�Ĺ��캯��
	Heap()
	{}
	
	Heap( T* a, size_t size)
	{
		//�������е����ݷŵ�˳�������
		for (size_t i = 0; i < size; i++)
		{
			_a.reserve(size);
			_a.push_back(a[i]);
		}
		//���е���
		for (int i = _a.size() / 2 - 1; i >= 0; --i)
		{
			_AdjustDown(i);
		}
		for (int j = _a.size() / 2 - 1; j >= 0; --j)
		{
			_AdjustDownSort(j,_a.size());
		}
	}
	//���β����Ԫ��
	void Push(int x)
	{
		_a.push_back(x);
		_AdjustUp(_a.size() - 1);
	}

	//ɾ���Ѷ�Ԫ��
	void Pop()
	{
		swap(_a[0], _a[_a.size() - 1]);
		_a.pop_back();

		_AdjustDown(0);
	}
	//������
	void HeapSort(int n)
	{
		//�ȵ���С�ѽṹ
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
	//�����һ����Ҷ�ӽڵ㿪ʼ����
	void _AdjustDown(int root)
	{
		int left = root * 2 + 1;
		int right = left + 1;
		//������Ӳ����ڣ���rootΪҶ�ӽڵ㣬�Ѳ����ٵ���
		while (left < _a.size())
		{
			//�ҳ����Һ����н�С����һ��
			int min = left;
			//ע���ж��Һ�����û��Խ��
			if (right<_a.size() && _a[left]>_a[right])
			{
				min = right;
			}
			//�ҳ����Һ����н�С����һ���븸�ڵ���бȽ�
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

	//�����һ����Ҷ�ӽڵ㿪ʼ����(������)
	void _AdjustDownSort(int root,int n)
	{
		int left = root * 2 + 1;
		int right = left + 1;
		//������Ӳ����ڣ���rootΪҶ�ӽڵ㣬�Ѳ����ٵ���
		while (left < n)
		{
			//�ҳ����Һ����н�С����һ��
			int min = left;
			//ע���ж��Һ�����û��Խ��
			if (right<n && _a[left]>_a[right])
			{
				min = right;
			}
			//�ҳ����Һ����н�С����һ���븸�ڵ���бȽ�
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
	//�����һ��Ҷ�ӽڵ㿪ʼ���ϵ���
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
//���
#include <iostream>
using namespace std;
#include <vector>

template <class T>
class Heap
{
public:
	//���캯��
	Heap()
	{}
	
	Heap(const T* a, size_t size)
	{
		_a.reserve(size);
		//�Ƚ������е�Ԫ�ط���˳�����
		for (size_t i = 0; i < size; ++i)
		{
			_a.push_back(a[i]);
		}
		//�����һ����Ҷ�ӽڵ����ϵ���
		for (int i = (_a.size()-1)/2; i >= 0; --i)//ע��i�������ó�size_t����
		{
			_AdjustDown(i);
		}
	}

	//����в�������
	void Push(const T x)
	{
		_a.push_back(x);
		
		_AdjustUp(_a.size() - 1);
	}
	//ɾ���Ѷ�Ԫ��
	void Pop()
	{
		swap(_a[0], _a[_a.size() - 1]);
		_a.pop_back();
		_AdjustDown(0);
	}
protected:
	//�Ӹ���ʼ�������Դ��Ϊ��
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

	//�����һ��Ҷ�ӽڵ㿪ʼ����
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