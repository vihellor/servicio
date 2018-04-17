cd /etc
touch prueba1
if [ "$?" -ne 0 ]; then
	echo "error en touch"
fi

