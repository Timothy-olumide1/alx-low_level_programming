#!/bin/bash
git add .
echo "Enter Commit Message:"
read commit_msg
git commit -m "${commit_msg}"
echo "Meassage read successfully"
git push
