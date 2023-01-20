# a script that authomatically push my work to remote (github)

#!/bin/bash
# script that adds all files, commit and push to github
echo "please input your commit message"
read MESSAGE
git add .
git commit -m "$MESSAGE"
git push
