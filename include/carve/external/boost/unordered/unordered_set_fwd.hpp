
// Copyright (C) 2008-2009 Daniel James.
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_UNORDERED_SET_FWD_HPP_INCLUDED
#define BOOST_UNORDERED_SET_FWD_HPP_INCLUDED

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
# pragma once
#endif

#include <carve/external/boost/config.hpp>
#include <memory>
#include <functional>
#include <carve/external/boost/functional/hash_fwd.hpp>

namespace boost
{
    template <class Value,
        class Hash = hash<Value>,
        class Pred = std::equal_to<Value>,
        class Alloc = std::allocator<Value> >
    class unordered_set;
    template <class T, class H, class P, class A>
    bool operator==(unordered_set<T, H, P, A> const&,
        unordered_set<T, H, P, A> const&);
    template <class T, class H, class P, class A>
    bool operator!=(unordered_set<T, H, P, A> const&,
        unordered_set<T, H, P, A> const&);
    template <class T, class H, class P, class A>
    void swap(unordered_set<T, H, P, A> &m1,
            unordered_set<T, H, P, A> &m2);

    template <class Value,
        class Hash = hash<Value>,
        class Pred = std::equal_to<Value>,
        class Alloc = std::allocator<Value> >
    class unordered_multiset;
    template <class T, class H, class P, class A>
    bool operator==(unordered_multiset<T, H, P, A> const&,
        unordered_multiset<T, H, P, A> const&);
    template <class T, class H, class P, class A>
    bool operator!=(unordered_multiset<T, H, P, A> const&,
        unordered_multiset<T, H, P, A> const&);
    template <class T, class H, class P, class A>
    void swap(unordered_multiset<T, H, P, A> &m1,
            unordered_multiset<T, H, P, A> &m2);
}

#endif
