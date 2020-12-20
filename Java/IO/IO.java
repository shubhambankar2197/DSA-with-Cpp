package IO;
import java.io.*;

public class IO {
	InputStreamReader ir;
	BufferedReader br;

	public IO() {
		ir = new InputStreamReader(System.in);
		br = new BufferedReader(ir);
	}

	// public String next() {
 //        while(st==null || !st.hasMoreElements()) {
 //            try {
 //                st = new StringTokenizer(br.readLine());
 //            } catch (IOException e) {
 //                e.printStackTrace();
 //            }
 //        }
 //        return st.nextToken();
 //    }

	public int nextInt() throws IOException{
		return Integer.parseInt(br.readLine());
	}
}