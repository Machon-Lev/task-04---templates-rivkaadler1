#pragma once
#include <iostream>
#include <list>
#include <exception>

// Comparator struct used by the PriorityQueue class
template<typename T>
struct MyComparator
{
    /**
     * @brief Compares two elements of type T.
     * @param a The first element to compare.
     * @param b The second element to compare.
     * @return The result of the comparison.
     */
    T operator()(const T& a, const T& b) const {
        return a - b;
    }
};

// Priority queue class implementation
template<typename T>
class PriorityQueue
{
public:
    /**
     * @brief Inserts an element into the priority queue.
     * @param t The element to be inserted.
     */
    void push(const T& t) {
        auto it = _elements.begin();
        while (it != _elements.end() && _comp(*it, t) < 0) {
            ++it;
        }
        _elements.insert(it, t);
    }

    /**
     * @brief Removes and returns the highest priority element from the priority queue.
     * @return The highest priority element.
     * @throws std::runtime_error if the priority queue is empty.
     */
    T poll() {
        if (_elements.empty()) {
            throw std::runtime_error("PriorityQueue empty!");
        }
        T highestPriorityElement = _elements.front();
        _elements.pop_front();
        return highestPriorityElement;
    }

private:
    std::list<T> _elements;       // List of elements in the priority queue
    MyComparator<T> _comp;        // Comparator for determining the position in the queue
};

