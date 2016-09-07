package uri;

import java.util.Scanner;

public class QuebraCabeca {

	public static void main(String[] args) {
		
		int l,c;
		Scanner scan = new Scanner(System.in);
		l = scan.nextInt();
		c = scan.nextInt();
		
		String matrix[][] = new String[l][c];
		
		for(int i = 0; i <= l; i++){
			for(int k = 0; k <= c; k++){
				if(k < c && i < l){
					matrix[i][k] = scan.next();					
				}else{
					
				}
			}
		}
		
		System.out.println();
		
		for(int i = 0; i <= l; i++){
			for(int k = 0; k <= c; k++){
				System.out.print(matrix[i][k] + " ");
			}
			System.out.println();
		}
		
		scan.close();
	}
}
