double areaSwitchCase(int ch, vector<double> a) {
	int Area;
	switch(ch){
		case 1:
			Area=3.141593*a[1]*a[1];
			return Area;
			break;
		case 2:
			Area=a[0]*a[1];
			return Area;
			break;
		default:
			return 0;
	}
}
// case 1 failing
