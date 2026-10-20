# C/C++ 环境说明（D:/code）

> 配置日期：2026-10-09　工具链：VSCode + WinLibs MinGW-w64 (GCC 16.2.0)

---

## 一、工具链位置

| 工具 | 完整路径 |
| --- | --- |
| C 编译器 `gcc` | `D:\code\mingw64\bin\gcc.exe` |
| C++ 编译器 `g++` | `D:\code\mingw64\bin\g++.exe` |
| 调试器 `gdb` | `D:\code\mingw64\bin\gdb.exe` |

版本信息：`gcc (MinGW-W64 x86_64-ucrt-posix-seh, built by Brecht Sanders, r1) 16.2.0`

---

## 二、VSCode 怎么用

用 VSCode 打开 `D:\code` 文件夹，然后：

| 想做的事 | 操作 |
| --- | --- |
| 编译当前文件 | `Ctrl + Shift + B` |
| 编译并直接运行 | `Ctrl + Shift + B` → 选「C: 编译并运行当前文件」 |
| 调试当前文件（打断点） | `F5` |
| 只运行不调试 | `Ctrl + F5` |

> 编译产物和源文件同名同目录，例如 `hello.c` → `hello.exe`。
> 一个文件夹里放多个 `.c` 时，按 `Ctrl+Shift+B` 只编译**当前打开的那个**。

---

## 三、`.vscode/` 里都是什么

| 文件 | 作用 |
| --- | --- |
| `tasks.json` | 编译任务（gcc / g++ / 一键编译并运行） |
| `launch.json` | 调试配置（F5 时用，gdb + Intel 反汇编风格） |
| `c_cpp_properties.json` | 代码智能提示（补全、跳转、报错波浪线） |
| `settings.json` | 编辑器设置：UTF-8 编码、4 空格缩进、终端 UTF-8 |
| `extensions.json` | 推荐扩展清单 |

`mingw64/` 是编译器本体（约 940 MB），已在 `.gitignore` 里排除，**不会被提交进 git**。

---

## 四、常见问题

**Q1：终端里中文输出乱码？**
已统一走 UTF-8：源码保存为 UTF-8（VSCode 右下角确认），终端启动时自动 `chcp 65001`。
若在**系统 cmd / PowerShell 窗口**里直接双击运行 exe 乱码，属 Windows 旧代码页问题，不影响 VSCode 内使用。

**Q2：提示 `无法找到 gcc` / 波浪线报一堆红？**
检查 `D:\code\mingw64\bin\gcc.exe` 是否还在。若移动了编译器，需同步更新
`.vscode/tasks.json`、`launch.json`、`c_cpp_properties.json` 里的路径。

**Q3：想在任意命令行直接用 `gcc`？**
把 `D:\code\mingw64\bin` 加入用户环境变量 `Path`（可选，VSCode 里不需要）。

---

## 五、换电脑 / 重装后怎么恢复

1. **装编译器**（约 261 MB 压缩包）：
   ```
   winget download --id BrechtSanders.WinLibs.POSIX.UCRT -e --source winget -d D:\code\_dl
   ```
   下载后把 zip 解压到 `D:\code\`，会得到 `D:\code\mingw64\`。

2. **装 VSCode 扩展**：
   ```
   code --install-extension ms-vscode.cpptools
   ```

3. **恢复配置**：`.vscode/` 目录跟着仓库走，无需重新配置。

4. **验证**：
   ```
   D:\code\mingw64\bin\gcc.exe --version
   ```
   能打印 `16.2.0` 即成功。

---

## 六、备份位置

本次改动前的原配置备份在：
`D:\backup\code-vscode-bak-20261009\`（含根目录与各子目录的 `.vscode`）

---

## 七、VSCode 数据都在 D 盘

程序、扩展、用户数据**全部**收在 `D:\vscode-data\`：

| 内容 | 实际位置 | C 盘对应位置 |
| --- | --- | --- |
| VSCode 程序 | `D:\vscode-data\Microsoft VS Code\` | — |
| 扩展 | `D:\vscode-data\.vscode\extensions\` | `C:\Users\xiaoyuer\.vscode` →junction |
| 用户数据/设置 | `D:\vscode-data\user-data\` | `C:\Users\xiaoyuer\AppData\Roaming\Code` →junction |

> **junction 是什么**：C 盘那两个位置其实是"目录联接"，本质是个指向 D 盘的快捷方式，
> 本身不占空间。VSCode 完全无感，照常使用。
>
> ⚠️ **不要**把这两个 C 盘路径当普通文件夹直接删除或移动，那会破坏链接关系。

**想还原回 C 盘**：先关掉 VSCode，删掉这两个链接目录，再把
`D:\vscode-data\.vscode`、`D:\vscode-data\user-data` 移回 C 盘原位置即可。
