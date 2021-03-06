#include <iostream>

class List{
public:
	struct Node{
			Node* next;
			Node* pre;
			int value;
			Node(){
					next=nullptr;
					pre=nullptr;
					value=0;
				}		
		};
		int count;
		Node* head;
		Node* tail;
	List();
	List(List&& obj);
	List& operator &(const List& ob1);
	friend bool lookforSame(int x, List& obj);
	void deleteNode(Node* a);
	friend std::ostream &operator <<(std::ostream& out, List& obj);
	List& operator +=(int x);
	~List();
	};
