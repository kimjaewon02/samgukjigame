#include<bangtal.h>

SceneID scene1, scene2, scene3, scene4, scene5, scene6, scene7, scene8, scene9, scene10, scene11, scene12, scene13, scene14, scene15, scene16, scene17, scene18, scene19, scene20, scene21, scene22, scene23, scene24, scene25, scene26, scene27, scene28, scene29, scene30, scene31;
ObjectID start, check1, next1, yes1, no1, next2, restart1, yes2, no2, next3, restart2, next4, next5, yes3, no3, next6, yes4, no4, next7, yes5, no5, next8, next9, next10, next11, yes6, no6, next12, next13, yes7, no7, restart3, next14, next15, next16, yes8, no8, restart4, next17, arrow, fire, firearrow, rope, next18, next19, end;

ObjectID createObject(const char* name, const char* image, SceneID scene, int x, int y, bool shown) {

	ObjectID object = createObject(image);

	locateObject(object, scene, x, y);

	if (shown) {
		showObject(object);
	}

	return object;
}

void mouseCallback(ObjectID object, int x, int y, MouseAction action) {
	if (object == start) {
		enterScene(scene2);
		showMessage("유비, 촉나라");
	}
	if (object == check1) {
		enterScene(scene3);
		showMessage("도원결의 미션 시작!!");
	}
	if (object == next1) {
		showMessage("길거리에서 두 장수가 싸우고 있습니다. 싸움을 말리시겠습니까?");
		hideObject(next1);
		showObject(yes1);
		showObject(no1);
	}
	if (object == yes1) {
		showMessage("싸움을 말리는 것에 성공하셨습니다!!");
		showObject(next2);
		hideObject(yes1);
		hideObject(no1);
	}
	if (object == no1) {
		showMessage("미션 실패");
		hideObject(yes1);
		hideObject(no1);
		showObject(restart1);
	}
	if (object == restart1) {
		showMessage("도원결의 미션 시작!!");
		hideObject(restart1);
		showObject(next1);
	}
	if (object == next2) {
		enterScene(scene4);
		showMessage("장비와 관우가 형님으로 모시기를 원합니다. 수락하시겠습니까?");
	}
	if (object == yes2) {
		enterScene(scene5);
		showMessage("도원결의(184년) 미션 성공");
	}
	if (object == no2) {
		showMessage("미션 실패");
		hideObject(yes2);
		hideObject(no2);
		showObject(restart2);
	}
	if (object == restart2) {
		showMessage("장비와 관우가 형님으로 모시기를 원합니다. 수락하시겠습니까?");
		showObject(yes2);
		showObject(no2);
		hideObject(restart2);
	}
	if (object == next3) {
		enterScene(scene6);
		showMessage("제갈량 미션 시작");
	}
	if (object == next4) {
		enterScene(scene7);
	}
	if (object == next5) {
		enterScene(scene8);
		showMessage("인재를 찾으러 가시겠습니까?");
	}
	if (object == yes3) {
		enterScene(scene9);
		showMessage("아무도 없었습니다");
	}
	if (object == no3) {
		enterScene(scene10);
		showMessage("제갈량 미션을 실패했습니다. 바로 적벽대전 미션으로 넘어갑니다.");
	}
	if (object == next6) {
		enterScene(scene11);
		showMessage("다시 그 집에 가보시겠습니까?");
	}
	if (object == yes4) {
		enterScene(scene12);
		showMessage("거절 당했습니다.");
	}
	if (object == no4) {
		enterScene(scene10);
		showMessage("제갈량 미션을 실패했습니다. 바로 적벽대전 미션으로 넘어갑니다.");
	}
	if (object == next7) {
		enterScene(scene13);
		showMessage("한번 더 가보시겠습니까?");
	}
	if (object == no5) {
		enterScene(scene10);
		showMessage("제갈량 미션을 실패했습니다. 바로 적벽대전 미션으로 넘어갑니다.");
	}
	if (object == yes5) {
		enterScene(scene14);
	}
	if (object == next8) {
		enterScene(scene15);
	}
	if (object == next9) {
		enterScene(scene16);
	}
	if (object == next10) {
		enterScene(scene17);
		showMessage("제갈량 미션을 성공하셨습니다!!");
	}
	if (object == next11) {
		enterScene(scene18);
		showMessage("오나라와 동맹을 시도 하시겠습니까?");
	}
	if (object == yes6) {
		enterScene(scene19);
		showMessage("제갈량이 없어 동맹에 실패했습니다.");
	}
	if (object == no6) {
		enterScene(scene19);
		showMessage("동맹을 실패했습니다");
	}
	if (object == next13) {
		enterScene(scene20);
		showMessage("오나라와 동맹을 시도 하시겠습니까?");
	}
	if (object == no7) {
		enterScene(scene19);
		showMessage("동맹을 실패했습니다");
	}
	if (object == yes7) {
		enterScene(scene21);
		showMessage("오나라와 동맹을 성공하셨습니다");
	}
	if (object == next12) {
		showObject(restart3);
		hideObject(next12);
		showMessage("오나라와 동맹을 실패하여 적벽대전을 진행할 수 없습니다");
	}
	if (object == restart3) {
		enterScene(scene6);
		showMessage("제갈량 미션 시작");
	}
	if (object == next14) {
		enterScene(scene22);
		showMessage("적벽대전 미션 시작!!!");
	}
	if (object == next15) {
		enterScene(scene23);
		showMessage("제갈량의 전략으로 화살을 많이 모았으나 북서풍이 불어 화살을 쏘지 못하고 있었다.");
	}
	if (object == next16) {
		enterScene(scene24);
		showMessage("제갈량의 말을 믿겠습니까?");
	}
	if (object == no8) {
		enterScene(scene25);
		showMessage("적벽대전 패배!!");
	}
	if (object == restart4) {
		enterScene(scene22);
		showMessage("적벽대전 미션 시작!!!");
	}
	if (object == yes8) {
		enterScene(scene26);
		showMessage("적벽대전 시작!!");
	}
	if (object == next17) {
		enterScene(scene27);
		showMessage("아이템을 이용하여 상대의 배를 침몰시키시오!!");
	}
	if (object == arrow) {
		pickObject(arrow);
	}
	if (object == fire) {
		if (getHandObject() == arrow) {
			enterScene(scene28);
		}
	}
	if (object == firearrow) {
		pickObject(firearrow);
	}
	if (object == rope) {
		if (getHandObject() == firearrow) {
			enterScene(scene29);
			showMessage("상대의 배를 모두 불태웠다.");
		}
	}
	if (object == next18) {
		enterScene(scene30);
		showMessage("적벽대전 승리");
	}
	if (object == next19) {
		enterScene(scene31);
		showMessage("유비는 비록 중국 전체를 통일시키지는 못하지만 대단한 군주로 평가받는다.");
	}
	if (object == end) {
		endGame();
	}
}



int main() {

	setMouseCallback(mouseCallback);

	scene1 = createScene("삼국지 영웅전", "first.jpg");
	scene2 = createScene("유비", "유비.jpg");
	scene3 = createScene("도원결의1", "fighting.png");
	scene4 = createScene("도원결의2", "brother.png");
	scene5 = createScene("도원결의3", "nice.jpg");
	scene6 = createScene("제갈량1", "제갈량.jpg");
	scene7 = createScene("제갈량2", "ask.png");
	scene8 = createScene("제갈량3", "mountain.jpg");
	scene9 = createScene("제갈량4", "house.jpg");
	scene10 = createScene("실패", "fail.png");
	scene11 = createScene("제갈량5", "유비.jpg");
	scene12 = createScene("제갈량6", "sorry.png");
	scene13 = createScene("제갈량7", "유비.jpg");
	scene14 = createScene("제갈량8", "angry.png");
	scene15 = createScene("제갈량9", "whenever.png");
	scene16 = createScene("제갈량10", "permit.png");
	scene17 = createScene("제갈량11", "제갈량.jpg");
	scene18 = createScene("적벽대전2-1", "friend.png");
	scene19 = createScene("동맹실패", "nofriend.png");
	scene20 = createScene("적벽대전1-1", "friend.png");
	scene21 = createScene("적벽대전1-2", "yesfriend.png");
	scene22 = createScene("적벽대전1-3", "jb.png");
	scene23 = createScene("적벽대전1-4", "wind.png");
	scene24 = createScene("적벽대전1-5", "trust.png");
	scene25 = createScene("패배", "lose.png");
	scene26 = createScene("상대", "sea.png");
	scene27 = createScene("바다", "ocean.png");
	scene28 = createScene("바다2", "ocean.png");
	scene29 = createScene("불태움", "win.jpg");
	scene30 = createScene("승리", "finish.png");
	scene31 = createScene("끝", "end.png");

	start = createObject("start", "start.png", scene1, 570, 70, true);
	check1 = createObject("check1", "check1.png", scene2, 185, -110, true);
	next1 = createObject("next1", "next1.png", scene3, 1000, 0, true);
	yes1 = createObject("yes1", "yes1.png", scene3, 400, 70, false);
	no1 = createObject("no1", "no1.png", scene3, 800, 70, false);
	next2 = createObject("next2", "next1.png", scene3, 1000, 0, false);
	restart1 = createObject("restart1", "restart1.png", scene3, 570, 50, false);
	yes2 = createObject("yes2", "yes1.png", scene4, 400, 70, true);
	no2 = createObject("no2", "no1.png", scene4, 800, 70, true);
	next3 = createObject("next3", "next1.png", scene5, 1000, 0, true);
	restart2 = createObject("restart2", "restart1.png", scene4, 570, 50, false);
	next4 = createObject("next4", "next1.png", scene6, 600, -100, true);
	next5 = createObject("next5", "next1.png", scene7, 1000, 0, true);
	yes3 = createObject("yes3", "yes2.png", scene8, 100, -100, true);
	no3 = createObject("no3", "no2.png", scene8, 500, -100, true);
	next6 = createObject("next6", "next1.png", scene9, 1000, 0, true);
	yes4 = createObject("yes4", "yes2.png", scene11, 0, -100, true);
	no4 = createObject("no4", "no2.png", scene11, 400, -100, true);
	next7 = createObject("next7", "next1.png", scene12, 1000, 0, true);
	yes5 = createObject("yes5", "yes2.png", scene13, 0, -100, true);
	no5 = createObject("no5", "no2.png", scene13, 400, -100, true);
	next8 = createObject("next8", "next1.png", scene14, 1000, 0, true);
	next9 = createObject("next9", "next1.png", scene15, 1000, 0, true);
	next10 = createObject("next10", "next1.png", scene16, 1000, 0, true);
	next11 = createObject("next11", "next1.png", scene10, 600, 0, true);
	yes6 = createObject("yes6", "yes2.png", scene18, 400, 50, true);
	no6 = createObject("no6", "no2.png", scene18, 780, 50, true);
	next12 = createObject("next12", "next1.png", scene19, 1000, 0, true);
	next13 = createObject("next13", "next1.png", scene17, 600, -100, true);
	yes7 = createObject("yes7", "yes2.png", scene20, 400, 50, true);
	no7 = createObject("no7", "no2.png", scene20, 780, 50, true);
	restart3 = createObject("restart3", "restart1.png", scene19, 570, 50, false);
	next14 = createObject("next14", "next1.png", scene21, 1000, 0, true);
	next15 = createObject("next15", "next1.png", scene22, 1000, 0, true);
	next16 = createObject("next16", "next1.png", scene23, 1000, 0, true);
	yes8 = createObject("yes8", "yes2.png", scene24, 400, 50, true);
	no8 = createObject("no8", "no2.png", scene24, 780, 50, true);
	restart4 = createObject("restart4", "restart1.png", scene25, 570, 50, true);
	next17 = createObject("next17", "next1.png", scene26, 1000, 0, true);
	arrow = createObject("arrow", "arrow.png", scene27, 100, 0, true);
	fire = createObject("fire", "fire.png", scene27, 100, 100, true);
	firearrow = createObject("firearrow", "firearrow.png", scene28, 100, 0, true);
	rope = createObject("rope", "rope.png", scene28, 700, 350, true);
	next18 = createObject("next18", "next1.png", scene29, 1000, 0, true);
	next19 = createObject("next19", "next1.png", scene30, 1000, 0, true);
	end = createObject("end", "endicon.png", scene31, 500, 50, true);


	scaleObject(start, 1.5f);
	scaleObject(check1, 0.4f);
	scaleObject(restart1, 1.5f);
	scaleObject(restart2, 1.5f);
	scaleObject(restart3, 1.5f);
	scaleObject(restart4, 1.5f);
	scaleObject(end, 1.5f);

	startGame(scene1);
}