fun pythagoreanTriplet(n: Int) {
    for (i in 1..n / 3) {
        for (j in (i + 1)..(n / 2)) {
            val k = n - i - j
            if (i * i + j * j == k * k) {
                println("$i $j $k")
                return
            }
        }
    }
    println("Impossible")
}

fun main() {
    val n = readLine()!!.toInt()
    pythagoreanTriplet(n)
}
