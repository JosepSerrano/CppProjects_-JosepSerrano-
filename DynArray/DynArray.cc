#include "DynArray.hh"
#include <stdio.h>
#include <iostream>
#include <string>

//contructor
DynArray::DynArray() {
	
	m_capacity = DYN_ARRAY_DEFAULT_SIZE;
	m_size = 0;
	m_data = new int[m_capacity];

}

//contructor
DynArray::DynArray() {



}

//destructor
DynArray::~DynArray() {


}
