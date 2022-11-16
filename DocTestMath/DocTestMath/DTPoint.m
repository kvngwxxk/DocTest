//
//  Point.m
//  DocTestMath
//
//  Created by Kangwook Lee on 2022/11/16.
//

#import <Foundation/Foundation.h>
#import "Point.h"

@implementation Point

- (void)setPoint:(int)ptx int:(int)pty {
	x = ptx;
	y = pty;
}
- (int)getX {
	return x;
}
- (int)getY {
	return y;
}
@end
