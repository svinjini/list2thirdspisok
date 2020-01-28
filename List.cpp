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
		while(temp){
				out<<temp->value<<std::endl;
				temp=temp->next;
			}
			return out;
	}
List& List::operator +=(int x){
	    Node* temp;
		if(count==0){
				tail=new Node();
				head->value=x;
				head->next=tail;
				tail->pre=head;
				count++;
			}
		else{
			temp=tail;
			tail=new Node();
			tail->pre=temp;
			temp->value=x;
			temp->next=tail;
			count++;
		}
		return *this;
	}
void List::deleteNode(Node*a){
		   delete a;
		}
List::~List(){
		Node* temp;
		while(count!=0){
			if(tail->pre==head){
					deleteNode(head);
					count--;
			}
			else{
					temp=tail->pre;
					temp->pre->next=tail;
					tail->pre=temp->pre;
					deleteNode(tail->pre);
					count--;
			}
		}
	}
#endif
