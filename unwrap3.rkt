#lang typed/racket
(require racket/format)

(: matrix-m-n (-> Integer Integer (Vectorof (Vectorof Integer))))
(define (matrix-m-n m n)
  (for/vector : (Vectorof (Vectorof Integer))
    ([i n])
    (for/vector : (Vectorof Integer)
      ([j m])
      (+ (* i m) j 1))))

(: print-matrix (-> (Vectorof (Vectorof Integer)) Void))
(define (print-matrix mx)
  (: print-line (-> (Vectorof Integer) Void))
  (define (print-line lst)
    (for ([x lst])
      (display (~a x #:width 3 #:align 'right))))
  (for ([row mx])
    (print-line row)
    (displayln "")))

(: vector-ref-xy (-> (Vectorof (Vectorof Integer)) Integer Integer Integer))
(define (vector-ref-xy lol x y)
  (vector-ref (vector-ref lol y) x))

(: rotate-matrix (-> (Vectorof (Vectorof Integer)) (Vectorof (Vectorof Integer))))
(define (rotate-matrix mx)
  (let ([m (vector-length (vector-ref mx 0))]
        [n (vector-length mx)])
    (for/vector : (Vectorof (Vectorof Integer))
      ([i m])
      (for/vector : (Vectorof Integer)
        ([j n])
        (vector-ref-xy mx (- m i 1) j)))))

(: unwrap-matrix (-> (Vectorof (Vectorof Integer)) (Vectorof (Vectorof Integer))))
(define (unwrap-matrix mx)
  (let ([top (vector-ref mx 0)]
        [rst (vector-drop mx 1)])
    (cond
      [(zero? (vector-length rst))
       (vector top)]
      [else
       (let ([rot (rotate-matrix rst)])
         (vector-append (vector top)
                        (unwrap-matrix rot)))])))


(define test0
  (matrix-m-n 4 5))
(define test1
  (matrix-m-n 3 6))
(define test2
  (matrix-m-n 8 7))

(print-matrix test0)
(displayln "")
(displayln (unwrap-matrix test0))
(displayln "")

;(print-matrix test1)
;(displayln "")
;(displayln (unwrap-matrix test1))
;(displayln "")

;(print-matrix test2)
;(displayln "")
;(displayln (unwrap-matrix test2))
;(displayln "")

(time (vector-length (unwrap-matrix (matrix-m-n 4 4))))
(time (vector-length (unwrap-matrix (matrix-m-n 40 40))))
(time (vector-length (unwrap-matrix (matrix-m-n 200 300))))

(: top-matrix (-> (Vectorof (Vectorof Integer)) (Vectorof Integer)))
(define (top-matrix mx)
  (let ([m (vector-length (vector-ref mx 0))])
    (for/vector : (Vectorof Integer)
      ([i (sub1 m)])
      (vector-ref-xy mx i 0))))

(: right-matrix (-> (Vectorof (Vectorof Integer)) (Vectorof Integer)))
(define (right-matrix mx)
  (let ([m (vector-length (vector-ref mx 0))]
        [n (vector-length mx)])
    (for/vector : (Vectorof Integer)
      ([j (sub1 n)])
      (vector-ref-xy mx (sub1 m) j))))

(: bottom-matrix (-> (Vectorof (Vectorof Integer)) (Vectorof Integer)))
(define (bottom-matrix mx)
  (let ([m (vector-length (vector-ref mx 0))]
        [n (vector-length mx)])
    (for/vector : (Vectorof Integer)
      ([i (sub1 m)])
      (vector-ref-xy mx (- m i 1) (sub1 n)))))

(: left-matrix (-> (Vectorof (Vectorof Integer)) (Vectorof Integer)))
(define (left-matrix mx)
  (let ([m (vector-length (vector-ref mx 0))]
        [n (vector-length mx)])
    (for/vector : (Vectorof Integer)
      ([j (sub1 n)])
      (vector-ref-xy mx 0 (- n j 1)))))

(top-matrix test0)
(right-matrix test0)
(bottom-matrix test0)
(left-matrix test0)