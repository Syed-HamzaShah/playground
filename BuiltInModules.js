const os = require("os");

// print user info
const user = os.userInfo();
console.log(user);

//print the uptime of computer in seconds
console.log(`System has been up for ${os.uptime()}`);

const currentOS = {
  name: os.type(),
  release: os.release(),
  totalMem: os.totalmem(),
  freeMem: os.freemem(),
};
console.log(currentOS);
