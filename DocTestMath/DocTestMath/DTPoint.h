//
//  Point.h
//  DocTestMath
//
//  Created by Kangwook Lee on 2022/11/16.
//

#ifndef Point_h
#define Point_h

@interface Point : NSObject
{
	int x, y;
}
/**
 * Point를 세팅하는 함수
 * @param ptx 세팅할 x좌표
 * @param pty 세팅할 y좌표
 */
- (void)setPoint:(int)ptx int:(int)pty;

/**
 * x좌표를 가져오는 함수
 * @return 가져온 Int형 x 값
 */
- (int)getX;

/**
 * y좌표를 가져오는 함수
 * @return 가져온 Int형 y 값
 */
- (int)getY;
@end

#endif /* Point_h */
