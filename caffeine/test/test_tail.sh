#!/bin/sh

echo "Removing test_tail.txt..."
rm -vf test_tail.txt

echo "Creating a new file (test_tail.txt)..."
touch test_tail.txt

echo "Sending caf_tail to background..."
./caf_tail test_tail.txt &

echo "Sending text to the file..."
for x in `seq 1 1 100`;
do
        echo "text line $x" >> "test_tail.txt"
        sleep 1
done
