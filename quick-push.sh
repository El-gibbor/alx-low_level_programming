# a script that authomatically push my work to remote (github)

#!/bin/bash

echo "what is your commit message"

read MESSAGE

git add .

git commit -m "$MESSAGE"

git push
