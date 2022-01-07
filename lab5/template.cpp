#include "tstack.h"
#include "tstack.cpp"


template class TStack<Pentagon>;
template std::ostream& operator<< <Pentagon>(std::ostream&, TStack<Pentagon> const&);