/* left rotate array by d places

arr[]= {1,2,3,4,5,6,7} d=2 or k=2
resultant array after rotation of d places {3,4,5,6,7,1,2}

if rotation is 7 places then it will rotate and bring the number at same place 

but if d=8 then it will be 7 rotation + 1 rotations
as we can see that after 7 rotation it will come its original place 
then after one rotation we have to do 


if d=15
7+7+1
original place will be 14 and then one rotation we have to do 

if d=20;
then d=d%n;or k=k%n; 
6 will remain this means that much rotaion

     6 rotation means if 
     1,2,3,4,5,6,7
     7,1,2,3,4,5,6


index     0 1 2 3 4 5 6
  arr[] ={1,2,3,4,5,6,7}
  temp[]={1,2,3}
shifting=>
    for(i=d; i<n;i++)
    {
    a[i-d]=a[i];
    }

    put back temp last step
    if you are shifting 3 places
    only the last 3 places will be occupied 
    for(int i=n-k; i<n;i++)
     j=0
    {
      a[i]== temp[j];
      j++;
    }
*/
