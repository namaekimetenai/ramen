#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	/*�������I��*/

	int item;

	printf("�u��Y�n���[�����v�c���Ɍ��������鎞�������I\n");
	printf("�u�s���O�ɁA����������Ă����v\n");
	printf("\n�}�C�E�����Q �� �P , �e�B�b�V�� �� �Q , �u���b�N�E�E�[�����e�B�[ �� �R\n");
	scanf("%d", &item);

	switch (item) {
	case 1:
		printf("\n�u�}�C�E�����Q�v���������ɑI�񂾁I\n��Y�n���[�����X�ɂ̓����Q���Ȃ����Ƃ�����B\n");
		break;
	case 2:
		printf("\n�u�e�B�b�V���v���������ɑI�񂾁I\n�X���Ƀe�B�b�V�����Ȃ��Ƃ��́A���O�̃e�B�b�V���őΉ����ׂ��B\n");
		break;
	case 3:
		printf("\n�u�u���b�N�E�E�[�����e�B�[�v���������ɑI�񂾁I\n�H��̃J�����[�������[���ɂł���\n");
		break;
	default:
		printf("\n�������͉��������Ȃ�����\n");
		break;

	}



	/*�H���w��*/

	int ramen;
	int hp;

	printf("\n�X���֓��X�����B�؍��X�[�v�̍��肪�H�~��������B\n");
	printf("���āA�����́c\n");
	printf("\n�u�����[�����v���w������ �� 1 , �u�僉�[�����v���w������ �� 2\n");
	scanf("%d", &ramen);

	switch (ramen) {
	case 1:
	default:
		printf("\n�u�����[�����v���w�������I\n�^�̌��l�ł���΂����A�����͂��Ȃ����̂��B\n");
		hp = 100;
		break;
	case 2:
		printf("\n�u�僉�[�����v���w�������I\n���ɂ͎��g�̌��E�ɒ��킵�����Ȃ���̂��B\n");
		hp = 50;
		break;
	}



	/*�R�[��*/

	int call;

	printf("\n�H����X������ɓn���āA�Ȃɂ��B\n");
	printf("�u�c�j���j�N�́H�v\n");
	printf("\n�j���j�N���T�C�A�u���J���� �� �P , �S���}�V�}�V�ŁI �� �Q\n");
	scanf("%d", &call);

	switch (call) {
	case 1:
		printf("\n�u�j���j�N���T�C�A�u���J�����v�̃R�[���ɐ��������I\n");
		printf("�^�̌��l�̃R�[���́A�V���v���E�C�Y�E�x�X�g�Ȃ̂��B\n");
		break;
	case 2:
		printf("\n�u�M���e�B�I�v\n");
		printf("�}�V�}�V���󂯕t���Ȃ��X�܂����݂���B�܂��Ă�R�[�����u�S���v�ōς܂��̂͌��ꓹ�f�I\n");
		hp -= 30;
		break;
	default:
		printf("\n�u�M���e�B�I�v�u���b�g�𗐂��ȁI�v\n");
		printf("�R�[�����X���[�Y�ɓ`�����Ȃ������I �R�[���͖��ĂŃX���[�Y�ɓ`���悤�I\n");
		hp -= 10;
		break;
	}



	/*�H��*/

	int lunch;

	printf("\n�u�͂��A�ǂ����v\n");
	printf("���������ǂ�Ԃ�ɂ́A����΂���̂��₵�̎R�A�M���M���ƌ���w�������т������Ă���B���������܂��I\n");
	printf("\n��V�u�V�n�Ԃ��v�� �P , ���������g�� �� �Q , �ʐ^���B�� �� �R\n");
	scanf("%d", &lunch);

	switch (lunch) {
	case 1:
		printf("\n���ꂼ��V�u�V�n�Ԃ��v �˂���������o���A��ɐH�����ƂŐL�тĂ��܂��̂�h����Z�I\n");
		printf("���ۂɂ͑@�ׂȓ��삪���߂���c���Ԃ����������Ȃ��悤�ɒ��ӁI\n");
		break;
	case 2:
		switch (item) {
		case 1:
			printf("\n�u�}�C�E�����Q�v���g�����I �X���Ƀ����Q�������Ă��A������Y��ɃX�[�v���y���߂�B\n");
			break;
		case 2:
			printf("\n�u�e�B�b�V���v���g�����I �X���Ƀe�B�b�V���������Ă��A�������Y��ɐ@������B\n");
			break;
		case 3:
			printf("\n�u�u���b�N�E�E�[�����e�B�[�v�����݊������I ���b�̋z����}������̂ŁA�����J�����[�[���I\n");
			break;
		default:
			printf("\n���������Ă��Ȃ������B�����A���܂����Ƃɕς��Ȃ��I\n");
			break;
		}
		break;
	case 3:
		printf("\n�u�M���e�B�I�v\n");
		printf("���[�����͎��Ԃ����I ���b�g���̂��X�ŗI���Ɏʐ^���B��ɂȂǂȂ��̂��I\n");
		hp -= 30;
		break;
	default:
		printf("\n�u�M���e�B�I�v\n");
		printf("�h��ɂ��ڂ����I �ł�͋֕����B\n");
		if (item == 2)
			printf("�����A�e�B�b�V���������Ă����̂ŃZ�[�t�I");
		else
			hp -= 30;
		break;
	}



	/*�G���f�B���O*/

	printf("\n�c�������ς����B\n");
	printf("���l�X�R�A %d�_\n", hp);

	if (hp < 0)
		printf("\n�c�O�I �N�͓�Y�n�̋֊���Ƃ��߂����c�܂��Ȃ����f����邾�낤�B\n");
	else if(hp > 0 && hp < 50){
		printf("\n�����Ȃ��c���߂ɂ��Ă͂ȁI �X�Ȃ鐸�i���K�v���B�����Ȃ肽���΋�炦�I\n");
	}
	else if (hp >= 50) {
		printf("\nCongratulation�I �N�͐��^�����̃W�����A���I �O�c�����Ƃ���܂��悤�ɁA���[�����I\n");
	}

	int end;

	scanf("%d", &end);

	return 0;


}
