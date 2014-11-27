
// struct h{
//	int x[10];
//	int y[10];
//	int s[10];//合計用
//
//
//} kazu = { 
//	{3,1,1,2,0,1,2,8,0,6},
//	{4,2,3,4,1,4,4,3,6,8}
//};


int s = 0;//スタート時一回
int tmp[3];//スワップ用




void quicksort(struct h *a, int left, int right){
	/* クイックソート(２次元座標）
	まずY座標を小さい順に上から並び替え、Y座標が同じ時はｘ座標が小さい方を上にする。

	* a.x     : ソートする配列（ｘ）
	* a.y　　　: ソートする配列（ｙ）
	* left  : ソートするデータの開始位置
	* right : ソートするデータの終了位置
	*/
	
	
	


	if (left < right) {

		
		
		if (s == 0){
			int youso = right - left + 1;//要素数
			//int *niji_sort;
			int l;//ループ用

			//niji_sort = (int*)malloc(sizeof(int)*youso);//二次配列のY＊１０＋ｘの値を入れる
			for (l = 0; l < youso; l++){
				a->s[l] = a->y[l] * 10 + a->x[l];
			}
			s = 1;
		}



		int i = left, j = right;





		int pivot = med3(a->s[i], a->s[i + (j - i) / 2], a->s[j]); /* (i+j)/2ではオーバーフローしてしまう */



		while (1) { /* a->s[i] を pivot 以上と以下の集まりに分割する */
			while (a->s[i] < pivot) { i++; } /* a->s[i][i] >= pivot となる位置を検索 */
			while (pivot < a->s[j]) { j--; } /* a->s[i][j] <= pivot となる位置を検索 */


			if (i >= j)  { break; }

			//if (  a->s[i] == a->s[j]==pivot ){
			//	tmp[1] = a->x[i]; a->x[i] = a->x[j]; a->x[j] = tmp[1]; /* a[i],a[j] を交換 */
			//	i++; j--;
			//	break;
			//}//y座標が等しくてｘ座標が右のほうが大きい時は入れ替えない 

			tmp[0] = a->s[i]; a->s[i] = a->s[j]; a->s[j] = tmp[0]; /* a->s[i][i],a->s[i][j] を交換 */
			tmp[1] = a->y[i]; a->y[i] = a->y[j]; a->y[j] = tmp[1]; /* a[i],a[j] を交換 */
			tmp[2] = a->x[i]; a->x[i] = a->x[j]; a->x[j] = tmp[2]; /* a[i],a[j] を交換 */

			i++; j--;
		}
		quicksort(a, left, i - 1); /* 分割した右を再帰的にソート */
		quicksort(a, j + 1, right); /* 分割した右を再帰的にソート */
		//quicksort(a, left, i - 1);  /* 分割した左を再帰的にソート */
		//quicksort(a, j + 1, right); /* 分割した右を再帰的にソート */



	}
	

}