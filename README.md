# Image-processing-through-open cv-in-c++-
This repository contains c++ code that can rotate an image according to the angle given by the user .This is a Project Of Open CV in C++ through which one can rotate the image at a particular angle.<br/>
This project consists of following configurations and softwares:<br/>
1: Visual Studio Code<br/>
2: c++ compiler in VS Code.<br/>
3: System must have Open CV installed.<br/>
main():This is the function from which the code starts running.In this function  enter the path of image and angle  by user.Image is rotated at any direction i.e. clockwise and anticlockwise(positive angle for anticlockwise and negative angle for clockwise).If user enter the wrong path of image then it shows "error !!! no image....".If user enter right 
path of image but image is not preasent at this path then it shows "error !!! no image...." otherwise show the both images(i.e. original  image and and rotated image).
we will first make at object of rotated image matrix and then pass it to inbuilt function Point2f of Open CV which indicates from which point we have to rotate we will pass the rows as well as the columns of the inputted matrix from where to rotate i.e (src.cols - 1) / 2.0, (src.rows - 1) / 2.0.Then we will pass the required result of former function to getRotationMatrix2D which store the object of resultant image after rotation.This function will have an angle,and an isometric point and the object of Point2f function .Finally we will use wrapAffine() function of openCV which will applie an affine transforation to image and then return the object of rotated image and original image.<br/>
In my case my image is in the file at "images" folder so i have to input Path of  image is " ./images/image.webp" and angle is "-45" .<br/>
In my case If you see the rotated image at an angle of -45 then open the rotated_image.webp and If you see the original image then open the image.webp file <br/>  
NOTE:image extensions can be jpg,png,jpeg,webp etc.
