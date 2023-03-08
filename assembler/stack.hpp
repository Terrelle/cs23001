#ifndef CS2_STACK_HPP_
#define CS2_STACK_HPP_
////////////////////////////////////////////////////////////////////////////
//
// File: stack.hpp
//
// Programmer:
// Updated:    Fall 2021
//
//
// Do not change the names of the classes or methods.  Otherwise, instructor
//  tests will not work.
//

#include <new>
#include "../string/string.hpp"

////////////////////////////////////////////////////////////////////////////
//           
template <typename T>
class Node{
	public:
	Node() : next(0) {};
	Node(T item) : data(item), next(0) {};

	Node<T> *next;
	T data;
};


////////////////////////////////////////////////////////////////////////////
// CLASS INV:
//
//    
template <typename T>
class stack {
public:
              stack     () : tos(0) {}; 
              stack     (const stack<T>&);
              ~stack    (); 
    void      swap      (stack<T>&); 
    stack<T>& operator= (stack<T> rhs) { swap(rhs); return *this; };
	bool      empty     () const { return tos == 0; };
	bool      full      () const; 
	T         top       () const; 
	T         pop       (); 
	void      push      (const T&); 


private:
	Node<T>   *tos;
};


/*
stack<T>& stack::operactor=(stack<T> rhs) { swap(rhs); return *this; }

template <typename T>
void stack<T>::swap(stack<T>& rhs) {
	Node<T> *tempTOS = rhs.tos;
	rhs.tos          = tos;
	tos              = tempTOS;
}

template <typename T>
void stack<T>::push(const T& item){
	Node<T> *temp = new Node<T>(item);
	temp->next    = tos;
	tos           = temp;
}

template <typename T>
T stack<T>::pop(){
	T result = tos->data;
	Node<T> *temp = tos;
	tos           = tos->next;
	delete temp;

	return result;
}

template <typename T>
stack<T>::~stack(){
	while(tos != 0){
		Node<T> *temp = tos;
		tos  = tos->next;
		delete temp;
	}
}

template <typename T>
stack<T>::stack(const stack<T> &actual) : stack() {
	Node<T> *temp = actual.tos;
	Node<T> *bottom;

	while(temp != 0){
		if(tos==0){
			tos = new Node<T>(temp->data);
			bottom = tos;
		} else {
			bottom->next = new Node<T>(temp->data);
			bottom = bottom->next;
		}
		temp = temp->next;
	}
}


*/




















template <typename T>
void stack<T>::push(const T& item){
	Node<T> *temp = new Node<T>(item);
	temp->next    = tos;
	tos           = temp;
}

template <typename T>
T stack<T>::top() const{
	return tos->data;
}

template <typename T>
stack<T>::~stack(){
	while(tos != 0){
		Node<T> *temp = tos;
		tos = tos->next;
		delete temp;
	}
	
}

template <typename T>
stack<T>::stack(const stack<T>& actual) : stack(){
		Node<T> *temp = actual.tos;
		Node<T> *bottom;

		while(temp != 0){
			if(tos == 0){
				tos = new Node<T>(temp->data);
				bottom = tos;
			} else {
				bottom->next = new Node<T>(temp->data);
				bottom = bottom->next;
			}
			temp = temp->next;
		}
}


template <typename T>
T stack<T>::pop(){
	T result = tos->data;       // return type needed
	if(!empty()){
		Node<T> *temp = tos;     // SIMILAR TO STACK DESTRUCTOR
		tos           = tos->next;
		delete temp;
	}
	return result;
}



template <typename T>
void stack<T>::swap(stack<T>& rhs){
	Node<T> *temp = rhs.tos;
	rhs.tos = tos;
	tos = temp;
}



template <typename T>
bool stack<T>::full() const{
	Node<T> *temp = new Node<T>(); // a new pointer to serve as the checker by creating a sample memory

	if(temp == 0) return true;  // == 0 translates to it being full, so return (true)
	delete temp;                // since it is a checker we can now delete it

	return false;  
}



#endif

