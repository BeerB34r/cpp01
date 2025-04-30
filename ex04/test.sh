#!/usr/bin/env sh

FILENAME="lorem.ipsum"
PARAGRAPHS=100
BIN="MySed"

if [ ! -f ${BIN} ]
then
	make
fi

if [ ! -f ${FILENAME} -o ! -r ${FILENAME} ]
then
	curl http://metaphorpsum.com/paragraphs/${PARAGRAPHS} > ${FILENAME}
fi

echo "common words are:"
cat ${FILENAME} | tr ' ' '\n' | sort | uniq -c | sort -nr | head -n 10

echo "Note: this test uses sed directly and compares the output to that of the cpp program. using a pattern or replacement with metacharacters will therefore have unexpected results. in particular, do not use the asterisk, period, space, tab, or backslash characters"
echo -n "Pattern:"
read -r PATTERN
echo -n "Replacement:"
read -r REPLACE

echo "s/${PATTERN}/${REPLACE}/g"

sed "s/${PATTERN}/${REPLACE}/g" ${FILENAME} > ${FILENAME}.sedout
./${BIN} "${FILENAME}" "${PATTERN}" "${REPLACE}"

if diff "${FILENAME}.replace" "${FILENAME}.sedout"
then
	echo "${FILENAME}.replace == ${FILENAME}.sedout"
fi
