#!/usr/bin/env python
# -*- coding: utf-8 -*-


import sys
from setuptools import setup


setup(
    name='roman',
    version='0.1',
    py_modules=['roman'],
    setup_requires=['pytest', 'pytest-runner'],
    tests_require=['pytest', 'pytest-cov']
)
