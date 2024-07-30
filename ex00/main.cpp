#include "Zombie.hpp"

int main()
{
	Zombie *heapZombie = newZombie("HeapZombie");
	heapZombie->announce();
	delete heapZombie;

	randomChump("StackZombie");

	return 0;
}

/*
ヒープとスタックの使い分け
関数のスコープ外で使いたい場合はヒープ
関数のスコープ内で使いたい場合はスタック
*/

// __attribute__((destructor)) static void destructor()
// {
// 	system("leaks a.out");
// }