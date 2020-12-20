import java.util.*;

import java.io.*;
//given pogram is only when the pair is of 2 ie (a,b)
class countPairsDivisbleByk {
	public static void main(String[] args) throws IOException {
		InputStreamReader is = new InputStreamReader(System.in);
		BufferedReader br  = new BufferedReader(is);
		int n,m;
		String[] s = br.readLine().split(" ");
		n = Integer.parseInt(s[0]);
		m = Integer.parseInt(s[1]);

		String[] in = br.readLine().split(" ");
		int arr[] = new int[n];
		for(int i=0; i<n; i++) {
			arr[i] = Integer.parseInt(in[i]);
		}

		int H[] = new int[m];
		for(int i=0; i<m; i++) {
			H[i] = 0;
		}

		for(int i=0; i<n; i++) {
			H[arr[i]%m]++;
		}

		//default case
		int ans = H[0] * (H[0]-1)/2;

		for(int i=1; i<=m/2 && i!=m-i; i++) {
			ans = ans + (H[i] * H[m-i]);
		}

		if(m%2==0) {
			ans = ans + (H[m/2] * (H[m/2]-1)/2);
		}

		System.out.println(ans);


	}
}