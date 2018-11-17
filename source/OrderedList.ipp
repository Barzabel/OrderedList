#pragma once



template<class T>
OrdList<T>::OrdList() {



}


template<class T>
void OrdList<T>::push(Node2<T> *p) 
{
	
	if ((this->gethead() ==nullptr)||(this->is_big(this->gethead(), p )))
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
		if (this->is_big(H, p)) {
			this->add_in_position(H->prev, p);
			return;
		}
		H = H->next;
	}
	
	
}


template<class T>
bool OrdList<T>::is_big(Node2<T>* val1, Node2<T>* val2) {
	if (val1->value > val2->value) {
		return true;
	}
	return false;
}



template<class T>
Node2<T>* OrdList<T>::find(T val) {
	return this->find(val);
}

template<class T>
void OrdList<T>::del(T val) {
	this->del(val);
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