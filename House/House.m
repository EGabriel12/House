//
//  House.m
//  House
//
//  Created by Elias Gabriel dos Santos Correa on 10/07/19.
//  Copyright © 2019 Elias Gabriel dos Santos Correa. All rights reserved.
//

#import "House.h"

@interface House()
    @property (nonatomic, readwrite) int numberOfBedrooms; // Dessa maneira, só podemos ler e escrever de dentro da classe
@end

@implementation House
    
    -(instancetype) initWithAdress:(NSString*) adress { // Dessa maneira, personalizaos o método init
        self = [super init]; // Todo método init começa chamando o init de sua superclasse
        
        if(self) {
            // Usa-se o '_Propertie' para acessá-las diretamente
            _adress = [adress copy]; // Como a propriedade está marcada como copy, podemos apenas passar uma cópia do valor de parâmetro
            _numberOfBedrooms = 2;
            _hasHotTub = false;
        }
        return self;
    }

@end
