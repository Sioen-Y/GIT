git remote add pg git://github.com/sioen/tc.git // 添加一个新的远程库，pg是repo默认的branch名字，类似origin, origin/master变成 pg/master
git remote rename
git remote rm 

git tag //显示tag
git tag -l 'v1.4.2.*'
git tag -a v1.4 -m 'my version 1.4'
git tag -a v1.4 [commits]
git tag v1.4 [commits]
git push origin v1.5
git push origin --tags


git-completion.bash文件

git config --global alias.co checkout 
git config --global alias.br branch
git config --gloabl alias.visual '!gitk' // !表示非git子命令而是外部命令


git checkout -b hotfix
git checkout master
git merge hotfix
git branch -d hotfix

git reset filename // 撤销add的文件