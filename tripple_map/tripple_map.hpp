#pragma once

#include "../tripple/tripple.hpp"
#include <initializer_list>

namespace ks {
template<typename _T1, typename _T2, typename _T3>
class tripple_map {
 public:
    // Default constructor with key set to 1. Valid key value is in 1 - 3 range.
    tripple_map(short key = 1);
    // Constructor with array of tripple with key set to 1. Valid key value is in 1 - 3 range.
    tripple_map(tripple<_T1, _T2, _T3> array[], short key = 1);

    short getKey() { return key_; }
 private:
    short key_;
};
template<typename _T1, typename _T2, typename _T3>
tripple_map<_T1, _T2, _T3>::tripple_map(short key) : key_(key) {

}
template<typename _T1, typename _T2, typename _T3>
tripple_map<_T1, _T2, _T3>::tripple_map(tripple<_T1, _T2, _T3> array[], short key) : key_(key)  {
    
}
}