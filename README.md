Fract'ol

Version: 3
Table of Contents

    Foreword
    Introduction
    Objectives
    Common Instructions
    Mandatory Part
        Rendering
        Graphic Management
    Bonus Part
    Submission and Peer-Evaluation

Foreword

Here's what Wikipedia has to say on hydraulic fracturing:
Hydraulic fracturing is the targeted disruption of geological formations with low permeability by means of high-pressure fluid injection to create micro-cracks and fracture the rock. This technique, unrelated to this project, has been developed for conventional and unconventional oil deposits.

This project, however, is not related to hydraulic fracturing and is focused on generating fractals.
Introduction

The term fractal was first used by mathematician Benoit Mandelbrot in 1974, derived from the Latin word "fractus" meaning "broken" or "fractured". A fractal is an abstract mathematical object whose pattern remains the same at every scale, seen in various natural phenomena like the romanesco cabbage. Now, it's your turn to generate some magnificent fractals!
Objectives

This project involves creating a basic computer graphics program using the MiniLibX library. This will familiarize you with:

    The MiniLibX library for creating windows, images, and handling events.
    The mathematical notion of complex numbers.
    Concepts of optimization in computer graphics.
    Event handling in graphical programs.

Common Instructions

    Your project must be written in C.
    Follow the Norm coding standards. Any norm error will result in a 0.
    Ensure your functions do not cause unexpected quits (segmentation fault, bus error, etc.).
    Free all heap-allocated memory space properly.
    Submit a Makefile that compiles your source files without relinking.
    The Makefile must include rules for $(NAME), all, clean, fclean, and re.
    Bonus features must be in separate files named _bonus.{c/h}.
    If using libft, include its sources and Makefile in a libft folder.

Mandatory Part

Program name: fractol
Turn in files: Makefile, *.h, *.c
Arguments: The type of fractal to display and any other available options
External functions allowed:

    open, close, read, write
    malloc, free, perror, strerror, exit
    All functions of the math library (-lm compiler option)
    All functions of the MiniLibX
    ft_printf and any equivalent functions you coded
    Libft authorized: Yes

Rendering

    The program must offer the Julia set and the Mandelbrot set.
    The mouse wheel zooms in and out almost infinitely, as is the principle of fractals.
    Create different Julia sets by passing different parameters to the program.
    If no or invalid parameters are provided, display a list of available parameters and exit properly.
    Use colors to show the depth of each fractal, with psychedelic effects if possible.

Graphic Management

    Display the image in a window.
    Ensure smooth window management (e.g., changing, minimizing).
    Pressing ESC must close the window and quit the program cleanly.
    Clicking the window's close button must also close the window and quit cleanly.
    Use MiniLibX images.

Bonus Part

While encouraged to develop original features, more interesting graphic projects await you later. Here are some bonus features:

    One additional fractal type.
    Zoom follows the mouse position.
    Move the view with arrow keys.
    Shift the color range.

Note: The bonus part will only be evaluated if the mandatory part is perfect (i.e., fully functional and meeting all requirements).
Submission and Peer-Evaluation

Submit your assignment in your Git repository as usual. Only the work inside your repository will be graded. Organize your files as you wish, as long as the mandatory files are included and comply with the requirements. Double-check the names of your files to ensure correctness.
