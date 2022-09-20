#/bin/bash
git add .
if git commit -m "$1" ;
then
	git config --global user.email "robe*****31@gmail.com"
	git config --global user.name "Roberts Jakovlevs"
	git push https://roberts7531@github.com/roberts7531/RTR105
fi
