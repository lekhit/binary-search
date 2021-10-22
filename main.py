from icecream import ic
def search(find: int,lt:[int]):
  size=len(lt)
  mid=size//2
  
  if lt[mid]==find:
    return(mid)
  else:
    if lt[mid]>find:
      lt=lt[:mid]
    else:
      lt=lt[mid:]
    return search(find,lt)
    
  return "not found"
def search2(find) -> int:
  lt=[1,2,3,4,5]
  start=0
  end=len(lt)-1
  while start<end:
    mid=(start+end)//2
    
    if find > lt[mid]:
      start=mid+1
    else:
      #if find==lt[mid]:
      #  return mid
      end=mid
    ic(start,mid,end)
  if find==lt[start]:
    return start
  else: return -1
import requests
rs=requests.get('')
print(rs.content)

