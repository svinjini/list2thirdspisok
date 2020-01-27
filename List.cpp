#ifndef HEADER_INCLUDED
#include "List.h"
#define HEADER_INCLUDED
std::ostream &operator <<(std::ostream& out, List& obj){
		Node* temp=obj.head;
		while(temp->next!=nullptr){
				out<<temp->value<<std::endl;
				temp=temp->next;
			}
			return out;
	}
List& List::operator +=(int x){
	    Node* temp;
		if(head=nullptr){
				tail=new Node();
				head->value=x;
				head->next=temp;
				tail->pre=head;
			}
		else{
			tail=new Node();
			
		}
		return *this;
	}
void List::deleteNode(Node*a){
		   delete a;
		}
List::List(){
		head=nullptr;
		tail=nullptr;
	}
List::~List(){
		while(head!=nullptr){
				deleteNode(tail->pre);				
		}
	}
#endif
