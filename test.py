#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sun Nov 17 22:41:03 2019

@author: yusef.wray
"""

import pandas as pd
from scipy.spatial import Voronoi, voronoi_plot_2d
import folium


stat_csv = pd.read_csv('stationLocations.csv')
print(stat_csv)