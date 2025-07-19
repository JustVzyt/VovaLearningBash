a=$(find . -type f | wc -l)
b=$(find . -type d | wc -l)
echo $((a+b))
