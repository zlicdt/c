# Git 简单实用教程

大量CDS不会用Git. 请看

https://blog.zlicdt.top/2024/08/21/git-guide/

如果懒得看，我这里假设你的操作系统是Windows 10 22H2以上

```cmd
winget install --id Git.Git -e --source winget
```

网络好的话就装好了。

打开cmd或者PowerShell（开始菜单里搜索或win+R）

```cmd
git clone https://github.com/zlicdt/c.git
```

就可以了。

改了什么东西就

```cmd
git add .
git commit -m "随便写"
```

不要学别人的`git push`。这是我的仓库，别人推不上来。

当然你也可以 fork 我这个仓库，这样就能推到那个 fork 上。