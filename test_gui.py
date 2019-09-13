
#just for posting ques, loading of dataframe is not included

import matplotlib
matplotlib.use('TkAgg')
import numpy as np
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
from matplotlib.figure import Figure
from tkinter import *

class create_gui:
    def __init__(self):
        self.canvas = None
        self.a = None

        self.window = window
        self.button = Button (window, text="counts_observed", command=self.plot_observed)
        self.button_1 = Button (window, text="background", command=self.plot_background)
        self.quitbutton = Button(window, text = "close program", command = window.destroy)
        
        
        self.clearCanvas = Button(window, text = "clear canvas", command = self.clearPlotPage)
        self.frame = Frame(self.canvas)
        self.frame.pack()
        self.label = Label(self.frame, text="I'll be destroyed soon!")
        self.label.pack()
        
        self.button.pack(side = TOP, expand = True, fill = BOTH, padx=5, pady=5)
        self.button_1.pack(side = TOP, expand = True, fill = BOTH, padx=5, pady=5)
        self.quitbutton.pack(side = TOP, expand = True, fill = BOTH, padx=15, pady=5)
        self.clearCanvas.pack(side = TOP, expand = True, fill = BOTH, padx=15, pady=5)

    def plot_observed (self):
        if self.canvas == None:
            global angle
            global count_obs
            fig = Figure(figsize=(4,4))
            self.a = fig.add_subplot(111)
            self.a.plot(angle, count_obs,color='red')
            self.a.set_title ("angle vs observed", fontsize=16)
            self.a.set_ylabel("counts_observed", fontsize=14)
            self.a.set_xlabel("angle", fontsize=14)
            self.canvas = FigureCanvasTkAgg(fig, master=self.window)
            self.canvas.get_tk_widget().pack()
        
            print('successfully plotted')
        else:
            ('plot already exists please clear it')
        
    def plot_background (self):
        if self.canvas == None:
    
            global angle
            global calc_count_back
            fig = Figure(figsize=(4,4))
            self.a = fig.add_subplot(111)
            self.a.plot(angle, calc_count_back,color='red')
            self.a.set_title ("angle vs background", fontsize=16)
            self.a.set_ylabel("background", fontsize=14)
            self.a.set_xlabel("angle", fontsize=14)

            self.canvas = FigureCanvasTkAgg(fig, master=self.window)
            self.canvas.get_tk_widget().pack()
            print('successfully plotted')
        else:
            ('plot already exists please clear it')
        
    def clearPlotPage(self):
        print('Hurrah !!!')
        self.frame.destroy()
#         self.canvas.delete("all")
#         self.canvas.destroy()
        self.canvas = None
        print("Plot Page has been cleared")

window= Tk()
window.title('test_gui')
start= create_gui ()

window.mainloop()
