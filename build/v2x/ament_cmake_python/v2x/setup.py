from setuptools import find_packages
from setuptools import setup

setup(
    name='v2x',
    version='0.0.0',
    packages=find_packages(
        include=('v2x', 'v2x.*')),
)
