#ifndef VECTOR_H
#define VECTOR_H

template <typename Tr>
class Vector {
    public:
        typedef typename Tr::T T;
        typedef typename Tr::Operation Operation;
             
    private:
        T* data;
        int dataSize = 0;

        int dimensions;
        int* dimensionSizes;

    public:
        Vector() : data(nullptr) {};
             
        Vector(int dimensions, int* dimensionSizes) : dimensions(dimensions), dimensionSizes(dimensionSizes) {
          for (int i=0; i<dimensions; i++) dataSize*=dimensionSizes[i];
          data = new T [dataSize];
        }
             
        Vector(int* dimensionSizes) :
        Vector(sizeof(dimensionSizes)/sizeof(dimensionSizes[0]), dimensionSizes) {}
        void set(T datum, int* coordinates); // TODO
             
        T get(int* coordinates); // TODO
};

#endif
