git remote add pg git://github.com/sioen/tc.git // ���һ���µ�Զ�̿⣬pg��repoĬ�ϵ�branch���֣�����origin, origin/master��� pg/master
git remote rename
git remote rm 

git tag //��ʾtag
git tag -l 'v1.4.2.*'
git tag -a v1.4 -m 'my version 1.4'
git tag -a v1.4 [commits]
git tag v1.4 [commits]
git push origin v1.5
git push origin --tags


git-completion.bash�ļ�

git config --global alias.co checkout 
git config --global alias.br branch
git config --gloabl alias.visual '!gitk' // !��ʾ��git����������ⲿ����


git checkout -b hotfix
git checkout master
git merge hotfix
git branch -d hotfix

git reset filename // ����add���ļ�