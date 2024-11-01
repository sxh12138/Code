# 一、Windows-Terminal

## 1.1 安装配置 oh-my-posh

```shell
$ winget install JanDeDobbeleer.OhMyPosh -s winget # 使用 winget 自动下载安装
$ exit # 退出重启
$ oh-my-posh config export --output ~/.mytheme.omp.json # 导出默认配置文件到主目录下
$ cd && notepad++ .mytheme.omp.json # 修改配置文件去掉时间以及 bash 提示符
$ New-Item -Path $PROFILE -Type File -Force # 创建 $PROFILE 文件
$ notepad $PROFILE # 编写配置文件，加入下面这行以启动 oh-my-posh
oh-my-posh init pwsh --config ~/.mytheme.omp.json | Invoke-Expression
$ . $PROFILE # 应用配置文件
$ oh-my-posh upgrade # 升级命令
```

## 1.2 配置 ssh

```shell
$ ssh-keygen -t rsa -b 4096 -C "shiyuhanga@163.com" # 生成密钥对
$ cat ~/.ssh/id_rsa.pub # 查看公钥并手动复制到 GitHub 仓库中
$ ssh -T git@github.com # 测试连接
```

## 1.3 配置 git

```shell
$ git config --global user.name "winsxh" # 配置用户名
$ git config --global user.email "shiyuhanga@163.com" # 配置邮箱
$ git config --global color.ui true # 配置颜色
$ git config --global init.defaultBranch main # 配置默认分支名
$ git config --global help.autocorrect 1 # 配置命令自动更正
$ git config --global http.proxy 'http://127.0.0.1:7890' # 配置本地代理
$ git config --global https.proxy 'https://127.0.0.1:7890' # 配置本地代理
$ git config --list # 列出配置
$ cd D:/ && git clone https://github.com/sxh12138/Code.git # 克隆远程仓库到本地
$ cd D:/Code # 进入仓库修改代码
$ git branch # 查看本地分支名称
$ git branch -r # 查看远程分支名称
$ git branch -m <old-name> <new-name> # 修改分支名称
$ git branch --set-upstream-to=origin/main # 跟踪远程分支
$ git remote add origin https://github.com/sxh12138/Code.git # 设置远程仓库，通常是自己新建的仓库第一次连接远程才需要，本项目是克隆下来的，所以不需要
$ git add . # 暂存所有更改
$ git commit -m "1" # 添加提交信息
$ git push -u origin main --force # 强制推送到远程，工作中不推荐，个人学习无所谓
```

