# %%
import onion as onn
import numpy as np

a = np.array([[1, 2, 3], [4, 5, 6]], np.int32)
b = np.array([[7, 8, 9], [10, 11, 12]], np.int32)

print(onn.add(a, b))

my_pet = onn.Pet("Harry")
print(my_pet.getName())
my_pet.name = "Harry Jun."
print(my_pet.name)
