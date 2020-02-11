#lang racket
(require racket/format)

(define (matrix-m-n m n)
  (for/list ([i n])
    (for/list ([j m])
    (+ (* i m) j 1))))

(define (print-matrix mx)
  (define (print-line lst)
    (for ([x lst])
      (display (~a x #:width 3 #:align 'right))))
  (for ([row mx])
    (print-line row)
    (displayln "")))

(define (list-ref-xy lol x y)
  (list-ref (list-ref lol y) x))

(define (rotate-matrix mx)
  (let ([m (length (car mx))]
        [n (length mx)])
    (for/list ([i m])
      (for/list ([j n])
        (list-ref-xy mx (- m i 1) j)))))

(define (unwrap-matrix mx)
  (let ([top (car mx)]
        [rst (rest mx)])
    (cond
      [(empty? rst)
       (list top)]
      [else
       (let ([rot (rotate-matrix rst)])
         (cons (list top)
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

(time (length (unwrap-matrix (matrix-m-n 4 4))))
(time (length (unwrap-matrix (matrix-m-n 40 40))))
(time (length (unwrap-matrix (matrix-m-n 200 300))))

(define (top-matrix mx)
  (let ([m (length (car mx))])
    (for/list ([i (sub1 m)])
      (list-ref (list-ref mx 0) i))))

(define (right-matrix mx)
  (let ([m (length (car mx))]
        [n (length mx)])
    (for/list ([j (sub1 n)])
      (list-ref (list-ref mx j) (sub1 m)))))

(define (bottom-matrix mx)
  (let ([m (length (car mx))]
        [n (length mx)])
    (for/list ([i (sub1 m)])
      (list-ref (list-ref mx (sub1 n)) (- m i 1)))))

(define (left-matrix mx)
  (let ([m (length (car mx))]
        [n (length mx)])
    (for/list ([j (sub1 n)])
      (list-ref (list-ref mx (- n j 1)) 0))))

(top-matrix test0)
(right-matrix test0)
(bottom-matrix test0)
(left-matrix test0)