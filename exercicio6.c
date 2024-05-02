int buscaBinariaRecursiva(int arr[], int inicio, int fim, int alvo) {
    if (fim >= inicio) {
        int meio = inicio + (fim - inicio) / 2;
        
        if (arr[meio] == alvo)
            return meio;
        
        if (arr[meio] > alvo)
            return buscaBinariaRecursiva(arr, inicio, meio - 1, alvo);
        
        return buscaBinariaRecursiva(arr, meio + 1, fim, alvo);
    }
    
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int alvo = 10;
    int resultado = buscaBinariaRecursiva(arr, 0, tamanho - 1, alvo);
    
    if (resultado != -1) {
        printf("Elemento encontrado na posição %d\n", resultado);
    } else {
        printf("Elemento não encontrado\n");
    }
    
    return 0;
}