
// struct h{
//	int x[10];
//	int y[10];
//	int s[10];//���v�p
//
//
//} kazu = { 
//	{3,1,1,2,0,1,2,8,0,6},
//	{4,2,3,4,1,4,4,3,6,8}
//};


int s = 0;//�X�^�[�g�����
int tmp[3];//�X���b�v�p




void quicksort(struct h *a, int left, int right){
	/* �N�C�b�N�\�[�g(�Q�������W�j
	�܂�Y���W�����������ɏォ����ёւ��AY���W���������͂����W��������������ɂ���B

	* a.x     : �\�[�g����z��i���j
	* a.y�@�@�@: �\�[�g����z��i���j
	* left  : �\�[�g����f�[�^�̊J�n�ʒu
	* right : �\�[�g����f�[�^�̏I���ʒu
	*/
	
	
	


	if (left < right) {

		
		
		if (s == 0){
			int youso = right - left + 1;//�v�f��
			//int *niji_sort;
			int l;//���[�v�p

			//niji_sort = (int*)malloc(sizeof(int)*youso);//�񎟔z���Y���P�O�{���̒l������
			for (l = 0; l < youso; l++){
				a->s[l] = a->y[l] * 10 + a->x[l];
			}
			s = 1;
		}



		int i = left, j = right;





		int pivot = med3(a->s[i], a->s[i + (j - i) / 2], a->s[j]); /* (i+j)/2�ł̓I�[�o�[�t���[���Ă��܂� */



		while (1) { /* a->s[i] �� pivot �ȏ�ƈȉ��̏W�܂�ɕ������� */
			while (a->s[i] < pivot) { i++; } /* a->s[i][i] >= pivot �ƂȂ�ʒu������ */
			while (pivot < a->s[j]) { j--; } /* a->s[i][j] <= pivot �ƂȂ�ʒu������ */


			if (i >= j)  { break; }

			//if (  a->s[i] == a->s[j]==pivot ){
			//	tmp[1] = a->x[i]; a->x[i] = a->x[j]; a->x[j] = tmp[1]; /* a[i],a[j] ������ */
			//	i++; j--;
			//	break;
			//}//y���W���������Ă����W���E�̂ق����傫�����͓���ւ��Ȃ� 

			tmp[0] = a->s[i]; a->s[i] = a->s[j]; a->s[j] = tmp[0]; /* a->s[i][i],a->s[i][j] ������ */
			tmp[1] = a->y[i]; a->y[i] = a->y[j]; a->y[j] = tmp[1]; /* a[i],a[j] ������ */
			tmp[2] = a->x[i]; a->x[i] = a->x[j]; a->x[j] = tmp[2]; /* a[i],a[j] ������ */

			i++; j--;
		}
		quicksort(a, left, i - 1); /* ���������E���ċA�I�Ƀ\�[�g */
		quicksort(a, j + 1, right); /* ���������E���ċA�I�Ƀ\�[�g */
		//quicksort(a, left, i - 1);  /* �������������ċA�I�Ƀ\�[�g */
		//quicksort(a, j + 1, right); /* ���������E���ċA�I�Ƀ\�[�g */



	}
	

}