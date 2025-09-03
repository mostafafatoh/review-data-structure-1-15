#include<iostream>;
using namespace std;
#pragma region structure
/*struct book {
string name;
string author;
int pages;
string price;
};*/
#pragma endregion
#pragma region union
/*union box {
double weight;
double height;
};*/
#pragma endregion
/*struct node
{
	int data;
	node* next;

};
node* head=NULL;
void insertnode(int value);
void display();
void deletenode(int value);
void insetbeg(int value);
void deletebeg();
void deleteend();*/
struct node {
	int data;
	node* next;
};
node* top =NULL;
void push(int value);
int pop();
int peek();
void display();

int main() {
#pragma region structure
	/*book b1;
b1.name = "haidy";
b1.author = "moustafa,haidy";
b1.pages = 969;
b1.price = "life";
b1 = {"haidy","moustafa,haidy",969,"life" };
cout << "enter name of book";
cin >> b1.name;
book books[10];*/
#pragma endregion
#pragma region union
/*box b1;
b1.height = 19;
b1.weight = 18;
cout << b1.height;*/
#pragma endregion
#pragma region linked list
/*insertnode(5);
insertnode(10);
insertnode(15);
insertnode(7);
display();
deletenode(15);
display();
deleteend();
display();*/
#pragma endregion
	push(3);
	push(4);
	push(6);
	display();
	pop();
	display();
	cout<<"peek is "<<peek();

}
#pragma region linked list

/*void insertnode(int value) {
	node* new_node = new node;
	node* ptr;
	new_node->data = value;
	if (head == NULL) {
		head = new_node;
		new_node->next = NULL;
	}
	else {
		ptr = head;
		while (ptr->next != NULL) {
			ptr = ptr->next;

		}
		ptr->next = new_node;
		new_node->next = NULL;
	}

}
void display() {
	node* last = head;;
	if (last == NULL) {
		cout << "linked list empty" << endl;

	}
	else {
		while (last != NULL) {
			cout << last->data << "\t";
			last = last->next;
		}
	}

}
void deletenode(int value) {
	node* first, * last;
	first = head;
	last = head;
	if (last == NULL) {
		cout << "linked list empty" << endl;
	}
	else if (first->data == value) {
		head = first->next;
		delete(first);
		return;
	}
	else {
		while (last->data != value) {
			first = last;
			last = last->next;
		}
		first->next = last->next;
		delete(last);
	}



}
void insertbeg(int value) {
	node* new_node = new node;
	new_node->data = value;
	new_node->next = head;
	head = new_node;
}
void deletebeg() {
	node* ptr;
	ptr = head;
	if (head == NULL) {
		cout << "is empty";
	}
	head = ptr->next;
	delete(ptr);
}
void deleteend() {
	node* ptr1;
	ptr1 = head;
	if (head == NULL) {
		cout << "is empty";
	}
	else if (head->next == NULL) {
		delete(head);
		head == NULL;
	}
	else {
		while (ptr1->next->next != NULL) {
			;
			ptr1 = ptr1->next;
		}
		delete(ptr1->next);
		ptr1->next = NULL;
	}


}*/
#pragma endregion

void push(int value) {
	node* new_node = new node;
	new_node->data = value;
	
	 new_node->next=top;
	 top = new_node;
}
int pop() {
	if (top == NULL) {
		cout << "stack is overflow" << endl;
		return -1;
	}
	else {
		node* ptr;
		ptr = top;
		top = ptr->next;
		delete(ptr);
		return  top->data;
	}
}
int peek(){
	if (top == NULL) {
		cout << "stack is overflow" << endl;
		return -1;
	}
	else {
		return top->data;
	}

}
void display() {
	if (top == NULL) {
		cout << "stack is overflow" << endl;
	}
	else {
		node* ptr3;
		ptr3 = top;
		while (ptr3 != NULL) {
			cout << ptr3->data << "\t";
			ptr3 = ptr3->next;
		}

	}

}