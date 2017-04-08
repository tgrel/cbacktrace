from setuptools import setup
from distutils.core import setup, Extension
 
cbacktrace = Extension('cbacktrace', sources=["cbacktrace.c"])
 
setup(name="cbacktrace", version=1.0,
description="After importing this module it will automatically print C-level backtrace on SEGFAULT",
ext_modules=[cbacktrace])
