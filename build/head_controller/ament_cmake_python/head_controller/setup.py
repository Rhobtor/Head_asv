from setuptools import find_packages
from setuptools import setup

setup(
    name='head_controller',
    version='0.0.0',
    packages=find_packages(
        include=('head_controller', 'head_controller.*')),
)
