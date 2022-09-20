#/bin/bash
git add .
echo Enter commit name:
read comname
git commit -m "$comname"
git config --global user.email "robe*****31@gmail.com"
git config --global user.name "Roberts Jakovlevs"
printf 'roberts7531\n' | git push

