#pragma once
#include <iostream>
#include <vector>
#include <string>

struct Column;

struct Cell {
    
    Column* previous_column;
    Column* next_column; 

    Cell(Column* pre, Column* next) {
        previous_column = pre;
        next_column = next;
    }
    Cell() {
        previous_column = NULL;
        next_column = NULL;
    }
};

struct Column {
    int value;
    std::vector<Cell> cells; //1 cot se co nhieu cell
};

struct SkipLists {

    static const int MAX_LEVEL = 32;
    Column* first_column, * last_column;

    SkipLists(); 
    bool empty(); 
    Column* bound(int); 
    void insert(int);
    void erase(int);
    void print();
};

void Search(int value, SkipLists list);