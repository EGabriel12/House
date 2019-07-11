//
//  Bedroom.h
//  House
//
//  Created by Elias Gabriel dos Santos Correa on 10/07/19.
//  Copyright © 2019 Elias Gabriel dos Santos Correa. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, Direction) {
    North,
    South,
    East,
    West
}; // Dessa maneira, se declara um enum

@interface Bedroom : NSObject
    @property (nonatomic) BOOL privateBath;
    @property (nonatomic) Direction directionWindowFaces;
@end

NS_ASSUME_NONNULL_END
