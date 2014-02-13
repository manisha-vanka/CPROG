int main()
{
int i,j,k=1,p,g,a[100],b[100],n,count=1;
printf("Enter the maximum number of elements\n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=1; i<=n; i++)
scanf("%d",&a[i]);
for(i=1; i<=n; i++)
{
for(j=i+1;j<=n; j++)
{
if(a[i]==a[j])
count++;
}
b[k]=count;
k++;
count=1;
}
 
g=b[1];
p=1;
for(i=2; i<=n; i++)
{
if(g<b[i])
{
g=b[i];
p=i;
}
}
printf("The mode %d\n",a[p]);
printf(" it occurred %d times\n",b[p]);
return 0;
}