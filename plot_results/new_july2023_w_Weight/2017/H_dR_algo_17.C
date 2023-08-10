void H_dR_algo_17()
{
//=========Macro generated from canvas: H_dR_algo_17/H_dR_algo_17
//=========  (Thu Aug 10 12:24:04 2023) by ROOT version 6.14/09
   TCanvas *H_dR_algo_17 = new TCanvas("H_dR_algo_17", "H_dR_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_algo_17->SetHighLightColor(2);
   H_dR_algo_17->Range(0,0,1,1);
   H_dR_algo_17->SetFillColor(0);
   H_dR_algo_17->SetFillStyle(4000);
   H_dR_algo_17->SetBorderMode(0);
   H_dR_algo_17->SetBorderSize(2);
   H_dR_algo_17->SetFrameFillStyle(1000);
   H_dR_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-327.1362,6.525,326819.1);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(280099.5);
   
   TH1F *st_stack_118 = new TH1F("st_stack_118","",30,0,6);
   st_stack_118->SetMinimum(0.01);
   st_stack_118->SetMaximum(294104.5);
   st_stack_118->SetDirectory(0);
   st_stack_118->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_118->SetLineColor(ci);
   st_stack_118->GetXaxis()->SetRange(1,31);
   st_stack_118->GetXaxis()->SetLabelFont(42);
   st_stack_118->GetXaxis()->SetLabelSize(0.035);
   st_stack_118->GetXaxis()->SetTitleSize(0.035);
   st_stack_118->GetXaxis()->SetTitleFont(42);
   st_stack_118->GetYaxis()->SetTitle("Events/0.2");
   st_stack_118->GetYaxis()->SetLabelFont(42);
   st_stack_118->GetYaxis()->SetLabelSize(0.05);
   st_stack_118->GetYaxis()->SetTitleSize(0.057);
   st_stack_118->GetYaxis()->SetTitleOffset(1.2);
   st_stack_118->GetYaxis()->SetTitleFont(42);
   st_stack_118->GetZaxis()->SetLabelFont(42);
   st_stack_118->GetZaxis()->SetLabelSize(0.035);
   st_stack_118->GetZaxis()->SetTitleSize(0.035);
   st_stack_118->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_118);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,50615.7);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,62452.48);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,62876.81);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,52671.98);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,48476.51);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,55362.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,56801.69);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,67019.64);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,76148.89);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,84817.16);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,88878.82);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,115523.7);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,95651.12);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,113028.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,100649.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,96997.33);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,90064.29);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,78613.11);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,77152.72);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,62203.57);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,35647.21);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,30031.86);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,23138.56);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(26,19340.53);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(27,11348.85);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(28,12056.44);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(29,8720.872);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(30,5048.245);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(31,4754.209);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,2923.1);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,3734.323);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,18824.03);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,3828.821);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,2991.439);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,3971.676);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,3489.835);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,3849.214);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,3907.623);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,3980.241);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,3841.949);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,17223.41);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,4009.657);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,11586.31);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,4553.532);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,4460.184);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,4550.734);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,3914.715);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,14352.8);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,15522.27);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,2363.573);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,2661.697);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,2019.245);
   VbbHcc_algo_H_dR_stack_1->SetBinError(26,1993.385);
   VbbHcc_algo_H_dR_stack_1->SetBinError(27,1394.426);
   VbbHcc_algo_H_dR_stack_1->SetBinError(28,1608.127);
   VbbHcc_algo_H_dR_stack_1->SetBinError(29,1256.829);
   VbbHcc_algo_H_dR_stack_1->SetBinError(30,866.681);
   VbbHcc_algo_H_dR_stack_1->SetBinError(31,989.5316);
   VbbHcc_algo_H_dR_stack_1->SetEntries(112106);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,-0.0630298);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,217.9789);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,362.5217);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,414.4109);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,422.8317);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,417.4433);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,430.8804);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,470.2811);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,527.266);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,597.6148);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,624.4725);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,657.0096);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,663.5457);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,635.0402);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,635.6836);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,582.3348);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,547.0057);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,497.7283);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,468.3787);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,416.0584);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,338.2792);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,267.7963);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,218.2416);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,172.4352);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,130.8874);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,99.84022);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,80.16574);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(29,58.13489);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(30,33.49014);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(31,28.86986);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.0630298);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,6.75627);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,8.792169);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,9.243705);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,9.102386);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,8.978739);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,9.148425);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,9.544504);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,10.21534);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,10.98701);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,11.0037);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,11.29107);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,11.21235);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,10.77201);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,10.90463);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,10.4799);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,10.00302);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,9.565708);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,9.298278);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,8.92768);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,7.90829);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,7.010295);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,6.338348);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,5.715431);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,4.941094);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,4.354705);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,3.955073);
   VbbHcc_algo_H_dR_stack_2->SetBinError(29,3.367997);
   VbbHcc_algo_H_dR_stack_2->SetBinError(30,2.452649);
   VbbHcc_algo_H_dR_stack_2->SetBinError(31,2.265385);
   VbbHcc_algo_H_dR_stack_2->SetEntries(138653);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_3 = new TH1D("VbbHcc_algo_H_dR_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(2,2.006388);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(3,6192.048);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(4,12611.73);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(5,14907);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(6,15120.06);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(7,13716.31);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(8,11763.89);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(9,10321.94);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(10,9514.268);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(11,9417.155);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(12,9598.63);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(13,9587.93);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(14,9083.858);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(15,8394.378);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(16,7763.097);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(17,7168.542);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(18,6780.541);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(19,6667.028);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(20,6463.959);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(21,5913.107);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(22,5227.86);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(23,4517.367);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(24,3990.509);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(25,3572.507);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(26,3166.16);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(27,2731.482);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(28,2192.422);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(29,1515.236);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(30,834.5299);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(31,534.008);
   VbbHcc_algo_H_dR_stack_3->SetBinError(2,0.3893189);
   VbbHcc_algo_H_dR_stack_3->SetBinError(3,21.78091);
   VbbHcc_algo_H_dR_stack_3->SetBinError(4,31.10858);
   VbbHcc_algo_H_dR_stack_3->SetBinError(5,33.76171);
   VbbHcc_algo_H_dR_stack_3->SetBinError(6,33.97902);
   VbbHcc_algo_H_dR_stack_3->SetBinError(7,32.26369);
   VbbHcc_algo_H_dR_stack_3->SetBinError(8,29.76051);
   VbbHcc_algo_H_dR_stack_3->SetBinError(9,27.72343);
   VbbHcc_algo_H_dR_stack_3->SetBinError(10,26.44971);
   VbbHcc_algo_H_dR_stack_3->SetBinError(11,26.24713);
   VbbHcc_algo_H_dR_stack_3->SetBinError(12,26.47539);
   VbbHcc_algo_H_dR_stack_3->SetBinError(13,26.45425);
   VbbHcc_algo_H_dR_stack_3->SetBinError(14,25.7456);
   VbbHcc_algo_H_dR_stack_3->SetBinError(15,24.73007);
   VbbHcc_algo_H_dR_stack_3->SetBinError(16,23.76618);
   VbbHcc_algo_H_dR_stack_3->SetBinError(17,22.87197);
   VbbHcc_algo_H_dR_stack_3->SetBinError(18,22.2576);
   VbbHcc_algo_H_dR_stack_3->SetBinError(19,22.10142);
   VbbHcc_algo_H_dR_stack_3->SetBinError(20,21.80494);
   VbbHcc_algo_H_dR_stack_3->SetBinError(21,20.83663);
   VbbHcc_algo_H_dR_stack_3->SetBinError(22,19.59206);
   VbbHcc_algo_H_dR_stack_3->SetBinError(23,18.23649);
   VbbHcc_algo_H_dR_stack_3->SetBinError(24,17.17479);
   VbbHcc_algo_H_dR_stack_3->SetBinError(25,16.29676);
   VbbHcc_algo_H_dR_stack_3->SetBinError(26,15.37414);
   VbbHcc_algo_H_dR_stack_3->SetBinError(27,14.34293);
   VbbHcc_algo_H_dR_stack_3->SetBinError(28,12.83347);
   VbbHcc_algo_H_dR_stack_3->SetBinError(29,10.67917);
   VbbHcc_algo_H_dR_stack_3->SetBinError(30,7.878219);
   VbbHcc_algo_H_dR_stack_3->SetBinError(31,6.24999);
   VbbHcc_algo_H_dR_stack_3->SetEntries(3113082);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_4 = new TH1D("VbbHcc_algo_H_dR_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(3,259.8814);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(4,428.0603);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(5,422.3434);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(6,325.7238);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(7,301.713);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(8,326.4197);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(9,348.7785);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(10,401.2483);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(11,482.0247);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(12,515.4573);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(13,594.3732);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(14,582.1173);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(15,576.8151);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(16,543.8981);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(17,524.3145);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(18,485.0409);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(19,461.0869);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(20,435.8283);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(21,369.2901);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(22,291.4926);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(23,236.8041);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(24,181.2285);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(25,137.7181);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(26,96.61126);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(27,83.0084);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(28,69.77968);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(29,53.06502);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(30,32.51055);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(31,19.6334);
   VbbHcc_algo_H_dR_stack_4->SetBinError(3,8.307693);
   VbbHcc_algo_H_dR_stack_4->SetBinError(4,15.03458);
   VbbHcc_algo_H_dR_stack_4->SetBinError(5,18.00319);
   VbbHcc_algo_H_dR_stack_4->SetBinError(6,16.83447);
   VbbHcc_algo_H_dR_stack_4->SetBinError(7,13.29872);
   VbbHcc_algo_H_dR_stack_4->SetBinError(8,15.79072);
   VbbHcc_algo_H_dR_stack_4->SetBinError(9,15.741);
   VbbHcc_algo_H_dR_stack_4->SetBinError(10,16.74798);
   VbbHcc_algo_H_dR_stack_4->SetBinError(11,21.05805);
   VbbHcc_algo_H_dR_stack_4->SetBinError(12,19.25416);
   VbbHcc_algo_H_dR_stack_4->SetBinError(13,21.42224);
   VbbHcc_algo_H_dR_stack_4->SetBinError(14,19.34753);
   VbbHcc_algo_H_dR_stack_4->SetBinError(15,17.96713);
   VbbHcc_algo_H_dR_stack_4->SetBinError(16,17.95522);
   VbbHcc_algo_H_dR_stack_4->SetBinError(17,14.39135);
   VbbHcc_algo_H_dR_stack_4->SetBinError(18,15.61686);
   VbbHcc_algo_H_dR_stack_4->SetBinError(19,15.4586);
   VbbHcc_algo_H_dR_stack_4->SetBinError(20,16.66409);
   VbbHcc_algo_H_dR_stack_4->SetBinError(21,14.72368);
   VbbHcc_algo_H_dR_stack_4->SetBinError(22,13.55699);
   VbbHcc_algo_H_dR_stack_4->SetBinError(23,13.66356);
   VbbHcc_algo_H_dR_stack_4->SetBinError(24,11.9407);
   VbbHcc_algo_H_dR_stack_4->SetBinError(25,11.33935);
   VbbHcc_algo_H_dR_stack_4->SetBinError(26,7.8891);
   VbbHcc_algo_H_dR_stack_4->SetBinError(27,7.421067);
   VbbHcc_algo_H_dR_stack_4->SetBinError(28,8.393786);
   VbbHcc_algo_H_dR_stack_4->SetBinError(29,5.696454);
   VbbHcc_algo_H_dR_stack_4->SetBinError(30,5.360847);
   VbbHcc_algo_H_dR_stack_4->SetBinError(31,3.222509);
   VbbHcc_algo_H_dR_stack_4->SetEntries(54522);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_5 = new TH1D("VbbHcc_algo_H_dR_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(3,95.95136);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(4,142.609);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(5,139.7007);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(6,122.3867);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(7,94.37969);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(8,95.46352);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(9,106.1093);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(10,149.3327);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(11,162.5062);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(12,167.7988);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(13,181.8755);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(14,174.9512);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(15,183.8034);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(16,190.0184);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(17,164.3373);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(18,142.8134);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(19,164.3415);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(20,158.8241);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(21,110.8386);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(22,121.641);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(23,72.2398);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(24,47.03799);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(25,66.98355);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(26,33.94843);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(27,31.12147);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(28,17.65718);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(29,21.12025);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(30,12.35213);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(31,8.067237);
   VbbHcc_algo_H_dR_stack_5->SetBinError(3,6.811369);
   VbbHcc_algo_H_dR_stack_5->SetBinError(4,14.68263);
   VbbHcc_algo_H_dR_stack_5->SetBinError(5,18.52687);
   VbbHcc_algo_H_dR_stack_5->SetBinError(6,15.83211);
   VbbHcc_algo_H_dR_stack_5->SetBinError(7,12.64697);
   VbbHcc_algo_H_dR_stack_5->SetBinError(8,8.44477);
   VbbHcc_algo_H_dR_stack_5->SetBinError(9,11.59319);
   VbbHcc_algo_H_dR_stack_5->SetBinError(10,19.45753);
   VbbHcc_algo_H_dR_stack_5->SetBinError(11,19.60199);
   VbbHcc_algo_H_dR_stack_5->SetBinError(12,13.93943);
   VbbHcc_algo_H_dR_stack_5->SetBinError(13,15.07425);
   VbbHcc_algo_H_dR_stack_5->SetBinError(14,12.19143);
   VbbHcc_algo_H_dR_stack_5->SetBinError(15,13.60561);
   VbbHcc_algo_H_dR_stack_5->SetBinError(16,13.58905);
   VbbHcc_algo_H_dR_stack_5->SetBinError(17,14.55357);
   VbbHcc_algo_H_dR_stack_5->SetBinError(18,8.693521);
   VbbHcc_algo_H_dR_stack_5->SetBinError(19,17.23808);
   VbbHcc_algo_H_dR_stack_5->SetBinError(20,14.23959);
   VbbHcc_algo_H_dR_stack_5->SetBinError(21,10.49371);
   VbbHcc_algo_H_dR_stack_5->SetBinError(22,18.36111);
   VbbHcc_algo_H_dR_stack_5->SetBinError(23,11.42586);
   VbbHcc_algo_H_dR_stack_5->SetBinError(24,5.078848);
   VbbHcc_algo_H_dR_stack_5->SetBinError(25,13.55969);
   VbbHcc_algo_H_dR_stack_5->SetBinError(26,4.867581);
   VbbHcc_algo_H_dR_stack_5->SetBinError(27,8.447928);
   VbbHcc_algo_H_dR_stack_5->SetBinError(28,3.277417);
   VbbHcc_algo_H_dR_stack_5->SetBinError(29,8.324214);
   VbbHcc_algo_H_dR_stack_5->SetBinError(30,5.841992);
   VbbHcc_algo_H_dR_stack_5->SetBinError(31,2.02281);
   VbbHcc_algo_H_dR_stack_5->SetEntries(16864);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_6 = new TH1D("VbbHcc_algo_H_dR_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(3,1.059688);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(4,1.492411);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(5,1.75144);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(6,1.669693);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(7,0.6543917);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(8,1.290612);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(9,2.059891);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(10,1.554771);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(12,1.891481);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(13,1.765252);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(14,2.191919);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(15,1.36866);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(16,1.80516);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(17,1.156581);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(18,1.836352);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(19,1.943501);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(20,0.6375663);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(22,0.8288254);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(24,0.3725499);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(26,0.7768723);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(27,0.299726);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(30,0.3763791);
   VbbHcc_algo_H_dR_stack_6->SetBinError(3,0.6138983);
   VbbHcc_algo_H_dR_stack_6->SetBinError(4,0.7489408);
   VbbHcc_algo_H_dR_stack_6->SetBinError(5,0.8027936);
   VbbHcc_algo_H_dR_stack_6->SetBinError(6,0.7533971);
   VbbHcc_algo_H_dR_stack_6->SetBinError(7,0.4627248);
   VbbHcc_algo_H_dR_stack_6->SetBinError(8,0.6526555);
   VbbHcc_algo_H_dR_stack_6->SetBinError(9,0.8525352);
   VbbHcc_algo_H_dR_stack_6->SetBinError(10,0.708912);
   VbbHcc_algo_H_dR_stack_6->SetBinError(12,0.8583354);
   VbbHcc_algo_H_dR_stack_6->SetBinError(13,0.7991826);
   VbbHcc_algo_H_dR_stack_6->SetBinError(14,0.9034765);
   VbbHcc_algo_H_dR_stack_6->SetBinError(15,0.7001259);
   VbbHcc_algo_H_dR_stack_6->SetBinError(16,0.8106677);
   VbbHcc_algo_H_dR_stack_6->SetBinError(17,0.668186);
   VbbHcc_algo_H_dR_stack_6->SetBinError(18,0.8324041);
   VbbHcc_algo_H_dR_stack_6->SetBinError(19,0.8024318);
   VbbHcc_algo_H_dR_stack_6->SetBinError(20,0.4656154);
   VbbHcc_algo_H_dR_stack_6->SetBinError(22,0.5320984);
   VbbHcc_algo_H_dR_stack_6->SetBinError(24,0.3725499);
   VbbHcc_algo_H_dR_stack_6->SetBinError(26,0.5494081);
   VbbHcc_algo_H_dR_stack_6->SetBinError(27,0.299726);
   VbbHcc_algo_H_dR_stack_6->SetBinError(30,0.3763791);
   VbbHcc_algo_H_dR_stack_6->SetEntries(83);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_7 = new TH1D("VbbHcc_algo_H_dR_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(3,5.956359);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(4,5.939237);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(5,7.554086);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(6,4.683287);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(7,2.156639);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(8,2.125184);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(9,1.359462);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(10,1.878483);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(11,3.248002);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(12,5.100586);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(13,3.379776);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(14,3.012499);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(15,4.408359);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(16,3.671104);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(17,4.462082);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(18,4.143247);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(19,3.29588);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(20,2.627782);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(21,1.725806);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(22,2.520992);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(23,0.9142478);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(24,1.091074);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(26,0.772162);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(27,0.9141028);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(28,0.7899462);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(29,0.4257055);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(30,0.2555903);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(31,0.1853798);
   VbbHcc_algo_H_dR_stack_7->SetBinError(3,1.283936);
   VbbHcc_algo_H_dR_stack_7->SetBinError(4,1.289004);
   VbbHcc_algo_H_dR_stack_7->SetBinError(5,1.456917);
   VbbHcc_algo_H_dR_stack_7->SetBinError(6,1.151153);
   VbbHcc_algo_H_dR_stack_7->SetBinError(7,0.7886679);
   VbbHcc_algo_H_dR_stack_7->SetBinError(8,0.8035813);
   VbbHcc_algo_H_dR_stack_7->SetBinError(9,0.6146281);
   VbbHcc_algo_H_dR_stack_7->SetBinError(10,0.7214213);
   VbbHcc_algo_H_dR_stack_7->SetBinError(11,0.9205548);
   VbbHcc_algo_H_dR_stack_7->SetBinError(12,1.248083);
   VbbHcc_algo_H_dR_stack_7->SetBinError(13,0.9865712);
   VbbHcc_algo_H_dR_stack_7->SetBinError(14,0.92285);
   VbbHcc_algo_H_dR_stack_7->SetBinError(15,1.121756);
   VbbHcc_algo_H_dR_stack_7->SetBinError(16,1.011739);
   VbbHcc_algo_H_dR_stack_7->SetBinError(17,1.117221);
   VbbHcc_algo_H_dR_stack_7->SetBinError(18,1.095505);
   VbbHcc_algo_H_dR_stack_7->SetBinError(19,1.000786);
   VbbHcc_algo_H_dR_stack_7->SetBinError(20,0.8494597);
   VbbHcc_algo_H_dR_stack_7->SetBinError(21,0.7128015);
   VbbHcc_algo_H_dR_stack_7->SetBinError(22,0.8519466);
   VbbHcc_algo_H_dR_stack_7->SetBinError(23,0.4626925);
   VbbHcc_algo_H_dR_stack_7->SetBinError(24,0.5517979);
   VbbHcc_algo_H_dR_stack_7->SetBinError(26,0.4523291);
   VbbHcc_algo_H_dR_stack_7->SetBinError(27,0.5278088);
   VbbHcc_algo_H_dR_stack_7->SetBinError(28,0.4596568);
   VbbHcc_algo_H_dR_stack_7->SetBinError(29,0.2988418);
   VbbHcc_algo_H_dR_stack_7->SetBinError(30,0.2555903);
   VbbHcc_algo_H_dR_stack_7->SetBinError(31,0.1853798);
   VbbHcc_algo_H_dR_stack_7->SetEntries(290);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_8 = new TH1D("VbbHcc_algo_H_dR_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(3,11.44793);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(4,14.15944);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(5,13.25702);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(6,8.055187);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(7,3.821924);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(8,1.879642);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(9,3.156153);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(10,4.319329);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(11,3.74633);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(12,3.23397);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(13,5.269692);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(14,5.635339);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(15,5.841625);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(16,4.934469);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(17,6.093046);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(18,5.409173);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(19,6.252589);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(20,3.617737);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(21,4.822481);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(22,2.864062);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(23,0.3868374);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(24,1.148475);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(25,0.830966);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(26,0.9254039);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(27,1.437789);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(28,2.108556);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(30,0.611552);
   VbbHcc_algo_H_dR_stack_8->SetBinError(3,1.838559);
   VbbHcc_algo_H_dR_stack_8->SetBinError(4,2.022911);
   VbbHcc_algo_H_dR_stack_8->SetBinError(5,1.988162);
   VbbHcc_algo_H_dR_stack_8->SetBinError(6,1.541612);
   VbbHcc_algo_H_dR_stack_8->SetBinError(7,1.072336);
   VbbHcc_algo_H_dR_stack_8->SetBinError(8,0.7582528);
   VbbHcc_algo_H_dR_stack_8->SetBinError(9,0.9616377);
   VbbHcc_algo_H_dR_stack_8->SetBinError(10,1.137258);
   VbbHcc_algo_H_dR_stack_8->SetBinError(11,1.049781);
   VbbHcc_algo_H_dR_stack_8->SetBinError(12,0.9924307);
   VbbHcc_algo_H_dR_stack_8->SetBinError(13,1.232697);
   VbbHcc_algo_H_dR_stack_8->SetBinError(14,1.270311);
   VbbHcc_algo_H_dR_stack_8->SetBinError(15,1.294211);
   VbbHcc_algo_H_dR_stack_8->SetBinError(16,1.201841);
   VbbHcc_algo_H_dR_stack_8->SetBinError(17,1.357391);
   VbbHcc_algo_H_dR_stack_8->SetBinError(18,1.258009);
   VbbHcc_algo_H_dR_stack_8->SetBinError(19,1.325683);
   VbbHcc_algo_H_dR_stack_8->SetBinError(20,0.9798009);
   VbbHcc_algo_H_dR_stack_8->SetBinError(21,1.216634);
   VbbHcc_algo_H_dR_stack_8->SetBinError(22,0.920299);
   VbbHcc_algo_H_dR_stack_8->SetBinError(23,0.3868374);
   VbbHcc_algo_H_dR_stack_8->SetBinError(24,0.5802494);
   VbbHcc_algo_H_dR_stack_8->SetBinError(25,0.4917388);
   VbbHcc_algo_H_dR_stack_8->SetBinError(26,0.5472321);
   VbbHcc_algo_H_dR_stack_8->SetBinError(27,0.6486965);
   VbbHcc_algo_H_dR_stack_8->SetBinError(28,0.8052995);
   VbbHcc_algo_H_dR_stack_8->SetBinError(30,0.4330191);
   VbbHcc_algo_H_dR_stack_8->SetEntries(443);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_9 = new TH1D("VbbHcc_algo_H_dR_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(3,4.871987);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(4,9.579152);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(5,10.03581);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(6,8.37815);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(7,6.332504);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(8,3.443787);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(9,2.240735);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(10,2.036461);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(11,2.473137);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(12,2.931785);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(13,3.487046);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(14,3.424392);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(15,3.174794);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(16,2.782495);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(17,2.543796);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(18,2.615341);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(19,2.642096);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(20,2.384285);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(21,1.842615);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(22,1.352099);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(23,1.048816);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(24,0.9033366);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(25,1.026299);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(26,1.173091);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(27,1.166762);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(28,1.178799);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(29,0.8884491);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(30,0.4768634);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(31,0.2485529);
   VbbHcc_algo_H_dR_stack_9->SetBinError(3,0.09936673);
   VbbHcc_algo_H_dR_stack_9->SetBinError(4,0.1392548);
   VbbHcc_algo_H_dR_stack_9->SetBinError(5,0.1425084);
   VbbHcc_algo_H_dR_stack_9->SetBinError(6,0.1298849);
   VbbHcc_algo_H_dR_stack_9->SetBinError(7,0.112823);
   VbbHcc_algo_H_dR_stack_9->SetBinError(8,0.08314746);
   VbbHcc_algo_H_dR_stack_9->SetBinError(9,0.06607025);
   VbbHcc_algo_H_dR_stack_9->SetBinError(10,0.06332338);
   VbbHcc_algo_H_dR_stack_9->SetBinError(11,0.06936503);
   VbbHcc_algo_H_dR_stack_9->SetBinError(12,0.07584336);
   VbbHcc_algo_H_dR_stack_9->SetBinError(13,0.08253379);
   VbbHcc_algo_H_dR_stack_9->SetBinError(14,0.0824554);
   VbbHcc_algo_H_dR_stack_9->SetBinError(15,0.07920308);
   VbbHcc_algo_H_dR_stack_9->SetBinError(16,0.07356436);
   VbbHcc_algo_H_dR_stack_9->SetBinError(17,0.07079536);
   VbbHcc_algo_H_dR_stack_9->SetBinError(18,0.07212231);
   VbbHcc_algo_H_dR_stack_9->SetBinError(19,0.07212516);
   VbbHcc_algo_H_dR_stack_9->SetBinError(20,0.06831746);
   VbbHcc_algo_H_dR_stack_9->SetBinError(21,0.06026768);
   VbbHcc_algo_H_dR_stack_9->SetBinError(22,0.05120152);
   VbbHcc_algo_H_dR_stack_9->SetBinError(23,0.04556774);
   VbbHcc_algo_H_dR_stack_9->SetBinError(24,0.04194177);
   VbbHcc_algo_H_dR_stack_9->SetBinError(25,0.04499257);
   VbbHcc_algo_H_dR_stack_9->SetBinError(26,0.0484087);
   VbbHcc_algo_H_dR_stack_9->SetBinError(27,0.04864739);
   VbbHcc_algo_H_dR_stack_9->SetBinError(28,0.04878535);
   VbbHcc_algo_H_dR_stack_9->SetBinError(29,0.04249541);
   VbbHcc_algo_H_dR_stack_9->SetBinError(30,0.03184284);
   VbbHcc_algo_H_dR_stack_9->SetBinError(31,0.0222126);
   VbbHcc_algo_H_dR_stack_9->SetEntries(47732);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_10 = new TH1D("VbbHcc_algo_H_dR_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(2,0.0004056474);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(3,1.218775);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(4,3.170243);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(5,4.106181);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(6,4.223078);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(7,3.401342);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(8,2.454344);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(9,1.836782);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(10,1.682508);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(11,1.870614);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(12,2.163723);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(13,2.353184);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(14,2.311723);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(15,2.048454);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(16,1.957245);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(17,1.724674);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(18,1.750511);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(19,1.748902);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(20,1.688576);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(21,1.444605);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(22,1.205147);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(23,0.8648969);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(24,0.8013065);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(25,0.7766081);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(26,0.7273266);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(27,0.6364133);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(28,0.5239446);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(29,0.3782693);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(30,0.1916717);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(31,0.1244006);
   VbbHcc_algo_H_dR_stack_10->SetBinError(2,0.0004056474);
   VbbHcc_algo_H_dR_stack_10->SetBinError(3,0.02322575);
   VbbHcc_algo_H_dR_stack_10->SetBinError(4,0.03762679);
   VbbHcc_algo_H_dR_stack_10->SetBinError(5,0.04291322);
   VbbHcc_algo_H_dR_stack_10->SetBinError(6,0.04355242);
   VbbHcc_algo_H_dR_stack_10->SetBinError(7,0.03912363);
   VbbHcc_algo_H_dR_stack_10->SetBinError(8,0.03320142);
   VbbHcc_algo_H_dR_stack_10->SetBinError(9,0.02870223);
   VbbHcc_algo_H_dR_stack_10->SetBinError(10,0.02741513);
   VbbHcc_algo_H_dR_stack_10->SetBinError(11,0.0289232);
   VbbHcc_algo_H_dR_stack_10->SetBinError(12,0.03111291);
   VbbHcc_algo_H_dR_stack_10->SetBinError(13,0.03247707);
   VbbHcc_algo_H_dR_stack_10->SetBinError(14,0.03215242);
   VbbHcc_algo_H_dR_stack_10->SetBinError(15,0.03023681);
   VbbHcc_algo_H_dR_stack_10->SetBinError(16,0.02956845);
   VbbHcc_algo_H_dR_stack_10->SetBinError(17,0.02775134);
   VbbHcc_algo_H_dR_stack_10->SetBinError(18,0.02795146);
   VbbHcc_algo_H_dR_stack_10->SetBinError(19,0.02797351);
   VbbHcc_algo_H_dR_stack_10->SetBinError(20,0.02745569);
   VbbHcc_algo_H_dR_stack_10->SetBinError(21,0.02538731);
   VbbHcc_algo_H_dR_stack_10->SetBinError(22,0.02321858);
   VbbHcc_algo_H_dR_stack_10->SetBinError(23,0.01965381);
   VbbHcc_algo_H_dR_stack_10->SetBinError(24,0.01893722);
   VbbHcc_algo_H_dR_stack_10->SetBinError(25,0.01867798);
   VbbHcc_algo_H_dR_stack_10->SetBinError(26,0.01805893);
   VbbHcc_algo_H_dR_stack_10->SetBinError(27,0.01687157);
   VbbHcc_algo_H_dR_stack_10->SetBinError(28,0.01531932);
   VbbHcc_algo_H_dR_stack_10->SetBinError(29,0.01297806);
   VbbHcc_algo_H_dR_stack_10->SetBinError(30,0.009226051);
   VbbHcc_algo_H_dR_stack_10->SetBinError(31,0.007400823);
   VbbHcc_algo_H_dR_stack_10->SetEntries(112076);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_11 = new TH1D("VbbHcc_algo_H_dR_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(3,0.03590475);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(4,0.04945252);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(5,0.05167043);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(6,0.06438839);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(7,0.03506935);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(8,0.05545361);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(9,0.01932297);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(10,0.02373042);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(11,0.02872736);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(12,0.02856148);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(13,0.02760269);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(14,0.03199241);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(15,0.03342163);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(16,0.0266392);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(17,0.020714);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(18,0.02294708);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(19,0.02912212);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(20,0.01895261);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(21,0.01148659);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(22,0.01172904);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(23,0.01309913);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(24,0.01533935);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(25,0.00582782);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(26,0.006670127);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(27,0.01324728);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(28,0.01984316);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(29,0.007800769);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(30,0.004000174);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(31,0.001979228);
   VbbHcc_algo_H_dR_stack_11->SetBinError(3,0.008098872);
   VbbHcc_algo_H_dR_stack_11->SetBinError(4,0.009287501);
   VbbHcc_algo_H_dR_stack_11->SetBinError(5,0.009929066);
   VbbHcc_algo_H_dR_stack_11->SetBinError(6,0.01087191);
   VbbHcc_algo_H_dR_stack_11->SetBinError(7,0.008164936);
   VbbHcc_algo_H_dR_stack_11->SetBinError(8,0.01013394);
   VbbHcc_algo_H_dR_stack_11->SetBinError(9,0.005896386);
   VbbHcc_algo_H_dR_stack_11->SetBinError(10,0.006439129);
   VbbHcc_algo_H_dR_stack_11->SetBinError(11,0.007334413);
   VbbHcc_algo_H_dR_stack_11->SetBinError(12,0.007258511);
   VbbHcc_algo_H_dR_stack_11->SetBinError(13,0.006968091);
   VbbHcc_algo_H_dR_stack_11->SetBinError(14,0.007780601);
   VbbHcc_algo_H_dR_stack_11->SetBinError(15,0.007921569);
   VbbHcc_algo_H_dR_stack_11->SetBinError(16,0.007318271);
   VbbHcc_algo_H_dR_stack_11->SetBinError(17,0.006078756);
   VbbHcc_algo_H_dR_stack_11->SetBinError(18,0.006495247);
   VbbHcc_algo_H_dR_stack_11->SetBinError(19,0.007433511);
   VbbHcc_algo_H_dR_stack_11->SetBinError(20,0.006018404);
   VbbHcc_algo_H_dR_stack_11->SetBinError(21,0.004470357);
   VbbHcc_algo_H_dR_stack_11->SetBinError(22,0.00454679);
   VbbHcc_algo_H_dR_stack_11->SetBinError(23,0.004943363);
   VbbHcc_algo_H_dR_stack_11->SetBinError(24,0.005508158);
   VbbHcc_algo_H_dR_stack_11->SetBinError(25,0.003492838);
   VbbHcc_algo_H_dR_stack_11->SetBinError(26,0.003861834);
   VbbHcc_algo_H_dR_stack_11->SetBinError(27,0.004774419);
   VbbHcc_algo_H_dR_stack_11->SetBinError(28,0.006129881);
   VbbHcc_algo_H_dR_stack_11->SetBinError(29,0.003919186);
   VbbHcc_algo_H_dR_stack_11->SetBinError(30,0.002828573);
   VbbHcc_algo_H_dR_stack_11->SetBinError(31,0.001979228);
   VbbHcc_algo_H_dR_stack_11->SetEntries(413);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_12 = new TH1D("VbbHcc_algo_H_dR_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(3,0.00951487);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(4,0.02830103);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(5,0.0249203);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(6,0.02581325);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(7,0.01941899);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(8,0.01301515);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(9,0.01262402);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(10,0.01067519);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(11,0.01244136);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(12,0.01955312);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(13,0.02181835);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(14,0.01411678);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(15,0.01808386);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(16,0.01072976);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(17,0.01181509);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(18,0.01199276);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(19,0.01083925);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(20,0.01081746);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(21,0.007734547);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(22,0.009309287);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(23,0.00596258);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(24,0.005825607);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(25,0.00334732);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(26,0.004580207);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(27,0.00538279);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(28,0.002832984);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(29,0.003181367);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(30,0.001408996);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(31,0.0001619735);
   VbbHcc_algo_H_dR_stack_12->SetBinError(3,0.001486021);
   VbbHcc_algo_H_dR_stack_12->SetBinError(4,0.002632623);
   VbbHcc_algo_H_dR_stack_12->SetBinError(5,0.002404842);
   VbbHcc_algo_H_dR_stack_12->SetBinError(6,0.002501505);
   VbbHcc_algo_H_dR_stack_12->SetBinError(7,0.002189723);
   VbbHcc_algo_H_dR_stack_12->SetBinError(8,0.001763148);
   VbbHcc_algo_H_dR_stack_12->SetBinError(9,0.001730307);
   VbbHcc_algo_H_dR_stack_12->SetBinError(10,0.001587012);
   VbbHcc_algo_H_dR_stack_12->SetBinError(11,0.001711573);
   VbbHcc_algo_H_dR_stack_12->SetBinError(12,0.002149476);
   VbbHcc_algo_H_dR_stack_12->SetBinError(13,0.002355082);
   VbbHcc_algo_H_dR_stack_12->SetBinError(14,0.001860613);
   VbbHcc_algo_H_dR_stack_12->SetBinError(15,0.002088711);
   VbbHcc_algo_H_dR_stack_12->SetBinError(16,0.00161244);
   VbbHcc_algo_H_dR_stack_12->SetBinError(17,0.001668152);
   VbbHcc_algo_H_dR_stack_12->SetBinError(18,0.001691511);
   VbbHcc_algo_H_dR_stack_12->SetBinError(19,0.001624419);
   VbbHcc_algo_H_dR_stack_12->SetBinError(20,0.001585043);
   VbbHcc_algo_H_dR_stack_12->SetBinError(21,0.00136744);
   VbbHcc_algo_H_dR_stack_12->SetBinError(22,0.001540797);
   VbbHcc_algo_H_dR_stack_12->SetBinError(23,0.001188478);
   VbbHcc_algo_H_dR_stack_12->SetBinError(24,0.001201661);
   VbbHcc_algo_H_dR_stack_12->SetBinError(25,0.0008756635);
   VbbHcc_algo_H_dR_stack_12->SetBinError(26,0.001048471);
   VbbHcc_algo_H_dR_stack_12->SetBinError(27,0.00116029);
   VbbHcc_algo_H_dR_stack_12->SetBinError(28,0.0008307471);
   VbbHcc_algo_H_dR_stack_12->SetBinError(29,0.0008679327);
   VbbHcc_algo_H_dR_stack_12->SetBinError(30,0.000578608);
   VbbHcc_algo_H_dR_stack_12->SetBinError(31,0.0001619735);
   VbbHcc_algo_H_dR_stack_12->SetEntries(1460);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR__323 = new TH1D("VbbHcc_algo_H_dR__323","",30,0,6);
   VbbHcc_algo_H_dR__323->SetBinContent(2,3);
   VbbHcc_algo_H_dR__323->SetBinContent(3,7476);
   VbbHcc_algo_H_dR__323->SetBinContent(4,9500);
   VbbHcc_algo_H_dR__323->SetBinContent(5,8123);
   VbbHcc_algo_H_dR__323->SetBinContent(6,7805);
   VbbHcc_algo_H_dR__323->SetBinContent(7,7980);
   VbbHcc_algo_H_dR__323->SetBinContent(8,8427);
   VbbHcc_algo_H_dR__323->SetBinContent(9,8770);
   VbbHcc_algo_H_dR__323->SetBinContent(10,9529);
   VbbHcc_algo_H_dR__323->SetBinContent(11,10791);
   VbbHcc_algo_H_dR__323->SetBinContent(12,12101);
   VbbHcc_algo_H_dR__323->SetBinContent(13,13364);
   VbbHcc_algo_H_dR__323->SetBinContent(14,14221);
   VbbHcc_algo_H_dR__323->SetBinContent(15,14427);
   VbbHcc_algo_H_dR__323->SetBinContent(16,14369);
   VbbHcc_algo_H_dR__323->SetBinContent(17,13684);
   VbbHcc_algo_H_dR__323->SetBinContent(18,12607);
   VbbHcc_algo_H_dR__323->SetBinContent(19,11960);
   VbbHcc_algo_H_dR__323->SetBinContent(20,10399);
   VbbHcc_algo_H_dR__323->SetBinContent(21,8929);
   VbbHcc_algo_H_dR__323->SetBinContent(22,7229);
   VbbHcc_algo_H_dR__323->SetBinContent(23,5801);
   VbbHcc_algo_H_dR__323->SetBinContent(24,4437);
   VbbHcc_algo_H_dR__323->SetBinContent(25,3482);
   VbbHcc_algo_H_dR__323->SetBinContent(26,2756);
   VbbHcc_algo_H_dR__323->SetBinContent(27,2134);
   VbbHcc_algo_H_dR__323->SetBinContent(28,1707);
   VbbHcc_algo_H_dR__323->SetBinContent(29,1328);
   VbbHcc_algo_H_dR__323->SetBinContent(30,916);
   VbbHcc_algo_H_dR__323->SetBinContent(31,653);
   VbbHcc_algo_H_dR__323->SetEntries(234937);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR__323->SetLineColor(ci);
   VbbHcc_algo_H_dR__323->SetLineWidth(2);
   VbbHcc_algo_H_dR__323->SetMarkerStyle(20);
   VbbHcc_algo_H_dR__323->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR__323->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR__323->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__323->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__323->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__323->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__323->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__323->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__323->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__323->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR__323->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__323->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__323->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__323->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__323->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__323->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_fx1235[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_VbbHcc_algo_H_dR_fy1235[30] = {
   0,
   1.943764,
   57406.16,
   76031.82,
   78797.04,
   68690.08,
   63022.78,
   67990.22,
   68059.49,
   77623.27,
   86819.57,
   95738.89,
   99916.31,
   126044.8,
   105458,
   122176.2,
   109105.1,
   104968.5,
   97870.4,
   86151.09,
   83971.87,
   68191.63,
   40744.65,
   34473.21,
   27090.84,
   22772.52,
   14298.78,
   14421.09,
   10370.13,
   5963.045};
   Double_t Graph_from_VbbHcc_algo_H_dR_fex1235[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_VbbHcc_algo_H_dR_fey1235[30] = {
   0,
   0.3943883,
   2923.209,
   3734.523,
   18824.08,
   3829.053,
   2991.683,
   3971.839,
   3490.013,
   3849.404,
   3907.832,
   3980.415,
   3842.146,
   17223.45,
   4009.812,
   11586.36,
   4553.648,
   4460.287,
   4550.857,
   3914.849,
   14352.83,
   15522.3,
   2363.721,
   2661.791,
   2019.396,
   1993.472,
   1394.552,
   1608.208,
   1256.919,
   866.7567};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_fx1235,Graph_from_VbbHcc_algo_H_dR_fy1235,Graph_from_VbbHcc_algo_H_dR_fex1235,Graph_from_VbbHcc_algo_H_dR_fey1235);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR1235 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR1235","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->SetMaximum(157595);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR1235->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1235->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR1235);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_12","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_11","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_10","ggZHbb","F");

   ci = TColor::GetColor("#0000cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_9","ZHbb","F");

   ci = TColor::GetColor("#cccc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_8","ZZ","F");

   ci = TColor::GetColor("#33ff99");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_7","WZ","F");

   ci = TColor::GetColor("#3399ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_6","WW","F");

   ci = TColor::GetColor("#9933ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_5","W + jets","F");

   ci = TColor::GetColor("#ff99cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_4","Z + jets","F");

   ci = TColor::GetColor("#00cccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_3","t#bar{t}","F");

   ci = TColor::GetColor("#cc00cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","Single top","F");

   ci = TColor::GetColor("#660066");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR","MC unc. (stat.)","fl");

   ci = TColor::GetColor("#333333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_algo_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9499975,-0.2774193,6.525,1.658065);
   bottomPad->SetFillColor(0);
   bottomPad->SetBorderMode(0);
   bottomPad->SetBorderSize(2);
   bottomPad->SetTickx(1);
   bottomPad->SetTicky(1);
   bottomPad->SetLeftMargin(0.12709);
   bottomPad->SetRightMargin(0.0434783);
   bottomPad->SetTopMargin(0.03);
   bottomPad->SetBottomMargin(0.35);
   bottomPad->SetFrameBorderMode(0);
   bottomPad->SetFrameBorderMode(0);
   
   TH1D *data_mc_ratio__324 = new TH1D("data_mc_ratio__324","",30,0,6);
   data_mc_ratio__324->SetBinContent(2,1.543397);
   data_mc_ratio__324->SetBinContent(3,0.1302299);
   data_mc_ratio__324->SetBinContent(4,0.1249477);
   data_mc_ratio__324->SetBinContent(5,0.1030876);
   data_mc_ratio__324->SetBinContent(6,0.1136263);
   data_mc_ratio__324->SetBinContent(7,0.1266209);
   data_mc_ratio__324->SetBinContent(8,0.1239443);
   data_mc_ratio__324->SetBinContent(9,0.1288579);
   data_mc_ratio__324->SetBinContent(10,0.1227596);
   data_mc_ratio__324->SetBinContent(11,0.1242923);
   data_mc_ratio__324->SetBinContent(12,0.1263959);
   data_mc_ratio__324->SetBinContent(13,0.1337519);
   data_mc_ratio__324->SetBinContent(14,0.112825);
   data_mc_ratio__324->SetBinContent(15,0.1368032);
   data_mc_ratio__324->SetBinContent(16,0.1176088);
   data_mc_ratio__324->SetBinContent(17,0.1254203);
   data_mc_ratio__324->SetBinContent(18,0.1201027);
   data_mc_ratio__324->SetBinContent(19,0.1222024);
   data_mc_ratio__324->SetBinContent(20,0.1207065);
   data_mc_ratio__324->SetBinContent(21,0.1063332);
   data_mc_ratio__324->SetBinContent(22,0.1060101);
   data_mc_ratio__324->SetBinContent(23,0.1423745);
   data_mc_ratio__324->SetBinContent(24,0.1287086);
   data_mc_ratio__324->SetBinContent(25,0.1285305);
   data_mc_ratio__324->SetBinContent(26,0.1210231);
   data_mc_ratio__324->SetBinContent(27,0.1492435);
   data_mc_ratio__324->SetBinContent(28,0.1183683);
   data_mc_ratio__324->SetBinContent(29,0.1280601);
   data_mc_ratio__324->SetBinContent(30,0.1536128);
   data_mc_ratio__324->SetBinContent(31,0.1221623);
   data_mc_ratio__324->SetBinError(2,0.8910809);
   data_mc_ratio__324->SetBinError(3,0.001506177);
   data_mc_ratio__324->SetBinError(4,0.001281936);
   data_mc_ratio__324->SetBinError(5,0.001143795);
   data_mc_ratio__324->SetBinError(6,0.001286152);
   data_mc_ratio__324->SetBinError(7,0.001417437);
   data_mc_ratio__324->SetBinError(8,0.001350175);
   data_mc_ratio__324->SetBinError(9,0.001375977);
   data_mc_ratio__324->SetBinError(10,0.001257569);
   data_mc_ratio__324->SetBinError(11,0.001196501);
   data_mc_ratio__324->SetBinError(12,0.001149006);
   data_mc_ratio__324->SetBinError(13,0.001156996);
   data_mc_ratio__324->SetBinError(14,0.000946107);
   data_mc_ratio__324->SetBinError(15,0.00113896);
   data_mc_ratio__324->SetBinError(16,0.0009811304);
   data_mc_ratio__324->SetBinError(17,0.001072164);
   data_mc_ratio__324->SetBinError(18,0.001069663);
   data_mc_ratio__324->SetBinError(19,0.001117414);
   data_mc_ratio__324->SetBinError(20,0.001183682);
   data_mc_ratio__324->SetBinError(21,0.001125298);
   data_mc_ratio__324->SetBinError(22,0.001246832);
   data_mc_ratio__324->SetBinError(23,0.001869308);
   data_mc_ratio__324->SetBinError(24,0.001932249);
   data_mc_ratio__324->SetBinError(25,0.002178171);
   data_mc_ratio__324->SetBinError(26,0.002305306);
   data_mc_ratio__324->SetBinError(27,0.003230712);
   data_mc_ratio__324->SetBinError(28,0.002864961);
   data_mc_ratio__324->SetBinError(29,0.003514106);
   data_mc_ratio__324->SetBinError(30,0.005075509);
   data_mc_ratio__324->SetBinError(31,0.02311514);
   data_mc_ratio__324->SetMinimum(0.4);
   data_mc_ratio__324->SetMaximum(1.6);
   data_mc_ratio__324->SetEntries(28.34538);
   data_mc_ratio__324->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__324->SetLineColor(ci);
   data_mc_ratio__324->SetLineWidth(2);
   data_mc_ratio__324->SetMarkerStyle(20);
   data_mc_ratio__324->SetMarkerSize(1.2);
   data_mc_ratio__324->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__324->GetXaxis()->SetRange(1,31);
   data_mc_ratio__324->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__324->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__324->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__324->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__324->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__324->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__324->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__324->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__324->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__324->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__324->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__324->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__324->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__324->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__324->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__324->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__324->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1236[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_mc_statistical_error_fy1236[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1236[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_mc_statistical_error_fey1236[30] = {
   0,
   0.2028993,
   0.05092152,
   0.0491179,
   0.2388932,
   0.0557439,
   0.04746986,
   0.0584178,
   0.05127886,
   0.04959085,
   0.04501096,
   0.04157574,
   0.03845365,
   0.1366455,
   0.03802281,
   0.09483324,
   0.04173634,
   0.04249166,
   0.04649881,
   0.04544166,
   0.1709243,
   0.2276276,
   0.05801305,
   0.07721333,
   0.07454164,
   0.08753849,
   0.09752944,
   0.1115178,
   0.1212057,
   0.1453547};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1236,Graph_from_mc_statistical_error_fy1236,Graph_from_mc_statistical_error_fex1236,Graph_from_mc_statistical_error_fey1236);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1236 = new TH1F("Graph_Graph_from_mc_statistical_error1236","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1236->SetMinimum(0.7133281);
   Graph_Graph_from_mc_statistical_error1236->SetMaximum(1.286672);
   Graph_Graph_from_mc_statistical_error1236->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1236->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1236->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1236->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1236->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1236->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1236->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1236->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1236->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1236->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1236->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1236);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_algo_17->cd();
   H_dR_algo_17->Modified();
   H_dR_algo_17->cd();
   H_dR_algo_17->SetSelected(H_dR_algo_17);
}
