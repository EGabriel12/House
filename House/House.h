//
//  House.h
//  House
//
//  Created by Elias Gabriel dos Santos Correa on 10/07/19.
//  Copyright © 2019 Elias Gabriel dos Santos Correa. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface House : NSObject
    @property (nonatomic) NSString *adress; // Modelo de declaração
    @property (nonatomic) int numberOfBedrooms;
    @property (nonatomic) BOOL hasHotTub;
    
@end

NS_ASSUME_NONNULL_END
