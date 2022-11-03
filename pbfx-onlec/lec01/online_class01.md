---
title: Online class01
separator: <!--s-->
verticalSeparator: <!--v-->
theme: serif
highlightTheme: github
revealOptions:
  control: true
  progress: true
  width: 960
  height: 800
  margin: 0.04
  transition: 'convex'
  slideNumber: true
---

<!--slides 1-->
<div align="center"><font size="30">

**朋辈辅学 技能拾遗**

Online class 01 -- 十月网课

</font></div>

<div align="right"><font size="6">

Given by [Zicx](https://zicx.top/)

</font></div>

<div align="right"><font size="6">

Powered by [reveal.js](https://github.com/hakimel/reveal.js)

Nov 5, Sat.

Note: Test note.

</font></div>

<!--s-->

## **Review**

<!--v-->

<div align="center"><font size="30">

### **What we have learned?**

</font></div>

<font size="6">
<div align="left">

- **Git**
  - What is git?
  - How to use git?
    - GUI
    - CLI
  - Git CLI
    - Configuration(.gitconfig/.gitignore/.ssh)
    - Commit
    - Branch
    - Remote(pull/push/clone)
    - Log

</div><!-- .element: class="fragment" -->

<font size="6">
<div align="left">

- **Github**
  - Layout
  - Repo(star/fork/sync/clone/pull & push)
  - Github Pages

</div><!-- .element: class="fragment" -->

<!--s-->

## **Git Review**

<!--v-->


**Git - Version Control System**

<img src="/img/git_model.png" align="center"/>

<font size="6">
<div align="center">
Git model

<!--v-->


**Git - Version Control System**

<img src="./img/git_remote.png" align="center"/>

<font size="6">
<div align="center">
Local and remote

<!--v-->

**Git - Create**

```shell
# 创建一个新的本地存储库
$ git init [项目名称]

# 克隆存储库(代码仓库)
$ git clone <git_url>

# 将存储库克隆到指定目录
$ git clone <git_url> <folder_name>

# 将存储库克隆到指定目录，并指定分支
$ git clone <git_url> -b <branch_name> <folder_name>
```

<!--v-->

**Git - Modify & Commit**

```shell
# 在工作目录中显示当前Git状态
$ git status

# 暂存文件
$ git add [file]

# 暂存所有更改的文件
$ git add .

# 将所有暂存文件提交到版本化历史记录
$ git commit -m "commit message"

# 将所有跟踪的文件提交到版本化历史记录
$ git commit -am "commit message"

# 取消暂存文件，保留文件更改
$ git reset [file]

# 对比已修改但未暂存内容的差异
$ git diff
```

<!--v-->

**Git - Log & Inspect**

```shell
# 查看Git的版本
$ git --version
git version 2.38.0

# 显示当前活动分支的提交历史
$ git log [--graph]  # graph 参数可以以树状图的形式显示

# 显示当前活动分支的提交历史（更加简洁的列表形式）
$ git reflog

# 显示更改文件的提交
$ git show <file>
```

<!--v-->

**Git - Branch**

```shell
# 列出所有本地分支
$ git branch

# 列出所有分支（包括本地和远程）
$ git branch -av

# 切换到 a 分支
$ git checkout a

# 快速切换到上一个分支
$ git checkout -

# 创建一个名为 new_branch 的新分支并切换到该分支
$ git checkout -b new_branch

# 删除名为 my_branch 的分支
$ git branch -d my_branch

# 切换到分支 B 并将分支 A 合并到分支 B
$ git checkout branchB
$ git merge branchA
```

<!--v-->

**Git - Tag**

Tag is binded to commit.

```shell
# 获得远程Tag
$ git pull --tags

# 切换到某一个创建的Tag
$ git checkout tag_name

# 列出所有创建的Tag
$ git tag

# 创建一个新的Tag
$ git tag -a tag_name -m "tag message"

# 推送Tag到远程
$ git push --tags
```

<!--v-->

**Git - Remote**

```shell
# 添加一个 Git url 作为远程存储库
$ git remote add [alias] [url]

# 显示远程存储库的名称和对应的 git_url
$ git remote -v

# 删除远程存储库
$ git remote rm [repo_name]

# 从远程存储库获取所有分支
$ git fetch [alias]

# 将本地分支的提交同步到远程存储库的分支
$ git push <远程主机名> <本地分支名>:<远程分支名>

# 从远程分支获取并合并提交到本地
$ git pull

# 推送并重置远程分支
$ git push origin -u <new>
```

<!--v-->

**Git - Configuration**

```shell
# 设置提交和标签的信息
$ git config --global user.name "name"
$ git config --global user.email "email"

# 在文本编辑器中编辑全局配置文件
$ git config --global --edit

# 显示本地 repo 全局配置
$ git config --global --list
```

<!--v-->

**Git - Gitignore**

```shell
# 忽略某个目录下的所有文件
logs/*

# “！” 意思是不要忽略
!logs/.gitkeep

# 忽略 node_modules 文件夹
node_modules

# 忽略 SASS 配置文件
.sass-cache
```

<!--s-->

## **Github Review**

<!--v-->

<font size="10">
<div align="left">
Github

<img src="./img/github.png" align="center"/>

<!--v-->

<font size="10">
<div align="left">
Github

<img src="./img/github_layout.png" align="center"/>

<font size="6">
<div align="center">
Github Layout

<!--v-->

<font size="10">
<div align="left">
Github

<img src="./img/repo_layout.png" align="center"/>

<font size="6">
<div align="center">
Github repo

<!--s-->

## **The end**

### Questions?
