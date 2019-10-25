# -*- coding: utf-8 -*-
"""
Created on Tue Oct 22 07:57:52 2019

@author: yusef
"""
#YUsef Wray
#Yusef.Wray25@myhunter.cuny.edu
import turtle
import random

trey = turtle.Turtle()
trey.speed(10)

for i in range(100):
    a = random.randrange(0,351,10)
    trey.left(a)
    trey.forward(30)
    