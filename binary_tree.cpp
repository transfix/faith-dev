#include <iostream>

class Node {
public:
	Node() {
		left = nullptr;
		right = nullptr;
		Value = 0;

	}
	void insert(int i)
	{
		if (Value < i) 
		{
			if (right == nullptr)
			{
				right = new Node;
				right->Value = i;
			}
			else
			{
				right->insert(i);
			}
		}
		else 
		{
			if (left == nullptr)
			{
				left = new Node;
				left->Value = i;
			}
			else left->insert(i);
		} 
	}
	Node* search(int i) {
		return nullptr;
	} 
	void print() {
		if (left != nullptr)
			left->print();
		std::cout << Value; 
		if (right != nullptr)
			right->print();

	}
//private:
	int Value; 

	Node* left;

	Node* right;

};



int main()
{
	Node* root = nullptr;
	int Data[] = { 8,9,3,5,6,7,2,1,0 };
	root = new Node;
	root->Value = Data[0];

	int size = sizeof(Data) / sizeof(Data[0]);

		for (int i = 1; i < size; i++)
	{
		root->insert(Data[i]);
		//std::cout << Data[i];
	}
	root->print();
	return 0;
  
}

