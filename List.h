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
		Node* head;
		Node* tail;
	List();
	void deleteNode(Node* a);
	std::ostream &operator <<(std::ostream& out, List& obj);
	List& operator +=(int x);
	~List();
	
	};
