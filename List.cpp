#ifndef HEADER_INCLUDED
#include "List.h"
#define HEADER_INCLUDED
List::List(){
		count=0;
		head=nullptr;
		tail=nullptr;
	}
std::ostream &operator <<(std::ostream& out, List& obj){
		List::Node* temp=obj.head;
		int i=obj.count;
		while(i!=0){
				out<<temp->value<<std::endl;
				temp=temp->next;
				i--;
			}
			return out;
	}
bool lookforSame(int x, List& obj) {
	List::Node* temp;
	temp = obj.tail->pre;
	for (int i = obj.count; i > 0;--i) {
		if (temp->value == x) {
			return true;
			break;
		}
		temp = temp->pre;
	}
}
List& List::operator +=(int x){
			int tempest;
			Node* temp;
			if (count == 0) {
				head = new Node();
				tail = new Node();
				head->value = x;
				head->next = tail;
				tail->pre = head;
				++count;
			}
			else {
				if (lookforSame(x, *this) != true) {
					temp = tail;
					tail = new Node();
					tail->pre = temp;
					temp->value = x;
					temp->next = tail;
					++count;
					while ((temp ->pre!= nullptr)&&(temp->pre->value >= temp->value)) {
						if (temp->pre->value > temp->value) {
							tempest = temp->pre->value;
							temp->pre->value = temp->value;
							temp->value = tempest;
							temp = temp->pre;
						}
					}
				}
			}
		return *this;
	}
void List::deleteNode(Node* a){
		   delete a;
		}
List::List(List&& obj){
		count=obj.count;
	}
List::~List(){
		Node* temp;
		while(count!=0){
			if(tail->pre==head){
					deleteNode(head);
					count=count-1;
			}
			else{
					temp=tail->pre;
					temp->pre->next=tail;
					tail->pre=temp->pre;
					deleteNode(temp);
					count=count-1;
			}
		}
	}
#endif
