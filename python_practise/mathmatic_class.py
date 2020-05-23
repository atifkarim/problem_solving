import numpy as np
import math


class Mathmatics(object):
    def __init__(self, x_input, y_input):
        self.x_input = x_input
        self.y_input = y_input

        print('hi -----',self.x_input)

    def sum(self,a,b):

        X = self.x_input
        self.a = a
        number=3
        sum_result = X+a+b* number
        self.res = sum_result

        f = self.do_square(4)
        print('f val: ', f)
        print('sum res: ',sum_result)

        return sum_result

    def do_square(self,n1):

        e = self.a*2
        # num_1 = self.res
        sqr = n1*5+e
        return sqr


my_math = Mathmatics(3,2)
a=5
b=4
my_math.sum(a,b)
my_math.do_square(3)



