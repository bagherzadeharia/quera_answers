fun main(){
    val n = readln().toInt()
    var ans = 1
    if(n>1){
        for(i in 2..n step 1) {
            ans = ans * i
        }
    }
    print(ans)
}
