#ifndef SIMPLELIST_H
#define SIMPLELIST_H
#include "lsnode.h"
#include "pstack.h"
#include "simplelist.h"


template <class E>
class SimpleList
{
private:
    LSNode<E> *First, *Last;
    int Len;
public:

        SimpleList()
        {
            this->First = this->Last = NULL;
            this->Len = 0;
        }

        bool isEmpty()
        {
            First == NULL ? true : false;
        }

        int length()
        {


             return this->Len;
            //public:
        }

        void insertEnd(E pValue)
        {
            if (First == NULL)
            {
                First = Last = new LSNode<E>(pValue);
                Last->setNext(NULL);
                Len++;
            }
            else
            {
                LSNode<E>* aux = First;

                while (aux->getNext() != NULL)
                {
                    aux = aux->getNext();
                }

                aux->setNext(new LSNode<E>(pValue));
                Last = aux->getNext();
                Last->setNext(NULL);
                Len++;
            }
        }

        void insertBeg(E pValue)
        {
            if (First == NULL)
            {
                First = Last = new LSNode<E>(pValue);
                Last->setNext(NULL);
                Len++;
            }
            else
            {
                LSNode<E>* node = new LSNode<E>(pValue);
                node->setNext(First);
                First = node;
                Len++;
            }
        }

        LSNode<E>* deleteEnd()
        {
             LSNode<E>* aux = First;

             if (Len == 0)
                 return NULL;
             else if (Len == 1)
             {
                 First = Last = NULL;
                 Len--;
                 return aux;
             }
             else
             {
                 while(aux->getNext() != Last)
                 {
                     aux = aux->getNext();
                 }
             }
                 Last = aux;
                 aux = Last->getNext();
                 Last->setNext(NULL);
                 Len--;

                 return aux;
        }

        void print()
        {
             LSNode<E>* aux = First;
             while (aux != NULL)
             {
                 cout << aux->getValue() << "-";
                 aux = aux->getNext();
             }
             cout << '"' << endl;;
        }

        SimpleList<char> *concatenarListas(SimpleList<char> *c , char pChar, SimpleList<char> *pI)
        {
            SimpleList<char> *res = new SimpleList<char>();

            for (int i = 0; i < c->length(); i++)
            {
                res->insertEnd(c->getPos(i)->getValue());
            }

            res->insertEnd(pChar);

            for (int i = 0; i < pI->length(); i++)
            {
                res->insertEnd(pI->getPos(i)->getValue());
            }
            return res;
        }

        SimpleList<E> *invertir()
        {
            PStack<LSNode<E>*> *stack = new PStack<LSNode<E>*>();
            SimpleList<E> *res = new SimpleList<E>();

            LSNode<E>* temp = First;

            while (temp != NULL)
            {
                stack->push(temp);
                temp = temp->getNext();
            }

            for (int i = 0; i < stack->len(); i++)
            {
                res->insertEnd(stack->pop()->getValue()->getValue());
            }
            return res;
        }

        LSNode<E> *getFirst()
        {
            return this->First;
        }

        LSNode<E>* getPos(int pPos)
        {
            int cont = 0;
            if (First == NULL || pPos >= this->length())
                return NULL;
            else
            {
                LSNode<E>* temp = First;

                while (temp != NULL)
                {
                    if (cont ++ == pPos)
                        return temp;
                    temp = temp->getNext();
                }
            }
        }
};

#endif // SIMPLELIST_H


