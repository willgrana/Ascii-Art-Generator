# WG-DG-MPL-Final-Project
Our MPL project uses C++ to ask a few questions to determine the right basketball player for you.
Once you have answered the questions, one of eight basketball players is selected and the
function writes the name of an image containing their picture to a file player.txt. The C++
code then calls a python script to display the image of the basketball player as ascii art.

To use this program, you will need to install a python package called Pillow. This library
allows for image manipulation in python3. To install this package do the following:

For mac, run these two commands:
    python3 -m pip install --upgrade pip,
    python3 -m pip install --upgrade Pillow

For windows, run these two commands:
    python3 -m pip install --upgrade pip,
    python3 -m pip install --upgrade Pillow

The code for the ascii art generator can be found at this link: https://gist.github.com/Ronald-TR/1bb452206b97b470a2b74942de984acf

I took this code and then modified the main function to fit our needs in this program. The main
function in the python engine reads the name of the image file from player.txt and then prints
the ascii image. The python code also utilizes the OS library to find the path of the project file
and then uses this to find the relative path of the player.txt file.