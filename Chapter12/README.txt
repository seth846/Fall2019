** BEFORE YOU BEGIN EDITING ANY FILES
You will create a git branch to make all edit in chapter 12 to.
This will be different than the branch you use for chapter 11 edits.

To create the chapter 12 do the following

	#switch to master branch
	git checkout master

	#create new branch
	git branch chapter12

	#switch to new branch
	git checkout chapter12

You can now edit this branch as usual

** Switching branches
You will need to switch branches to modify chapter11 or to sync with upstream(my repo)
	# To see current branch
	git branch

	# Switch branch to chapter11
	git checkout chapter11

	#Switch to master branch (used for sychronizing)
	git checkout master

You can now edit the branch that you are on. DON'T EDIT MASTER BRANCH EXCEPT FOR WHEN SYNCHRONIZING

If it gives you an error about needing to commit or stash changes you have two options
	
	# 1) Commit your changes
	git add -A
	git commit -m"  "

	# 2) if you are not ready to commit, stash your changes 
	git stash --all

	# when you come back to this branch you can reapply the changes you stashed
	git stash pop 

** Synchronizing with upstream
First you will sync your master branch,
then merge these changes into your other branches

	# Go to master branch
	git checkout master

	# Get all updates
	git pull upstream/master master

	# Now need to merge changes on individual branches
	git checkout branch_name

	# Merge changes from master into branch_name
	git merge master
	
** Pushing to github
Only difference is that we will need to push an individual branch or all branches

	# push all branches to github
	git push origin --all

	# push specific branch to github
	git push origin branch_name



