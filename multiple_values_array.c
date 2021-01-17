void multiReturnArray(int *a, int size, int *min, int *max, int *sum)
{
  int i;
  *max = *a;
  *min = *a;
  *sum=0;
  for(i=0;i<size;i++)
  {
    if(*max < *(a+i))
    {
       *max = *(a+i);
    }
  }
  for(i=0;i<size;i++)
  {
    if(*min > *(a+i))
    {
      *min = *(a+i);
    }
    *sum+= *(a+i);  
  }
}
int main()
{
  
}