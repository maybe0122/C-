#include "Header.cpp"

int main()
{
	int score_IE = 0, score_SN = 0, score_FT = 0, score_JP = 0;

	printResult(score_IE, score_SN, score_FT, score_JP);
}

void printResult(int ie, int sn, int ft, int jp)
{
	char result[5] = {0, };

	if (ie >= 0) result[0] = 'E';
	else if (ie < 0) result[0] = 'I';

	if (sn >= 0) result[1] = 'S';
	else if (sn < 0) result[1] = 'N';

	if (ft >= 0) result[2] = 'F';
	else if (ft < 0) result[2] = 'T';

	if (jp >= 0) result[3] = 'P';
	else if (jp < 0) result[3] = 'J';

	printf("당신의 MBTI는 %s입니다.\n", result);

	if (strcmp("ISTJ", result) == 0) {
		printf("당신은 논리주의자 입니다. 사실에 대하여 정확하고 체계적으로 기억하며 신중하고 책임감이 있습니다.\n");
		printf("인물: 퓨디파이\n");
	}
	else if (strcmp("ISFJ", result) == 0) {
		printf("당신은 조용하고 차분하며 친근합니다. 가장 믿음직스러운 사람입니다.\n");
		printf("인물 : 태연(가수)\n");
	}
	else if (strcmp("INFJ", result) == 0) {
		printf("당신은 인내심이 많고 사람들을 좋아합니다. 눈치가 빠르고 영감이 있습니다.\n");
		printf("인물 : J.K. 롤링(해리포터 작가)\n");
	}
	else if (strcmp("INTJ", result) == 0) {
		printf("당신은 논리적이고 효율성을 중시하는 냉철한 사람입니다.\n");
		printf("인물 : 진용진(유튜버)\n");
	}
	else if (strcmp("ISTP", result) == 0) {
		printf("조용하고 과묵하고 손재주가 있는 공학자 스타일 입니다.\n");
		printf("인물 : 박명수(연예인)\n");
	}
	else if (strcmp("ISFP", result) == 0) {
		printf("다정하고 착하고 상대방에 대한 배려심이 많습니다. 주위 사람들에게 많이 휩쓸리는 성격입니다\n");
		printf("인물 : 정국(가수, BTS)\n");
	}
	else if (strcmp("INFP", result) == 0) {
		printf("당신은 정열적이고 완벽을 추구하며 유토피아를 추구하는 성격입니다.\n");
		printf("인물 : 셰익스피어(작가)\n");
	}
	else if (strcmp("INTP", result) == 0) {
		printf("당신은 조용하고 과묵하며 상상을 즐기는 사색가 입니다. 사회성이 부족하다는 말을 많이 듣습니다.\n");
		printf("인물 : 아인슈타인(과학자)\n");
	}
	else if (strcmp("ESTP", result) == 0) {
		printf("당신은 활동하는 것을 좋아하는 사업가형 입니다.\n");
		printf("인물 : 존 F 케네디(미국의 전 대통령)\n");
	}
	else if (strcmp("ESFP", result) == 0) {
		printf("당신은 자유로운 영혼을 갖고있는 연예인 스타일입니다.\n");
		printf("인물 : 비(가수)\n");
	}
	else if (strcmp("ENFP", result) == 0) {
		printf("당신은 넘치는 상상력을 바탕으로 항상 새로운 가능성을 찾아보는 탐험가입니다.\n");
		printf("인물 : 대도서관(유튜버, 방송인)\n");
	}
	else if (strcmp("ENTP", result) == 0) {
		printf("당신은 논쟁을 즐기며 사람을 만나는 것을 좋아합니다.\n");
		printf("인물 : 서새봄(스트리머)\n");
	}
	else if (strcmp("ESTJ", result) == 0) {
		printf("현실적 구체적이고 사실적이며 조직을 이끌어나가는 리더형 입니다.\n");
		printf("인물 : 허경영(정치인)\n");
	}
	else if (strcmp("ESFJ", result) == 0) {
		printf("동정심이 많고 다른 사람에게 관심을 주는 것을 좋아하며 협력을 조항하고 동료애가 끈끈합니다.\n");
		printf("인물 : 김남주(가수)\n");
	}
	else if (strcmp("ENFJ", result) == 0) {
		printf("당신은 따뜻하고 적극적이며 사교성이 풍부하고 이타적입니다.\n");
		printf("인물 : 신세경(연예인)\n");
	}
	else if (strcmp("ENTJ", result) == 0) {
		printf("당신은 열정적이며 솔직하고 지도력과 통솔력이 있습니다. 활동적이고 장기적인 계획을 좋아합니다.\n");
		printf("인물 : 고든 램지(요리인, 방송인)\n");
	}
}

//"나는 처음 보는 사람에게 소개하는 것이 두렵지 않다.\n" -
//"내가 스트레를 푸는 방법은 사람들을 만나는 것이다.\n" -
//"대화를 시작하기보다 맞장구 치는 걸 좋아한다.\n" +
//"술자리에서 노는 것보다 집에서 게임하는게 좋다.\n" +
//
//"업무를 하거나 과제를 할 때 계획을 먼저 세운다.\n" -
//"가끔 번뜩이는 아이디어가 생각나 메모를 하고는 한다.\n" -
//"가끔 비현실적인 망상을 하는 편이다.\n" -
//"나는 내성적인 성격이다.\n" -
//
//"상대방이 고민을 들어줄 때 원인을 찾기보다 공감을 해주는 편이다.\n" -
//"어떤 이유에서건 상대방의 기분을 먼저 생각해야 한다.\n" -
//"다른 사람들이 나를 어떻게 생각하는 지 지나치게 생각한다.\n" -
//"영화나 드라마가 뮤지컬이나 예술작품보다 더 많은 영감을 준다.\n" +
//
//"방 정리가 되어있지 않으면 일을 시작할 수 없다.\n" +
//"과제나 업무는 최대한 미루었다가 한꺼번에 하는 편이다.\n" -
//"호기심은 나를 움직이는 원동력이다.\n" -
//"프리랜서가 회사원보다 더 나은 삶을 살고 있다고 생각한다.\n" -

// 강한 부정, 약한 부정, 약한 긍정, 강한 긍정