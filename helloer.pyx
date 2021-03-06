from libcpp.string cimport string

cdef extern from "HelloWorlder.h":
    cdef cppclass HelloWorlder:
        HelloWorlder(string)
        string name
        void sayHello()

cdef class PyHelloWorlder:
    cdef HelloWorlder* thisptr
    def __cinit__(self, string theName):
        self.thisptr = new HelloWorlder(theName)
    def __dealloc__(self):
        del self.thisptr
    def sayHello(self):
        return self.thisptr.sayHello()