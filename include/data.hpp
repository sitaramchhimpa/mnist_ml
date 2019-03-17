#ifndef DATA_H
#define DATA_H

#include<vector>
#include<stdio.h>
#include<stdint.h>

using namespace std;
class data1
{
    vector<uint8_t> *feature_vector;
    uint8_t label;
    int enum_label;

    public:
    data1();
    ~data1();
    void set_feature_vector(vector<uint8_t> *);
    void append_feature_vector(uint8_t);
    void set_label(uint8_t);
    void set_enumareated_label(int);

    int get_feature_vector_size();
    uint8_t get_label();
    int get_enumareated_label();

    vector<uint8_t> * get_feature_vector();    
};

#endif // DATA_H