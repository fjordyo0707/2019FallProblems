#! /bin/sh
NUM_CASE=$1
NUM_IN_CASE=1000
PREFIX_NAME="g_case_"
SAVE_PLACE="./inputs/"
GT_PLACE="./expected/"

for (( i=1; i<=${NUM_CASE}; i+=1 ))
do
	test_file="${SAVE_PLACE}${PREFIX_NAME}${i}"
	gt_file="${GT_PLACE}${PREFIX_NAME}${i}"
	shuf -i 1-${NUM_IN_CASE} -o ${test_file}
	sort -n ${test_file} > ${gt_file}
	echo "The file has ${NUM_IN_CASE} integers" | cat - ${gt_file} > temp && mv temp ${gt_file}

done
