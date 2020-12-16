#include"class.h"

/////////////////////////////////////////////////// *****PUSH METHODE***** ///////////////////////////
	template<class type>

bool Stack<type>::Push(type input){

	if(!isFull()){
		int counter=Get_Size();
		if(!isEmpty()){
		while(counter>0){
			Stack::stack[counter]=Stack::stack[counter-1];
			--counter;
		}
	}
		Stack::size=Stack::size+1;
		Stack::stack[0]=input;
		return true;
	}

	else 
		return false;
}

//////////////////////////////////////////////// ******** POP METHODE ***** //////////////////////////
	template<class type>

bool Stack<type>::Pop(){
	int counter=0;
	if(!isEmpty()){
			while(counter<Get_Size()){
			stack[counter]=stack[counter+1];
			++counter;
		}
			--size;
			return true;
	}
	else return false;
}

///////////////////////////////////////// ******** TOP METHODE ******* /////////////////////////////
	template<class type>
type Stack<type>::Top()const{
	
	return stack[0];
}
///////////////////////////////////////// ******** GET SIZE METHODE ******* /////////////////////////////
template<class type>

int Stack<type>::Get_Size()const{
	return Stack::size;
}

///////////////////////////////////////// ******** GET REAL SIZE METHODE ******* /////////////////////////////
template<class type>

int Stack<type>::Get_Real_Size()const{
	return real_size;
}

///////////////////////////////////////// ******** SETUP METHODE  ******* /////////////////////////////
template<class type>

void Stack<type>::Setup(){
	Stack::size=0;
	Stack::real_size=100;
}

///////////////////////////////////////// ******** ISFULL METHODE ******* /////////////////////////////
template<class type>

bool Stack<type>::isFull()const{
	if(Get_Size()==Get_Real_Size())
		return true;
	else return false;
}
///////////////////////////////////////// ******** ISEMPTY METHODE  ******* /////////////////////////////

	template<class type>

bool Stack<type>::isEmpty()const{
	if(Get_Size()== 0)
		return true;
	else 
		return false;
}

