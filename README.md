# citrc-final
> 題解ouob : [CITRC Final](https://hackmd.io/@zhenzhe/citrcfinal)
> 時間限制都是 1s, 空間限制都是 1024MB
> ~~我寫隨便生的意思就是random~~
## problemA. I love CITRC
- 100 point
- 要寫checker
```
第一行輸出的字串，只要有錯就WA
第二行輸出的數字（可以是double）為 x
如果 x 屬於 [0,99] 則得到 x 分(e.g. x = 50.3就得到50分)
如果 x 屬於 (99,100) 則得到 100 分(AC)(e.g. x = 99.6就得到AC)
如果 x == 100 則得到 0 分
其他狀況也是 0 分（e.g. -1, 201...）
```
## problemB. BocchiAsh
- 100 point
- 就是一般的樹dp,子題一是一條鏈，測資要好一點
- 這題是偷 [codeforces r928pG](https://codeforces.com/contest/1926/problem/G)

## problemC. HARC
- 100 point
- 應該隨便生一生就好，但要保證三個數字不同，而且名字也不同

## problemD. Mathematician
- 100 point + 60 point
- 經典不敗 A + B
- 子題一就是 `int32_t`
- 子題二就是卡 `int64_t`
- 子題三就是大數加法，測資記得放一筆 A=0,B=0，然後都不要有負數

## problemE. Attack on Chicken
- 100 point
- 字串輸出題，也是隨邊生就好

## problemF. Stay Up
- 100 point + 60 point
- 這題是傳說中的費氏數列，是從 2024TRML 偷來的
- 子題一是枚舉子集
- 子題二是正常dp
- 子題三是矩陣快速冪

## problemG. Checkmate
- 100 point
- 簡單的if判斷題應該也可以隨便生

## problemH. 10-1=9
- 100 point
- while / for 題
- 一樣亂生應該沒差

## problemI. Chaos
- 100 point + 100 point
- 拿來防破台的（？）KMP題，有A,B兩字串，問B是否為Ａ的子字串
- 子題一是B長度為1
- 子題二是可以用兩格for迴圈暴力過
- 子題三就是KMP

## problemJ. Summer
- 100 point
- reverse function實作題
- 也是隨便生
