'use strict';

function Item(name) {
  const item = {
    name,
  };

  Object.defineProperty(item, 'toString', {
    value: function() {
      return `${this.name}`;
    },
    enumerable: false,
  });

  return item;
}

module.exports = { Item }
