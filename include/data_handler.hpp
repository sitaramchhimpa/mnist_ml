#ifndef DATA_HANDLER_H
#define DATA_HANDLER_H

#include<fstream>
#include<stdint.h>
#include"data.hpp"
#include<vector>
#include<string>
#include<map>
#include<unordered_set>

using namespace std;

class data_handler
{
    vector<data1 * > *data_array;
    vector<data1 *> *training_data;
    vector<data1 *> *test_data;
    vector<data1 *> *validation_data;

    int num_classes;
    int feature_vector_size;
    map<uint8_t,int> class_map;

    const double TRAIN_SET_PERCENT=0.75;
    const double TEST_SET_PERCENT=0.20;
    const double VALIDATION_PERCENT=0.05;

    public:
    data_handler();
    ~data_handler();

    void read_feature_vector(string path);
    void read_feature_labels(string path);
    void split_data();
    void count_classes();

    uint32_t convert_to_little_endian(const unsigned char* bytes);

    vector<data1 *> * get_traing_data();
    vector<data1 *> * get_test_data();
    vector<data1 *> * get_validation_data();

};
#endif //DATA_HANDLER_H