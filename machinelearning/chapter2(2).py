from matplotlib import pyplot as plt
from sklearn.datasets import load_iris
import numpy as np

features = features[~is_setosa]
labels = labels[~is_setosa]
virginica = (labels == 'virginica')