// PR c++/60311
// { dg-do compile { target c++1y } }

template<void(*)(auto)> struct A {}; // { dg-error "auto" }

struct B {
  template<void(*)(auto)> struct A {}; // { dg-error "auto" }
};

template <typename T>
struct C {
  template<void(*)(auto)> struct A {}; // { dg-error "auto" }
};

using D = C<int>;
