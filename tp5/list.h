#pragma once
#include <iostream>
#include <vector>
#include <stdexcept>

template <class T>
class stack
{
private:
    std::vector<T> Tableau;
    size_t taille;

public:
    explicit stack(size_t size);
    void push(const T &);
    T pop();
    T peek() const;
    size_t size() const;
    bool Empty() const;
};

template <class T>
stack<T>::stack(size_t size) : taille{size}
{
    Tableau.reserve(size);
}

template <class T>
void stack<T>::push(const T &x)
{
    if (Tableau.size() == taille)
    {
        throw std::overflow_error("Stack complet");
    }
    std::cout << "Insertion de : " << x << std::endl;
    Tableau.push_back(x);
}

template <class T>
T stack<T>::peek() const
{
    if (Empty())
    {
        throw std::underflow_error("Stack vide");
    }
    return Tableau.back();
}

template <class T>
size_t stack<T>::size() const
{
    return Tableau.size();
}

template <class T>
bool stack<T>::Empty() const
{
    return Tableau.empty();
}

template <class T>
T stack<T>::pop()
{
    if (Empty())
    {
        throw std::underflow_error("Stack vide");
    }
    T top = Tableau.back();
    std::cout << "on enleve : " << top << std::endl;
    Tableau.pop_back();
    return top;
}
