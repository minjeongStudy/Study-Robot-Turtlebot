from setuptools import find_packages
from setuptools import setup

setup(
    name='kmj_msg_srv_action_interface',
    version='0.0.0',
    packages=find_packages(
        include=('kmj_msg_srv_action_interface', 'kmj_msg_srv_action_interface.*')),
)
