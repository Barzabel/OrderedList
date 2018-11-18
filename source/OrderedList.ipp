#pragma once



template<class T>
OrdList<T>::OrdList(bool is_leftsort ):isLeft(is_leftsort) {



}


template<class T>
void OrdList<T>::push(Node2<T> *p) 
{
	
	if ((this->gethead() ==nullptr)||(this->is_big(this->gethead()->value, p->value )))
	{
		
		this->add_in_head(p);
		return;
	}

	if (this->gethead()->next == nullptr)
	{
		this->add_in_tail(p);
		return;
	}

	Node2<T>* H= this->gethead();
	

	
	while (H != nullptr) {
		if (this->is_big(H->value, p->value)) {
			this->add_in_position(H->prev, p);
			return;
		}
		H = H->next;
	}
	

		this->add_in_tail(p);
	
}


template<class T>
bool OrdList<T>::is_big(T val1, T val2) {
	if(this->isLeft)
	{
		if (val1 > val2)
		{
			return true;
		}
		return false;
	}
	else 
	{
		if (val1 < val2) 
		{
			return true;
		}
		return false;
	}
	
}



bool OrdList<char*>::is_big(char* val1,char* val2) {

	char* value1 = this->funclir(val1);
	char* value2 = this->funclir(val2);
	int size1 = 0;
	int size2 = 0;
	while (*value1 != '\0') { size1++; value1++; }
	while (*value2 != '\0') { size2++; value2++; }
	if (this->isLeft)
	{
		if (size1> size2)
		{
			return true;
		}
		return false;
	}
	else
	{
		if (size1 < size2)
		{
			return true;
		}
		return false;
	}

}


template<class T>
Node2<T>* OrdList<T>::find(T val) {

	Node2<T>*H = this->gethead();
	
	
	while (H != nullptr) 
	{
		
		if (H->value == val)
		{
			return H;
		}
		if (this->is_big( H->value,val)) 
		{
			return nullptr;
		}



		H = H->next;
	
	}
	return nullptr;
}


template<class T>
void OrdList<T>::del(T val) {
	this->dell(val);
}


template<class T>

T*  OrdList<T>::get_arr(unsigned int &size) {

	size = this->size();
	T *res = new T[this->size()];
	Node2<T>*H = this->gethead();
	for (unsigned int i = 0; i < size; i++) {
		res[i] = H->value;

		H = H->next;

	}

	

	return res;
}

template<class T>
Node2<T>* OrdList<T>::get_tail() {
	return this->gettail();

}

template<class T>
Node2<T>* OrdList<T>::get_head() {
	return this->gettail();

}