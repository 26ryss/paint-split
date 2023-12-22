# paint-split
C言語でファイルを分割して管理するときのプログラム。Makefileを準備することでMakefileの実行ですべてのソースファイルをオブジェクトファイルとし、オブジェクトファイルをコンパイルして実行ファイルに変換することができる。  

Makefileの中身
```
CC = gcc
CFLAGS = -Wall -g

# 実行ファイル名
TARGET = paint

# コンパイル対象のソースコード
SRCS = $(wildcard src/*.c)

# オブジェクトファイル名
OBJS = $(SRCS:.c=.o)

# インクルードファイルのあるディレクトリパス
INCDIR = -I./include

# ターゲットファイル生成
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# オブジェクトファイル生成
%.o: %.c
	$(CC) $(CFLAGS) -c $< $(INCDIR) -o $@

clean:
	rm -f $(OBJS) $(TARGET)
```
