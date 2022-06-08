#include<iostream>
#include<string>
#include<stdlib.h>
#include<time.h>
#include"Girl.h"
using namespace std;

int main() {
	int x;
	string mainCharacter;
	cout << "請輸入主角姓名：";
	cin >> mainCharacter;
	Girl 佐倉麻衣(60);
	cout << endl;
	string a;
	srand(time(NULL));
	int b[4];
	int v=1000 ,d=100,e=100,f=100;

	for (int i = 0; i < 4; i++) {
		 x = rand();
		 x = x % 6;	
		while (x == v||x==d||x==e||x==f) {
			x = rand();
			x = x % 6;	
		}
		b[i] = x;
		v = b[i];
		if(i>0)
		d = b[i-1];
		if(i>1)
		e = b[i-2];
		 if (i>2)
		f = b[i-3];
	}

	cout << "在這個周末我鼓起勇氣約了一個在網路上認識很久的網友。" << endl;
		cout << "我們有很多共通的愛好，我跟她相處得很快樂。" << endl;
		cout << "這次我決定向她告白，我們約好在遊樂園的門口。" << endl;
		cout << "在等待時候我看到一個穿這水手服，" << endl;
		cout << "有這黑長直的少女往我這裡走來。" << endl;
		cout << "我看這她給我的照片，知道我要等的人，" << endl;
		cout << "名子叫佐倉麻衣的美少女，我向佐倉打了招呼，" << endl;
		cout << "佐倉也很有禮貌的跟我問好，就這樣我們的約會開始了" << endl;
		cout << endl;
		cout << "(每題選項請以A.B.C回答)" << endl;
	for (int i = 0; i < 4; i++) {
		
		switch (b[i]) {
		case 0:
			cout << "看到眼前有出現了一家冰淇淋店此時()眼睛一亮，露出了很想吃得神情" << endl;
			cout << "A."<< mainCharacter<<":「你這麼胖就別吃了」" << endl;
			cout << "B." << mainCharacter << ":「要不要一起去吃」" << endl;
			cout << "C.什麼都不說直接走" << endl;
			cin >> a;
			while (a != "A" && a != "B" && a != "C") {
				cout << "請重新選擇A.B.C回答" << endl;
				cin >> a;
			}
			cout << endl;
			if (a == "A") {
				cout << "佐倉什麼都不說直接走調"<<endl;
				佐倉麻衣.sub(10);
			}
			if (a == "B") {
				cout << "佐倉露出了開心的眼神" << endl;
				佐倉麻衣.add(10);
			}
			if (a == "C") {
				cout << "佐倉什麼都不說直接走" << endl;
			}
			cout << endl;
			break;
		case 1:
			cout << "突然間下起了一場大雨發現了佐倉沒有帶傘而我把包包的傘拿出來" << endl;
			cout << "A.並且跟佐倉一起撐傘" << endl;
			cout << "B.獨自一個人撐傘" << endl;
			cout << "C.假裝自己沒帶傘，並把傘收起來"<<endl;
			cin >> a;
			while (a != "A" && a != "B" && a != "C") {
				cout << "請重新選擇A.B.C回答" << endl;
				cin >> a;
			}
			cout << endl;
			if (a == "A") {
				cout << "佐倉露出了害羞的眼神" << endl;
				佐倉麻衣.add(10);
			}
			if (a == "B") {
				cout << "看到佐倉慌張的去找避雨的地方" << endl;
				佐倉麻衣.sub(10);
			}
			if (a == "C") {
				cout << "跟佐倉一起去找避雨的地方" << endl;
			}
			cout << endl;
			break;			
		case 2:
			cout << "在玩過遊樂設施後她提議要不要去商店逛，我沒多想就同意一起去看"<<endl<<"我們走進了許多的禮品店，有許多佐倉喜歡的布偶與周邊，這讓她手上沒多久就大包小包的袋子" << endl;
			cout << "A." << mainCharacter << ":「我來幫你提東西吧」" << endl;
			cout << "B." << mainCharacter << ":「那邊有好吃的我們去吃吧」" << endl;
			cout << "C." << mainCharacter << ":「你怎麼買了那麼多東西呀」" << endl;
			cin >> a;
			while (a != "A" && a != "B" && a != "C") {
				cout << "請重新選擇A.B.C回答" << endl;
				cin >> a;
			}
			cout << endl;
			if (a == "A") {
				cout << "佐倉麻衣:好呀 謝謝你幫我拿" << endl;
				cout << "我拿好東西後，我們繼續去逛其他的商店，但因為周末人流擁擠，讓我們差點走散，突然佐倉手勾住我的手，佐倉臉紅的跟我說" << endl;
				cout << "佐倉麻衣:「這樣我們就不會走散了。」" << endl;
				cout << "佐倉柔軟的身軀靠在我身上，讓我也心跳加速，希望這能永遠不要結束" << endl;
				佐倉麻衣.add(10);
			}
			if (a == "B") {
				cout << "佐倉麻衣:「可以哪我們走去看看吧」" << endl;
				cout <<" 佐倉也沒繼續說甚麼，我們就默默的走完去找地方休息了" << endl;
				
			}
			if (a == "C") {
				cout << "佐倉麻衣:「你怎麼這樣說，我只是買了有點多而已。」" << endl;
				cout << "佐倉生氣的不說話，我們就這樣低氣壓的走完行程" << endl;
				佐倉麻衣.sub(10);
			}
			cout << endl;
			break;
		case 3:
			cout << "看到遊樂園裡最刺激的東西，那就是雲霄飛車，一看到佐倉的身影她直接指著說我們去玩那個" << endl;
			cout << "A." << mainCharacter << ":「好也我們一起去做吧」" << endl;
			cout << "B." << mainCharacter << ":「不太好吧 我有點怕高，你自己上去玩吧」" << endl;
			cout << "C." << mainCharacter << ":「我不想玩，你自己去玩這種恐怖的設施」" << endl;
			cin >> a;
			while (a != "A" && a != "B" && a != "C") {
				cout << "請重新選擇A.B.C回答" << endl;
				cin >> a;
			}
			cout << endl;
			if (a == "A") {
				cout << "佐倉麻衣:「太好了!我一直很期待一起玩雲霄飛車呢，謝謝你願意陪我。」" << endl;
				cout << "我們一起搭上去，佐倉在我旁邊很近距離，讓我原本緊張的心情更加劇了，佐倉發現我的窘態，手握住我手說到" << endl;
				cout << "佐倉麻衣:「不要害怕有我在，不要擔心」" << endl;
				cout << "那一瞬間我感受到溫暖與安心" << endl;
				佐倉麻衣.add(10);
			}
			if (a == "B") {
				cout << "佐倉麻衣:「好吧那我就自己一個人上去了，你幫我拿一下東西。」" << endl;
				cout << " 看這佐倉自己一個人上去，玩得很開心讓我心中有點寂寞，想要跟佐倉一起玩這各種設施" << endl;
			}
			if (a == "C") {
				cout << "佐倉麻衣:「不想玩就說呀，不要口氣那麼差」" << endl;
				cout << "佐倉生氣的自己上去玩，等她下來我們兩個互動還是冷冰冰的沒有一點進展" << endl;
				佐倉麻衣.sub(10);
			}
			cout << endl;
			break;

		case 4:
			cout << "走著走著突然看到了，看起來十分陰森的地方，原來是走到鬼屋的致富進了阿" << endl;
			cout << "佐倉突然滿臉興奮地看著我，跟我說他沒去過鬼屋，想進去看看" << endl;
			cout << "A." << mainCharacter << ":「那些都是假的，無聊的很。」" << endl;
			cout << "B." << mainCharacter << ":「好~，走吧我們進去看看。」" << endl;
			cout << "C." << mainCharacter << ":「你自己去吧，我會怕。」" << endl;
			cin >> a;
			while (a != "A" && a != "B" && a != "C") {
				cout << "請重新選擇A.B.C回答" << endl;
				cin >> a;
			}
			cout << endl;
			if (a == "A") {
				cout << "佐倉麻衣: 「我就沒有玩過啊，陪我玩玩看不行嗎?」" << endl;
				cout << "佐倉很生氣，然後不說話的走掉了" << endl;
				佐倉麻衣.sub(10);
			}
			if (a == "B") {
				cout << "佐倉麻衣: 「但我有點怕欸，你等等要保護好我喔。」" << endl;
				cout << " 我: 「恩恩，我會一直在你旁邊的放心。」 " << endl;
				cout << "進去後佐倉 因為恐怖的氣氛，所以一直很不安，這時突然有一隻鬼跑出來" << endl;
				cout << "佐倉的身體就直接靠在我的身上，還牽起我的手，真希望時間能永遠停在這一刻" << endl;
				佐倉麻衣.add(10);
			}
			if (a == "C") {
				cout << "佐倉麻衣: 「如果你會怕，那就不要了。 」" << endl;
				cout << "雖然佐倉說算了，但感覺得出來她很失望地離開了這個地方" << endl;				
			}
			cout << endl;
			break;

		case 5:
			cout << "遊樂園裡最高的遊樂設施就是摩天輪了，佐倉很喜歡看風景"<<endl;
			cout<<"尤其是從高空中俯瞰，佐倉馬上拉著我坐上了摩天輪"<<endl;
			cout << "A." << mainCharacter << ":「這怎麼轉這麼慢啊」" << endl;
			cout << "B." << mainCharacter << ":「風景好漂亮喔，知道了為什麼你喜歡從高處看風景了」" << endl;
			cout << "C." << mainCharacter << ":「我怕高，這個設施只能你自己上去玩了」" << endl;
			cin >> a;
			while (a != "A" && a != "B" && a != "C") {
				cout << "請重新選擇A.B.C回答" << endl;
				cin >> a;
			}
			cout << endl;
			if (a == "A") {
				cout << "佐倉麻衣: 「摩天輪都是這樣的。」" << endl;
				cout << "說完後她就很安靜，一直到我們下來，她還是不太說什麼話" << endl;
				佐倉麻衣.sub(10);
			}
			if (a == "B") {
				cout << "佐倉麻衣: 「很漂亮對吧，我很喜歡看風景，尤其是從高空中。」" << endl;
				cout << " 我: 「是阿，真的好美。」 " << endl;
				cout << "佐倉麻衣: 「我知道有個地方風景很漂亮，我們下次就去那吧。」" << endl;
				cout << "我: 「恩恩我會滿心期待下次的行程的。」" << endl;
				佐倉麻衣.add(10);
			}
			if (a == "C") {
				cout << "佐倉麻衣: 「好吧，你會怕那你就先不要玩吧，幫我拿個東西。」" << endl;
				cout << "我: 「好，上去好好玩。」" << endl;
				cout << "我從麻衣手上接過了她的物品，然後看著他上去玩，雖然看到麻衣玩得開心" << endl;
				cout << "我就很高興了，但我希望我也能在麻衣旁邊陪她玩" << endl;
			}
			cout << endl;
			break;
		}
	}
	cout << "end:" << endl;
	cout << "在今天的約會結束前，我帶著佐倉到了大街上看煙火，然後跟佐倉表明了自己的心意。";
	if (佐倉麻衣.getFelling() <= 40) {
		cout << "佐倉麻衣:「我覺得我們不太適合。」" << endl;
		cout << "各自回大家後佐倉封鎖了我的帳號" << endl;
		cout << "之後就再也沒跟佐倉見面了" << endl;
		cout << "我" << mainCharacter << "終究一輩子要當個肥宅沒有人愛了......";
	}
	if (佐倉麻衣.getFelling() > 40 && 佐倉麻衣.getFelling() <= 89) {
		cout << " 佐倉麻衣:「我覺得太快了，我還沒準備方展到那個階段" << endl;
			cout << "	我們就先繼續當朋友吧。」" << endl;
	}
	if (佐倉麻衣.getFelling() >= 90 ) {
		cout << "我:我覺得我已經愛上你了，你願意當我的女朋友嗎 ?" << endl;
		cout << "佐倉麻衣 : 「今天玩得很開心，我也很喜歡你，我們在一起吧。」" << endl;
		cout << "最後還約好下禮拜再出去玩" << endl;
	}
}