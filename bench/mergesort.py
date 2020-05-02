#!/usr/bin/env python
import math
def mergesort(arr):
    def m(head, tail):
        if head < tail:
            mid = int(math.floor((head + tail) / 2))
            m(head, mid)
            m(mid + 1, tail)

            l = arr[head: mid + 1]
            r = arr[mid+1: tail+1]
            k = head
            while len(l) > 0 and len(r) > 0:
                if l[0] <= r[0]:
                    arr[k] = l.pop(0)
                else:
                    arr[k] = r.pop(0)
                k += 1

            while len(l) > 0:
                arr[k] = l.pop(0)
                k += 1
        return arr
    return m(0, len(arr)-1)

numbers = [47448054, 1106251565, 1208921855, 170086026, 840395770,
444281018, 1297307905, 1613614128, 357068250, 1829657695, 654555439,
1261773796, 1821640729, 449683981, 1062536538, 96076061, 1387478498,
1835855315, 364455615, 4830124, 864633601, 289493189, 471351435,
435996916, 1366312031, 888420407, 1923379522, 735726044, 1094401518,
245520239, 109946712, 1107893495, 592868510, 700148765, 273016388,
343881444, 420725947, 1259049694, 1692920986, 71271532, 1154617350,
593508009, 1106700528, 430204045, 1045928775, 1330476642, 49983990,
1451164767, 1175404600, 644832496, 365016297, 1048732794, 503615317,
217186301, 1176160338, 1183622513, 81711049, 1720671278, 1393072097,
1315236388, 1451774341, 92848458, 271000544, 1667871288, 380233084,
1053079658, 1249341507, 1276652307, 1722015039, 1243698025, 178813868,
1449271074, 1994327579, 270972819, 1043379189, 1592595484, 462468972,
1464773315, 1994172406, 997300623, 46405283, 1614271949, 447907123,
317292284, 378291676, 1253835093, 523476912, 1606023999, 59263848,
1234358080, 140981643, 1828471854, 1197394207, 1317927546, 878287915,
334576359, 982149842, 642878238, 1024064999, 1834342299]
i = 0
while i < 3000:
	mergesort(numbers)
	i += 1

