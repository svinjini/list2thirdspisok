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
	friend bool lookforSame(int x, List& obj);
	void deleteNode(Node* a);
	friend std::ostream &operator <<(std::ostream& out, List& obj);
	List& operator +=(int x);
	~List();
	};
