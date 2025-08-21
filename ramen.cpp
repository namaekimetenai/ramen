#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	/*持ち物選択*/

	int item;

	printf("「二郎系ラーメン」…ついに決着をつける時が来た！\n");
	printf("「行く前に、これを持っていけ」\n");
	printf("\nマイ・レンゲ ＝ １ , ティッシュ ＝ ２ , ブラック・ウーロンティー ＝ ３\n");
	scanf("%d", &item);

	switch (item) {
	case 1:
		printf("\n「マイ・レンゲ」を持ち物に選んだ！\n二郎系ラーメン店にはレンゲがないこともある。\n");
		break;
	case 2:
		printf("\n「ティッシュ」を持ち物に選んだ！\n店内にティッシュがないときは、自前のティッシュで対応すべし。\n");
		break;
	case 3:
		printf("\n「ブラック・ウーロンティー」を持ち物に選んだ！\n食後のカロリーを実質ゼロにできる\n");
		break;
	default:
		printf("\n持ち物は何も持たなかった\n");
		break;

	}



	/*食券購入*/

	int ramen;
	int hp;

	printf("\n店内へ入店した。豚骨スープの香りが食欲をそそる。\n");
	printf("さて、今日は…\n");
	printf("\n「小ラーメン」を購入する ＝ 1 , 「大ラーメン」を購入する ＝ 2\n");
	scanf("%d", &ramen);

	switch (ramen) {
	case 1:
	default:
		printf("\n「小ラーメン」を購入した！\n真の玄人であればこそ、無理はしないものだ。\n");
		hp = 100;
		break;
	case 2:
		printf("\n「大ラーメン」を購入した！\n時には自身の限界に挑戦したくなるものだ。\n");
		hp = 50;
		break;
	}



	/*コール*/

	int call;

	printf("\n食券を店員さんに渡して、席につく。\n");
	printf("「…ニンニクは？」\n");
	printf("\nニンニクヤサイアブラカラメ ＝ １ , 全部マシマシで！ ＝ ２\n");
	scanf("%d", &call);

	switch (call) {
	case 1:
		printf("\n「ニンニクヤサイアブラカラメ」のコールに成功した！\n");
		printf("真の玄人のコールは、シンプル・イズ・ベストなのだ。\n");
		break;
	case 2:
		printf("\n「ギルティ！」\n");
		printf("マシマシを受け付けない店舗も存在する。ましてやコールを「全部」で済ますのは言語道断！\n");
		hp -= 30;
		break;
	default:
		printf("\n「ギルティ！」「ロットを乱すな！」\n");
		printf("コールをスムーズに伝えられなかった！ コールは明瞭でスムーズに伝えよう！\n");
		hp -= 10;
		break;
	}



	/*食事*/

	int lunch;

	printf("\n「はい、どうぞ」\n");
	printf("着丼したどんぶりには、溢れんばかりのもやしの山、ギラギラと光る背脂がそびえたっている。いただきます！\n");
	printf("\n秘儀「天地返し」＝ １ , 持ち物を使う ＝ ２ , 写真を撮る ＝ ３\n");
	scanf("%d", &lunch);

	switch (lunch) {
	case 1:
		printf("\nこれぞ秘儀「天地返し」 麺を引っ張り出し、先に食すことで伸びてしまうのを防ぐ大技！\n");
		printf("実際には繊細な動作が求められる…時間をかけすぎないように注意！\n");
		break;
	case 2:
		switch (item) {
		case 1:
			printf("\n「マイ・レンゲ」を使った！ 店内にレンゲが無くても、これで綺麗にスープを楽しめる。\n");
			break;
		case 2:
			printf("\n「ティッシュ」を使った！ 店内にティッシュが無くても、お口を綺麗に拭き取れる。\n");
			break;
		case 3:
			printf("\n「ブラック・ウーロンティー」を飲み干した！ 脂肪の吸収を抑えられるので、実質カロリーゼロ！\n");
			break;
		default:
			printf("\n何も持っていなかった。だが、うまいことに変わりなし！\n");
			break;
		}
		break;
	case 3:
		printf("\n「ギルティ！」\n");
		printf("ラーメンは時間が命！ ロット制のお店で悠長に写真を撮る暇などないのだ！\n");
		hp -= 30;
		break;
	default:
		printf("\n「ギルティ！」\n");
		printf("派手にこぼした！ 焦りは禁物だ。\n");
		if (item == 2)
			printf("だが、ティッシュを持っていたのでセーフ！");
		else
			hp -= 30;
		break;
	}



	/*エンディング*/

	printf("\n…腹いっぱいだ。\n");
	printf("玄人スコア %d点\n", hp);

	if (hp < 0)
		printf("\n残念！ 君は二郎系の禁忌を犯し過ぎた…まもなく処断されるだろう。\n");
	else if(hp > 0 && hp < 50){
		printf("\n悪くない…初めにしてはな！ 更なる精進が必要だ。強くなりたくば喰らえ！\n");
	}
	else if (hp >= 50) {
		printf("\nCongratulation！ 君は正真正銘のジロリアン！ 三田が聖とされますように、ラーメン！\n");
	}

	int end;

	scanf("%d", &end);

	return 0;


}
