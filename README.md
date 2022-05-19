# learn-github-2022
## 演習

### 1. `KatLab-MiyazakiUniv/learn-github-2021`を`fork`する

### 2. `fork`した自分のリポジトリをクローンする
```
$ git clone https://github.com/[githubユーザ名]/learn-github-2022.git
```
### 3. `upstream`を登録する
`upstream`として親リポジトリを登録する(`upstream`は後述する最新の状態の取得で使用する)
```
$ cd learn-github-2022
$ git remote add upstream https://github.com/KatLab-MiyazakiUniv/learn-github-2022.git
```

### 4. ローカルリポジトリで作業する
#### 4.1. githubで`issue`を建てる
githubの`issues`タブにある`New issue`をクリックして`issue`を建てる  
タイトルを「課題提出([自分の名前])」にして，コメントは下図のように記述する
<img src="img/Issue.PNG" width=80%>
#### 4.2. 作業用ブランチを切る
ブランチを確認すると，現在`main`ブランチにいることが分かる
```
$ cd learn-github-2022/[自分の名前のディレクトリ]
$ git branch
* main
```
`git switch -c`で作業用ブランチを作成して移動する  
`git branch`コマンドで確認した時に，新しく作ったブランチに`*`が付いていればOK
```
$ git switch -c ticket-[issue番号]
$ git branch
  main
* ticket-[issue番号]
```
※`git switch`はブランチを移動するコマンドで，オプションに`-c`をつけることで新たにブランチを作成して移動する

#### 4.4. 編集内容をコミットする
まず．`git status`で，編集したファイル(追加・削除も含む)が赤く表示されていることを確認する
```
$ git status
//編集内容が表示される
```
編集内容をインデックスに追加する  
この時，`git status`で確認すると，先程の赤い表示の箇所が緑になっている
```
$ git add Direction.cpp .gitkeep
$ git status
//編集内容が表示される
```
インデックスの内容をローカルリポジトリにコミットする
```
$ git commit -m "編集内容の簡潔な説明"
```
#### 4.5. 自分のリモートリポジトリ(origin)に`push`する
```
$ git push origin ticket-[issue番号]
```

### 5. KatLabのリポジトリにプルリクを出す
githubで自分のリポジトリを開いて以下の手順で操作する
#### ①`Compare & pull request`をクリック
#### ②プルリクのタイトルと内容を記述する
#### ③レビューしてほしい人を選択する
#### ③`Create pull request`をクリック
※プルリクのタイトルは`close #[issue番号] [プルリクの説明]`とすると，該当issueと自動で紐づけられる

### 6. レビューを受けて修正する
`Request change`があれば修正し，レビュワー全員から`Approve`をもらったらマージする

### 7. ローカルリポジトリの`main`ブランチを最新の状態に更新する
`git pull`コマンドを使って，親リポジトリ(`upstream`)から最新の状態を取得する
```
$ git switch main
$ git pull upstream main
```

`main`ブランチを更新出来たら，新たにブランチを切って次の作業を進める
