/*
問題文
高橋君はとても英語が苦手で、アルファベットもまだ覚えきれていません。

そこで、高橋君のために、入力として与えられたアルファベットが A から数えて何番目のアルファベットかを求めるプログラムを作成してください。

ただし、高橋君は 5 より大きい数を知らないので、与えられるアルファベットは A, B, C, D, E のいずれかです。また、A 自身は A から数えて 1 番目であるとします（0 番目ではありません）。
*/
#include<iostream>

int main() {
	char a;
	std::cin >> a;
	std::cout << a-'A'+1 << std::endl;

	return 0;
}