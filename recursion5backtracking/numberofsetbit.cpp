int solve(int x, int y)
{
  if(x  > 0)
  {
      return (x%y +  solve(x/y, y));
  }
  else return 0;
}
//study insertion and selection sort recursive method
void solve(int arr[], int n)
{
    if (n <= 1)
    {
        return;
    }
    solve( arr, n-1 );
    int last = arr[n-1];
    int j = n-2;
    while (j >= 0 && arr[j] > last)
    {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;
}