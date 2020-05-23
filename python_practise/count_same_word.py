# find the repeated word in a given sentence
import numpy as np
import collections

my_var = 'i know him and i and she are best friend of him to know the thing which we do not know'

words = my_var.split(' ')
print(words)

word_counts = collections.Counter(words)
for word, count in sorted(word_counts.items()):
    print('"%s" is repeated %d time%s.' % (word, count, "s" if count > 1 else ""))
