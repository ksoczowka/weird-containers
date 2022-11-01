#pragma once
#include <bits/move.h> // for std::forward
#include <type_traits> // for __decay_and_strip

namespace ks {
template<typename _T1, typename _T2, typename _T3>
struct tripple {
 public:
    _T1 first;
    _T2 second;
    _T3 third;
    tripple() : first(_T1()), second(_T2()), third(_T3()) {}
    tripple(_T1 first, _T2 second, _T3 third) : first(first), second(second), third(third) {}

    void operator=(const tripple<_T1, _T2, _T3>& other) {
        this->first = other.first;
        this->second = other.second;
        this->third = other.third;
    }
    bool operator==(const tripple<_T1, _T2, _T3>& other) {
        if(first == other.first && second = other.second && third == other.third) {
            return true;
        } else {
            return false;
        }
    }
};
template<typename _T1, typename _T2, typename _T3>
constexpr tripple<typename std::__decay_and_strip<_T1>::__type,
                  typename std::__decay_and_strip<_T2>::__type,
                  typename std::__decay_and_strip<_T3>::__type> 
    make_tripple(_T1&& __x, _T2&& __y, _T3&& __z) {
        typedef typename std::__decay_and_strip<_T1>::__type __ds_type1;
        typedef typename std::__decay_and_strip<_T2>::__type __ds_type2;
        typedef typename std::__decay_and_strip<_T3>::__type __ds_type3;
        typedef tripple<__ds_type1, __ds_type2, __ds_type3> __tripple_type;
    return __tripple_type(std::forward<_T1>(__x), std::forward<_T2>(__y), std::forward<_T3>(__z));
    }
}
