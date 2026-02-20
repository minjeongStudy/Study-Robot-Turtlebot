from setuptools import find_packages, setup

package_name = 'kmj_turtlebot_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='khj',
    maintainer_email='khj@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
          'turtle_move_controller=kmj_turtlebot_pkg.turtle_move_controller:main',
          'detect_obstacle=kmj_turtlebot_pkg.detect_obstacle:main',
          'turtle_server=kmj_turtlebot_pkg.turtle_server:main',
        ],
    },
)
