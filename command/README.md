# progintro-hw0--MariosGatos-BanditExplanations
Bandit0: 
Username: bandit0 and the password is also bandit0.


Bandit1:
While logged in the bandit0 user I used "ls" command to see it's files. The "ls"    showed that there is a file named "readme". I read the file using "cat" so i executed the "cat readme" and it contained the password. 


Bandit2:
I ran "ls" to see the files and then I ran the command "cat <-" and it shoed me the password.


Bandit3:
First i used "ls"to see the files then it showed me "spaces in this filename" and then i run the command cat "spaces in this filename" and it gave me the password.


Bandit4:
I ran "ls" to see the files and directories and it shoed me the inhere directorty then I ran "cd inhere/" to move into the inhere folder.Then I ran "ls -a" to see all of the hidden files.The hidden file is named ".hidden" and after running "cat .hidden" it showed me the password.


Bandit5:
I run "ls" to see the folder like before then I used "cd" into the folder and saw all of the files. then to find the ascii text i used "for x in {0..9}; do file ./-file0$x; done" and it showed me thath the file07 is the human readable file.Then i used "cat <-ifile07" to open file07 and it contained the password.  


Bandit6:
I run "ls" to see the folder "inhere" then I "cd" into the inhere folder and ran "ls" again to see the files and folders and came up 20 of them.Then i used the "find" command to find the one I want and i included all the clues given so i did 
"find -type f -size 1033c ! -executable" and it gave me "./maybehere07/.file2" which i then cat so basically "cat ./maybehere07/.file2" and it gave me the password. 


Bandit7:
After failed "ls" uses eventually i used the information given and i run the "find" command like this "find / -user bandit7 -group bandit6 -size 33c" and since i was denied Permision to bandit7 password i used "2>/dev/null" also so i run again 
"find / -user bandit7 -group bandit6 -size 33c 2>/dev/null" and then i used 
"cat /var/lib/dpkg/info/bandit7.password" to open the directory and i showed me the password. 


Bandit8:
I run "ls" to see the file "data.txt" then i used "cat data.txt | grep millionth" in order to open the data.txt file and to also find the word millionth which contained the password.


Bandit9:
I run "ls" to see the file "data.txt" then i used "sort data.txt | uniq -u" to sort the data.txt alphabetically and after remove the duplicates and the output was the password.


Bandit10:
I run "ls" to see the file "data.txt" then i used "cat data.txt | strings | grep =" to find which strings begin with "=" and one of them was the password.


Bandit11:
I run "ls" to see the file "data.txt" then i used "cat data.txt | base 64" to find the base64 encoded data but it gave me an error message so i also put "--decode" to decode the file.Finally i run again "cat data.txt | base64 --decode" and it gave me the last password.
