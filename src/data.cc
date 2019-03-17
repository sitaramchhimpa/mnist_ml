#include "data.hpp"

data1::data1()
{
    feature_vector = new vector<uint8_t>;
}
data1::~data1()
{

}

void data1::set_feature_vector(vector<uint8_t> *vect)
{
    feature_vector = vect;
}
void data1::append_feature_vector(uint8_t val)
{
    feature_vector->push_back(val);
}
void data1::set_label(uint8_t val)
{
    label = val;
}
void data1::set_enumareated_label(int  val)
{
    enum_label = val;
}

int data1::get_feature_vector_size()
{
    return feature_vector->size();
}
uint8_t data1::get_label()
{
    return label;
}
int data1::get_enumareated_label()
{
    return enum_label;
}

vector<uint8_t>* data1::get_feature_vector()
{
    return feature_vector;
}