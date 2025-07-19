FT_USER=justvzyt

# array with users
arr=()
for el in $(id -nG $FT_USER)
do
arr+=($el)
done

# print all elements expect the last one
for el in $(seq 0 $((${#arr[@]} - 2)))
do
printf "${arr[$el]},"
done

# last element
printf "${arr[$((${#arr[@]} - 1))]}"
