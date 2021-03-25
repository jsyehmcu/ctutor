C Tutor
========
說明
-----
這個目錄來自 Online Python Tutor 專案 PythonTutorV5(unity)。原始作者應是 Philips Guo, 但是不知道為什麼, 整個專案不見了。
2020年底我在另一位教授的 GitHub 的倉庫裡找到, 但不知道為什麼, 現在他的 GitHub 的專案也不見了。

我猜, 會不會是這個 Online Python Tutor 專案不希望程式碼外流, 所以相關專案陸陸續續關閉? (或是有什麼潛在的資安問題?)

現在 Python Tutor 的 C Tutor 的官方網站一直連不上(出現紅色Error), 上課時學生無法使用。

因為我想讓大一同學能在自己的電腦裡安裝 C Tutor, 以便自己能學習/理解相關的觀念 ( 尤其是pointer指標、struct結構、recursion函式呼叫函式、scope變數的global/local觀念等)。所以我上傳這個專案的目錄, 並把網頁介面的一些文字變成中文, 希望讓同學比較容易理解。

安裝方式
--------

安裝方式: 
- 安裝 Anaconda: 先在Windows電腦安裝 Anaconda Windows x64 位元版, 全部照預設值 [Anaconda3-2020.11-Windows-x86_64.exe](https://repo.anaconda.com/archive/Anaconda3-2020.11-Windows-x86_64.exe)
- 安裝 Git for Windows: (我用 git version 2.30.0.windows.2), 我安裝它的原因, 是因為它使用 Chrome 登入 github 帳號時, 不會有問題。(不知道為什麼, 若使用 Anaconda 裡用 conda install git 安裝後, 使用git指令, 在提示輸入github密碼後, 我會收到不安全的警告信)
- 開啟 Anaconda Prompt 小黑畫面
    - 下載 C Tutor: git clone https://github.com/jsyehmcu/ctutor 下載這份 C Tutor 的程式。 要記得你放在哪個目錄, 之後要進到目錄啟動 server。
    - 安裝 bottle 瓶子: pip install bottle 這樣就能讓 Python Tutor / C Tutor 的專案可使用簡易的 bottle server 。
    - 進到 C Tutor 目錄中: cd ctutor
	- 執行 C Tutor: python bottle_server.py 這樣就會把 Python Tutor 的 web service 跑起來, 使用 [http://localhost:8003](http://localhost:8003) 。(Windows 會跳出防火牆的提示畫面, 問是否要讓 python.exe 使用網路功能。記得要同意 python.exe 使用網路功能)
- 使用: 在同一台電腦裡, 用 Chrome 開啟 [http://localhost:8003](http://localhost:8003) 看能不能看到程式輸入畫面。如果可以輸入程式, 按下「Visualize Execution看執行結果」

問題 Q&A
--------
- Q: 為什麼出現紅色的 Error
	- A: Error訊息是從 JavaScript 程式在等不到JSON結果時會印在Chome畫面中, 我也不知道出錯的原因(官網也出現、其他人自己架的server也會出現)。我猜可能是這樣, 讓 Philips Guo 覺得很煩, 才把程式從 GitHub 移掉的吧?!
- Q: 一開始可以使用 C Tutor, 後來就一直不能連
	- A: 我猜可能 python bottle server 無法運作。(1) 在 Anaconda Prompt 小黑裡面, Ctrl-C 中斷剛剛啟動的 python bottle_server.py, 再執行一次看看, (2) 使用 [tcpview](https://docs.microsoft.com/en-us/sysinternals/downloads/tcpview) 查看目前使用的 8003 port 有無異狀, 有的話,關掉相關連線, 再重來一次看看。
- Q: 為什麼跑不起來? 為什麼那麼麻煩?
	- A: 我也想要做出簡單、好用的工具, 不過我還做不出來 QQ
