import os

os.system('sudo rm /var/lib/apt/lists/lock')
os.system('sudo rm /var/cache/apt/archives/lock')
os.system('sudo rm /var/lib/dpkg/lock')
os.system('sudo dpkg --configure -a')
