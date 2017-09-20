#ifndef STACKNODE_H
#define STACKNODE_H
#include<iostream>

template <class E>
class StackNode
{
    public:

        StackNode()
        {
            this->setNext(NULL);
        }

        StackNode(E pValue)
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

        StackNode<E> *getNext()
        {
            return this->Next;
        }

        void setNext(StackNode<E>* pValue)
        {
            this->Next = pValue;
        }

    private:
        E Value;
        StackNode<E>* Next;
};

#endif // STACKNODE_H
