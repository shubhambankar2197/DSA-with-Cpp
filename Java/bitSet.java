import java.io.*;
import java.util.*;
class bitSet {
	public static void main(String[] args) throws IOException {
		int testCases;
		InputStreamReader is = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(is);
		testCases = Integer.parseInt(br.readLine());
		Integer arr[] = new Integer[testCases];
		int i=0;
		while(i<testCases) {
			arr[i] = Integer.parseInt(br.readLine());
			i++;
		}

		bitset(arr,testCases);
	}

	public static void bitset(Integer arr[],int n) {
		// for(int i=0; i<n; i++) {
		// 	System.out.print(arr[i]+" ");
		// }
		// System.out.println("");

		int max = Collections.max(Arrays.asList(arr));
		ArrayList<String> binary = new ArrayList<>();
		String bin,binSub = "11";

		long i=0;
		long count=0;		
		while(count<=max) {
			bin = Long.toBinaryString(i);
			if(!bin.contains(binSub)) {
				binary.add(bin);
				count++;
			}
			// System.out.println("i="+i);
			i++;
		}

		// Iterator it = binary.iterator();
		// while(it.hasNext()) {
		// 	System.out.print(it.next()+ " ");
		// }

		System.out.println("");

		for(int k=0; k<n; k++) {
			System.out.println(binary.get(arr[k]));
		}

		
	}
}