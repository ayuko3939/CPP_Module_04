# CPP Module 04

42TokyoのCPP_Module_04プロジェクト - C++のサブタイプポリモーフィズムと抽象クラスについて学習します。

## 概要

このモジュールでは以下のC++の概念を学習します：
- サブタイプポリモーフィズム（Subtype polymorphism）
- 抽象クラス（Abstract classes）
- インターフェース（Interfaces）
- 仮想関数（Virtual functions）
- 純粋仮想関数（Pure virtual functions）
- ディープコピー（Deep copy）
- 継承（Inheritance）

## 課題

### Exercise 00: Polymorphism
**ディレクトリ**: `ex00/`

動物クラスの継承とポリモーフィズムを実装。
- Animalベースクラス
- Dog, Catの派生クラス
- 仮想関数を使用したポリモーフィズム
- WrongAnimal, WrongCatクラスで間違った例も実装

**実行**:
```bash
./animal
```

### Exercise 01: I don't want to set the world on fire
**ディレクトリ**: `ex01/`

ディープコピーとBrainクラスの実装。
- Brainクラスの追加
- Dog, CatがBrainを持つ
- ディープコピーコンストラクタと代入演算子の実装
- メモリリークの防止

**実行**:
```bash
./brain
```

### Exercise 02: Abstract class
**ディレクトリ**: `ex02/`

抽象クラスの実装。
- AAnimal抽象基底クラス
- 純粋仮想関数の使用
- インスタンス化できない抽象クラス
- 具象クラスでの実装義務

**実行**:
```bash
./abstract
```

## コンパイル要件

- C++98標準
- フラグ: `-Wall -Wextra -Werror -std=c++98`
- 各exerciseにMakefileが含まれています

## 学習ポイント

- 仮想関数テーブル（vtable）の理解
- 継承階層の設計
- メモリ管理とディープコピー
- 抽象クラスによる設計の強制
- ポリモーフィズムの実践的な使用
