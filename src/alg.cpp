// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  int count = 0;
  for (int i = 0; i < len - 1; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[j] + arr[i] == value)
        count++;
    }  
  }  
  return count;
}

int countPairs2(int *arr, int len, int value) {
  int count = 0;
  for (int i = 0; i < len - 1; i++) {
    if (arr[i] <= value) {
      for (int j = len - 1; j > i; j--) {
        if (arr[i] + arr[j] == value)
          count++;
      }  
    }  
  }
  return count;
}

int countPairs3(int *arr, int len, int value) {
  int count = 0;
  for (int i = 0; i < len - 1; i++) {
    int left = i;
    int right = len;
    while (left < right - 1) {
      int m = (left + right) / 2;
      if (arr[i] + arr[m] == value) {
        count++;
        if j = m + 1;
        while (arr[i] + arr[j] == value && j < right) {
          count++;
          j++;
        } 
        j = m - 1;
        while (arr[i] + arr[j] == value && j > left) {
          count++;
          j--;
        }  
        break;
      } 
      if (arr[i] + arr[m] > value
        right = m;
      else
        left = m;
    }  
  }  
  return count;
}
