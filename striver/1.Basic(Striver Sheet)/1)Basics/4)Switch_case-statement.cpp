double areaSwitchCase(int ch, vector<double> a) {
	double Area=0.0;
	switch(ch){
		case 1:
			Area=M_PI*a[0]*a[0];
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
