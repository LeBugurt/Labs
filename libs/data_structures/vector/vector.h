#ifndef LABS_VECTOR_H
#define LABS_VECTOR_H
#include "stdbool.h"

typedef struct vector {
    int *data; // указатель на элементы вектора
    size_t size; // размер вектора
    size_t capacity; // вместимость вектора
} vector;

// Возвращает структуру-дескриптор вектор из n значений
vector createVector(size_t n);

// Изменяет количество памяти, выделенное под хранение элементов вектора
void reserve(vector *v, size_t newCapacity);

// Удаляет элементы из контейнера , но не освобождает выделенную память
void clear(vector *v);

// Освобождает память, выделенную под не используемые элементы
void shrinkToFit(vector *v);

// Освобождает память выделенную вектору
void deleteVector(vector *v);

// Возвращает значение 'истина', если вектор v пустой, иначе 'ложь'
bool isEmpty(vector *v);

// Возвращает значение 'истина', если вектор v полный, иначе 'ложь'
bool isFull(vector *v);

// Возвращает значение i-того элемента вектора v
int getVectorValue(vector *v, size_t i);

// Добавляет элемент x в конец вектора v, если вектор заполнен
// увеличивает выделенную память в 2 раза
void pushBack(vector *v, int x);

// удаляет последний элемент из вектора v
void popBack(vector *v);

void test_pushBack_emptyVector();

void test_pushBack_fullVector();

void test_popBack_notEmptyVector();

// Возвращает указатель на index-ый элемент вектора v
int* atVector(vector *v, size_t index);

// Возвращает указатель на последний элемент вектора v
int* back(vector *v);

// Возвращает указатель на нулевой элемент вектора v
int* front(vector *v);

void test_atVector_notEmptyVector();

void test_atVector_requestToLastElement();

void test_back_oneElementInVector();

void test_front_oneElementInVector();


#endif //LABS_VECTOR_H
