import java.util.*;
import jva.io.*;
class MaximizeTheEarning {
	public static void main(String[] args) {
		InputStreamReader ir  = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(ir);
		int numStreet, numBuild, rupEarning;
		numStreet = Integer.parseInt(br.readLine());
		String[] temp = br.readLine().split(" ");
		numBuild = temp[0];
		rupEarning = temp[1];
		int i=0;
		String[] temp2 = br.readLine().split(" ");
		int arr[] = new int[numBuild.length];
		while(i<numBuild) {
			arr[i] = Integer.parseInt(temp2[i]);
			i++;
		}
	}
}