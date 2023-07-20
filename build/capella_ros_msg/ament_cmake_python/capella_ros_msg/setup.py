from setuptools import find_packages
from setuptools import setup

setup(
    name='capella_ros_msg',
    version='0.0.0',
    packages=find_packages(
        include=('capella_ros_msg', 'capella_ros_msg.*')),
)
