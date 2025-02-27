/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function (init) {
  let current = init;
  const original = init;

  return {
    increment: function () {
      return ++current;
    },

    decrement: function () {
      return --current;
    },

    reset: function () {
      current = original;
      return current;
    },
  };
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
