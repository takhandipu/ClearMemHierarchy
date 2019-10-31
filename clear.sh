# Clearing Linux Caches
sync && echo 3 | sudo tee /proc/sys/vm/drop_caches

g++ clear.cpp
CORENUM=$(grep -c ^processor /proc/cpuinfo)
for(( i=0; i < CORENUM; i++))
do
  taskset -c $i ./a.out &
done

sync && echo 3 | sudo tee /proc/sys/vm/drop_caches
