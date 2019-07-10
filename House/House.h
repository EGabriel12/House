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
    @property (nonatomic, copy) NSString *adress; // Modelo de declaração // copy: não deixa a propriedade vulnerável a alterações não intencionais
    @property (nonatomic, readonly) int numberOfBedrooms; // (atomic é default)
    @property (nonatomic) BOOL hasHotTub;
    
@end

NS_ASSUME_NONNULL_END
