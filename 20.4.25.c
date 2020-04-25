int singleNumber(int* nums, int numsSize)
{
int i,j=0;
for(i=0;i<numsSize;i++)
{
    j = j ^ nums[i];  //Òì»ò 
}
return j;
}
