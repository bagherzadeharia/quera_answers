import kotlin.math.pow

fun main() {
    val x = readln().toDouble()
    val n = readln().toInt()
    print("%.3f".format(calculateExponential(x, n)))
}

fun calculateExponential(x: Double, n: Int): Double {
    var ans = 1.0 // e^0 = 1
    for (i in 1 until n) {
        ans += x.pow(i) / factorial(i)
    }
    return ans
}

fun factorial(num: Int): Double {
    return if (num >= 1) num * factorial(num - 1) else 1.0
}
