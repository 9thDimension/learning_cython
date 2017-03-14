from distutils.core import setup, Extension
from Cython.Build import cythonize

setup(ext_modules = cythonize(Extension(

    "helloer.pyx",
    sources=["helloer.pyx" ,"HelloWorlder.cpp"],
    language="c++",

)))