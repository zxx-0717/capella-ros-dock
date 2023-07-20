from setuptools import find_packages
from setuptools import setup

setup(
    name='capella_ros_service_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('capella_ros_service_interfaces', 'capella_ros_service_interfaces.*')),
)
