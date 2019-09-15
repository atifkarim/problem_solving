import sys
if sys.version_info[0] < 3:
    from Tkinter import *
else:
    from tkinter import *


import pandas as pd
import matplotlib
matplotlib.use('TkAgg')
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
from matplotlib.figure import Figure
import tkinter.filedialog


class create_gui:
    def __init__(self):
        self.window = window
        self.canvas = None

        self.a = None

        self.pltbrowserButton = Button(window, text='Browse plt file', width=6, command=self.browse_plt_file)
        self.pksbrowserButton = Button(window, text='Browse pks file', width=6, command=self.browse_pks_file)
        self.button = Button(window, text="counts_observed", command=self.plot_observed)
        self.button_1 = Button(window, text="background", command=self.plot_background)
        self.button_2 = Button(window, text="calculated counts", command=self.plot_calculated_counts)
        self.button_3 = Button(window, text="calculated phase", command=self.plot_phase)
        self.button_4 = Button(window, text="combined graph", command=self.plot_combined)
        self.button_5 = Button(window, text="difference", command=self.plot_difference)
        self.button_6 = Button(window, text="combined pks", command=self.plot_pks_combined)
        self.clearCanvas = Button(window, text="clear canvas",fg='black', bg='red', command=self.clearPlotPage)
        self.quitbutton = Button(window, text="close program",fg='black', bg='green', command=window.destroy)

        self.pltbrowserButton.pack(side=TOP, expand=True, fill=BOTH, padx=5, pady=5)
        self.pksbrowserButton.pack(side=TOP, expand=True, fill=BOTH, padx=5, pady=5)
        self.button.pack(side=TOP, expand=True, fill=BOTH, padx=5, pady=5)
        self.button_1.pack(side=TOP, expand=True, fill=BOTH, padx=5, pady=5)
        self.button_2.pack(side=TOP, expand=True, fill=BOTH, padx=5, pady=5)
        self.button_3.pack(side=TOP, expand=True, fill=BOTH, padx=5, pady=5)
        self.button_4.pack(side=TOP, expand=True, fill=BOTH, padx=5, pady=5)
        self.button_5.pack(side=TOP, expand=True, fill=BOTH, padx=5, pady=5)
        self.button_6.pack(side=TOP, expand=True, fill=BOTH, padx=5, pady=5)
        self.clearCanvas.pack(side=TOP, expand=True, fill=BOTH, padx=5, pady=5)
        self.quitbutton.pack(side=TOP, expand=True, fill=BOTH, padx=5, pady=5)

    def browse_plt_file(self):
        if 2 > 1:
            self.fname = tkinter.filedialog.askopenfilename(filetypes=(("Template files", "*.type"), ("All files", "*")))
            print(self.fname)

            plt_name = ['angle', 'counts_observed', 'sum_calculated_counts', 'calculated_counts_background',
                        'calculated_counts_of_every_single_phase']
            df_plt = pd.read_csv(self.fname, sep=r"\s+", skiprows=1, header=None, names=plt_name)
            print(df_plt.shape)
            df_plt['scaled_counts_observed'] = df_plt['counts_observed'] / 1000
            df_plt['scaled_calculated_counts_background'] = df_plt['calculated_counts_background'] / 1000
            df_plt['scaled_sum_calculated_counts'] = df_plt['sum_calculated_counts'] / 1000
            df_plt['scaled_calculated_counts_of_every_single_phase'] = df_plt[
                                                                           'calculated_counts_of_every_single_phase'] / 1000

            global angle_1, count_obs_1, calc_count_back_1, calc_counts_1, calc_count_phase_1, difference

            difference = df_plt['scaled_counts_observed'] - df_plt['scaled_sum_calculated_counts']
            angle_1 = df_plt['angle']
            count_obs_1 = df_plt['scaled_counts_observed']
            calc_count_back_1 = df_plt['scaled_calculated_counts_background']
            calc_counts_1 = df_plt['scaled_sum_calculated_counts']
            calc_count_phase_1 = df_plt['scaled_calculated_counts_of_every_single_phase']

    def browse_pks_file(self):
        if 2 > 1:
            self.fnamepks = tkinter.filedialog.askopenfilename(filetypes=(("Template files", "*.type"), ("All files", "*")))
            print(self.fnamepks)

            pks_name = ['phasenumber', 'Kalpha', 'angle', 'h', 'k', 'l']
            df_pks = pd.read_csv(self.fnamepks, sep=r"\s+", skiprows=1, header=None, names=pks_name)

            print(df_pks.shape)
            global angle_pks, phasenumber, Kalpha, h, k ,l
            angle_pks = df_pks['angle']
            phasenumber = df_pks['phasenumber']
            Kalpha = df_pks['Kalpha']
            h = df_pks['h']
            k = df_pks['k']
            l = df_pks['l']

    def plot_observed(self):
        fig = Figure(figsize=(10, 4))
        self.a = fig.add_subplot(111)
        self.a.plot(angle_1, count_obs_1, color='red')
        self.a.set_title("angle vs observed", fontsize=16)
        self.a.set_ylabel("counts_observed", fontsize=14)
        self.a.set_xlabel("angle", fontsize=14)
        self.canvas = FigureCanvasTkAgg(fig, master=self.window)
        self.canvas.get_tk_widget().pack()
        print('successfully plotted')

    def plot_background(self):
        fig = Figure(figsize=(10, 4))
        self.a = fig.add_subplot(111)
        self.a.plot(angle_1, calc_count_back_1, color='red')
        self.a.set_title("angle vs background", fontsize=16)
        self.a.set_ylabel("background", fontsize=14)
        self.a.set_xlabel("angle", fontsize=14)
        self.canvas = FigureCanvasTkAgg(fig, master=self.window)
        self.canvas.get_tk_widget().pack()
        print('successfully plotted')

    def plot_calculated_counts(self):
        fig = Figure(figsize=(10, 4))
        self.a = fig.add_subplot(111)
        self.a.plot(angle_1, calc_counts_1, color='red')
        self.a.set_title("angle vs calculated_counts", fontsize=16)
        self.a.set_ylabel("calculated_counts", fontsize=14)
        self.a.set_xlabel("angle", fontsize=14)
        self.canvas = FigureCanvasTkAgg(fig, master=self.window)
        self.canvas.get_tk_widget().pack()
        print('successfully plotted')

    def plot_phase(self):
        fig = Figure(figsize=(10, 4))
        self.a = fig.add_subplot(111)
        self.a.plot(angle_1, calc_count_phase_1, color='red')
        self.a.set_title("angle vs calculated_counts_phase", fontsize=16)
        self.a.set_ylabel("calculated_counts_phase", fontsize=14)
        self.a.set_xlabel("angle", fontsize=14)
        self.canvas = FigureCanvasTkAgg(fig, master=self.window)
        self.canvas.get_tk_widget().pack()
        print('successfully plotted')

    def plot_combined(self):
        fig = Figure(figsize=(10, 4))
        self.a = fig.add_subplot(111)
        self.a.plot(angle_1, count_obs_1, color='red')
        self.a.plot(angle_1, calc_count_back_1, color='yellow')
        self.a.plot(angle_1, calc_counts_1, color='green')
        self.a.plot(angle_1, calc_count_phase_1, color='black')
        self.a.set_title("combined", fontsize=16)
        self.a.set_ylabel("ALL columns", fontsize=14)
        self.a.set_xlabel("angle", fontsize=14)
        self.canvas = FigureCanvasTkAgg(fig, master=self.window)
        self.canvas.get_tk_widget().pack()
        print('successfully plotted')

    def plot_difference(self):
        fig = Figure(figsize=(10, 4))
        self.a = fig.add_subplot(111)
        self.a.plot(angle_1, difference, color='red')
        self.a.set_title("angle vs difference of count observed and count calculated", fontsize=16)
        self.a.set_ylabel("difference", fontsize=14)
        self.a.set_xlabel("angle", fontsize=14)
        self.canvas = FigureCanvasTkAgg(fig, master=self.window)
        self.canvas.get_tk_widget().pack()
        print('successfully plotted')

    def plot_pks_combined(self):
        fig = Figure(figsize=(10, 4))
        self.a = fig.add_subplot(111)
        self.a.plot(angle_pks, phasenumber, color='red')
        self.a.plot(angle_pks, Kalpha, color='yellow')
        self.a.plot(angle_pks, h, color='green')
        self.a.plot(angle_pks, k, color='black')
        self.a.plot(angle_pks, l, color='orange')
        self.a.set_title("combined pks", fontsize=16)
        self.a.set_ylabel("ALL columns", fontsize=14)
        self.a.set_xlabel("angle_pks", fontsize=14)

        self.canvas = FigureCanvasTkAgg(fig, master=self.window)
        self.canvas.get_tk_widget().pack()
        print('successfully plotted')


    def clearPlotPage(self):
        print('Hurrah !!!')
        #         self.canvas.get_tk_widget().delete("all")
        self.canvas.get_tk_widget().destroy()
        print("Plot Page has been cleared")


window = Tk()
window.title('test_gui')
start = create_gui()

window.mainloop()