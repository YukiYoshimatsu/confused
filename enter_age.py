# -*- coding: utf-8 -*-
"""
Created on Tue Oct 22 11:25:35 2019

@author: yusef
"""
#Yusef Wray
#YUsef.Wray25@myhunter.cuny.edu

age = int(input('Enter your age: '))
while age < 0:
    print('You entered a negative number. Try again.')
    age = int(input('Enter your age: '))
print('You entered:', age)