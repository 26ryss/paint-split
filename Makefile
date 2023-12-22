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