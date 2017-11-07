//Cierta empresa requiere controlar la existencia de diez productos, los cuales
//se almacenan en un vector A, mientras que los pedidos de los clientes
//de estos productos se almacenan en un vector B. Se requiere generar un
//tercer vector C con base en los anteriores que represente lo que se requiere
//comprar para mantener el stock de inventario, para esto se considera lo
//siguiente: si los valores correspondientes de los vectores A y B son iguales
//el doble de la diferencia entre B y A, si se da el caso de que A es mayor
//que B, se almacena B, que indica lo que se requiere comprar para mantener
//el stock de inventario. 
#include<stdio.h>
#include<stdlib.h>

int main(){
	int i;
	int A[10],B[10],C[10];
	printf("Cantidad de cada producto en el inventario\n");
	for(i=0;i<10;i++){
		scanf("%d", &A[i]);
	}
	printf("Pedidos de las personas de cada producto\n");
	for(i=0;i<10;i++){
		scanf("%d", &B[i]);
	}
	for(i=0;i<10;i++){
		if (A[i]==B[i]){
			C[i]=A[i];
			
		}else
		if(B[i]>A[i]){
			C[i]=(B[i]-A[i])*2;
		}else 
		if (A[i]>B[i]){
			C[i]=B[i];
		}
	}
	printf("Esto se necesita para llenar el inventario\n");
	for(i=0;i<10;i++){
		printf("%d ", C[i]);
		
	}
	
	return(0);
}
