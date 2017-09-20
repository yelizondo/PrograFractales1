#ifndef LSNODE_H
#define LSNODE_H
#include <iostream>

using namespace std;

template <typename E>
class LSNode
{
    public:

        LSNode()
        {
            this->setNext(NULL);
        }

        LSNode(E pValue)
        {
            this->setValue(pValue);
        }

        E getValue()
        {
            return this->Value;
        }

        void setValue(E pValue)
        {
            this->Value = pValue;
        }

        LSNode<E> *getNext()
        {
            return this->Next;
        }

        void setNext(LSNode<E>* pValue)
        {
            this->Next = pValue;
        }

private:
    E Value;
    LSNode <E>* Next;
};

#endif // LSNODE_H
