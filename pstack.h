#ifndef PSTACK_H
#define PSTACK_H
#include "stacknode.h"

template <class E>
class PStack
{
    public:
        PStack()
        {
            this->top = NULL;
            this->length = 0;
        }

        ~PStack()
        {
            clear(); // ?
        }

        void clear()
        {
            while(top != NULL)
            {
                StackNode<E> *aux = top;
                top = top->getNext();
                delete aux;
            }
            this->length = 0;
        }

        void push(const E& pValue)
        {
            if (top == NULL)
            {
                top = new StackNode<E>(pValue);
                top->setNext(NULL);
                this->length++;
            }
            else
            {
                StackNode<E> *aux = new StackNode<E>(pValue);
                aux->setNext(top);
                top = aux;
                this->length++;
            }
        }

        StackNode<E> *pop()
        {
            if (top == NULL)
                return NULL;
            else
            {
                StackNode<E> *aux = top;
                top = top->getNext();
                length--;
                return aux;
            }
        }

        StackNode<E> *topValue()
        {
            return top;
        }

        int len()
        {
            return this->len();
        }

        void print()
        {
            StackNode<E> *aux = top;

            while (aux != NULL)
            {
                cout << aux->getValue() << '-';
                aux = aux->getNext();
            }
            cout << '"' << endl;
        }

        bool isEmpty()
        {
            if (top == NULL)
                return true;
            return false;
        }

    private:
        StackNode<E> *top;
        int length;


};

#endif // PSTACK_H
