from distutils.core import setup
from Cython.Build import cythonize

setup(ext_modules = cythonize(

    "helloer.pyx",
    sources=["helloer.pyx" ,"HelloWorlder.cpp"],
    language="c++",

))