from distutils.core import setup, Extension
from Cython.Build import cythonize

setup(ext_modules = cythonize(Extension(

    "helloer",
    sources=["helloer.pyx" ,"HelloWorlder.cpp"],
    language="c++",

)))