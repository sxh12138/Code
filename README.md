# 一、Windows-Terminal

## 1.1 oh-my-posh

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

## 1.2 ssh

```shell
$ ssh-keygen -t rsa -b 4096 -C "shiyuhanga@163.com" # 生成密钥对
$ cat ~/.ssh/id_rsa.pub # 查看公钥并手动复制到 GitHub 仓库中
$ ssh -T git@github.com # 测试连接
```

## 1.3 git

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

# 二、WSL-Arch

## 2.1 wsl2

### 2.1.1 wsl 常用命令

```shell
版权所有 (c) Microsoft Corporation。保留所有权利。
有关此产品的隐私信息，请访问 https://aka.ms/privacy。

用法: wsl.exe [参数] [选项...][命令行]

运行 Linux 二进制文件的参数:

    如果未提供命令行，wsl.exe 将启动默认 shell。

    --exec, -e <CommandLine>
        在不使用默认 Linux shell 的情况下执行指定的命令。

    --shell-type <standard|login|none>
        使用提供的 shell 类型执行指定的命令。

    --
        按原样传递剩余的命令行。

选项:
    --cd <Directory>
        将指定目录设置为当前工作目录。
        如果使用 ~，则将使用 Linux 用户的主路径。如果路径以
        / 字符开始，它将解释为绝对 Linux 路径。
        否则，该值必须是绝对 Windows 路径。

    --distribution, -d <Distro>
        运行指定的分发版。

    --user, -u <UserName>
        以指定用户身份运行。

    --system
        为系统分发版启动 shell。

用于管理适用于 Linux 的 Windows 子系统的参数:

    --help
        显示使用情况信息。

    --debug-shell
        出于诊断目的打开 WSL2 调试 shell。

    --install [发行版] [选项...]
        安装适用于 Linux 的 Windows 子系统分发版。
        有关有效分发版的列表，请使用 'wsl.exe --list --online'。

        选项:
            --no-launch, -n
                安装后不要启动分发版。

            --web-download
                从 Internet 而不是 Microsoft Store 下载分发版。

            --no-distribution
                仅安装所需的可选组件，不安装分发版。

            --enable-wsl1
                启用 WSL1 支持。

    --manage <Distro> <Options...>
        更改发行版特定选项。

        选项:
            --move <Location>
                将分发移到新位置。

            --set-sparse, -s <true|false>
                将发行版的 vhdx 设置为稀疏，从而允许自动回收磁盘空间。

    --mount <Disk>
        在所有 WSL 2 分发版中附加和装载物理磁盘或虚拟磁盘。

        选项:
            --vhd
                指定 <Disk> 引用虚拟硬盘。

            --bare
                将磁盘附加到 WSL2，但不要装载它。

            --name <Name>
                使用装入点的自定义名称装载磁盘。

            --type <Type>
                装载磁盘时要使用的文件系统(如果未指定)默认为 ext4。

            --options <Options>
                其他装载选项。

            --partition <Index>
                要装载的分区的索引(如果未指定)默认为整个磁盘。

    --set-default-version <Version>
        更改新分发版的默认安装版本。

    --shutdown
        立即终止所有正在运行的分发版和 WSL 2
        轻型实用工具虚拟机。

    --status
        显示适用于 Linux 的 Windows 子系统状态。

    --unmount [磁盘]
        从所有 WSL2 分发版中卸载和分离磁盘。
        如果在没有参数的情况下调用，则卸载和分离所有磁盘。

    --uninstall
        从此计算机卸载适用于 Linux 的 Windows 子系统包。

    --update
        更新适用于 Linux 的 Windows 子系统包。

        选项:
            --pre-release
                下载预发行版本(如果可用)。

    --version, -v
        显示版本信息。

用于在适用于 Linux 的 Windows 子系统中管理分发版的参数:

    --export <Distro> <FileName> [选项]
        将分发版导出到 tar 文件。
        文件名可以是 - for stdout。

        选项:
            --vhd
                指定应将分发版导出为 .vhdx 文件。

    --import <Distro> <InstallLocation> <FileName> [选项]
        将指定的 tar 文件作为新分发版导入。
        文件名可以是 - for stdin。

        选项:
            --version <Version>
                指定要用于新分发的版本。

            --vhd
                指定所提供的文件是 .vhdx 文件，而不是 tar 文件。
                此操作在指定的安装位置创建 .vhdx 文件的副本。

    --import-in-place <Distro> <FileName>
        将指定的 .vhdx 文件作为新分发版导入。
        必须使用 ext4 文件系统类型设置此虚拟硬盘的格式。

    --list, -l [选项]
        列出分发版。

        选项:
            --all
                列出所有分发版，包括当前
                正在安装或卸载的分发版。

            --running
                仅列出当前正在运行的分发版。

            --quiet, -q
                仅显示分发版名称。

            --verbose, -v
                显示有关所有分发版的详细信息。

            --online, -o
                显示适合通过 'wsl --install' 安装的可用分发版列表。

    --set-default, -s <Distro>
        将分布版设置为默认值。

    --set-version <Distro> <Version>
        更改指定分发版的版本。

    --terminate, -t <Distro>
        终止指定的分发版。

    --unregister <Distro>
        取消注册分发版并删除根文件系统。
```

### 2.2.2 配置 wsl

```shell
$ cd && notepad++ .wslconfig
```
