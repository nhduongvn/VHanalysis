void H_dR_Bj1_both_16()
{
//=========Macro generated from canvas: H_dR_Bj1_both_16/H_dR_Bj1_both_16
//=========  (Thu Aug 10 12:29:24 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_both_16 = new TCanvas("H_dR_Bj1_both_16", "H_dR_Bj1_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_both_16->SetHighLightColor(2);
   H_dR_Bj1_both_16->Range(0,0,1,1);
   H_dR_Bj1_both_16->SetFillColor(0);
   H_dR_Bj1_both_16->SetFillStyle(4000);
   H_dR_Bj1_both_16->SetBorderMode(0);
   H_dR_Bj1_both_16->SetBorderSize(2);
   H_dR_Bj1_both_16->SetFrameFillStyle(1000);
   H_dR_Bj1_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-84.54753,6.314516,84472.98);
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
   st->SetMaximum(72397.36);
   
   TH1F *st_stack_237 = new TH1F("st_stack_237","",30,0,6);
   st_stack_237->SetMinimum(0.01);
   st_stack_237->SetMaximum(76017.23);
   st_stack_237->SetDirectory(0);
   st_stack_237->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_237->SetLineColor(ci);
   st_stack_237->GetXaxis()->SetRange(1,30);
   st_stack_237->GetXaxis()->SetLabelFont(42);
   st_stack_237->GetXaxis()->SetLabelSize(0.035);
   st_stack_237->GetXaxis()->SetTitleSize(0.035);
   st_stack_237->GetXaxis()->SetTitleFont(42);
   st_stack_237->GetYaxis()->SetTitle("Events/0.2");
   st_stack_237->GetYaxis()->SetLabelFont(42);
   st_stack_237->GetYaxis()->SetLabelSize(0.05);
   st_stack_237->GetYaxis()->SetTitleSize(0.057);
   st_stack_237->GetYaxis()->SetTitleOffset(1.2);
   st_stack_237->GetYaxis()->SetTitleFont(42);
   st_stack_237->GetZaxis()->SetLabelFont(42);
   st_stack_237->GetZaxis()->SetLabelSize(0.035);
   st_stack_237->GetZaxis()->SetTitleSize(0.035);
   st_stack_237->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_237);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(1,7289.127);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(2,30279.87);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(3,23808.17);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(4,15221.7);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(5,13072.45);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(6,12898.62);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(7,13397.32);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(8,7391.169);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(9,7618.433);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(10,9999.927);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(11,7247.15);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(12,4215.386);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(13,4510.344);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(14,4111.696);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(15,4499.585);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(16,4640.007);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(17,1311.812);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(18,1305.965);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(19,854.0187);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(20,224.2743);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(21,1542.101);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(22,727.1862);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(23,30.16923);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(24,42.50232);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(25,15.29155);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(26,3.532283);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(27,48.39795);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(28,6.338188);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(29,6.065573);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(1,799.7539);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(2,3191.317);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(3,2999.971);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(4,1555.158);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(5,1521.363);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(6,2384.216);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(7,2455.424);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(8,1099.746);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(9,1188.599);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(10,2316.262);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(11,1748.807);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(12,782.5997);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(13,866.7287);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(14,1525.468);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(15,1570.658);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(16,906.8462);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(17,395.4253);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(18,473.1417);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(19,386.1721);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(20,58.17187);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(21,1419.049);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(22,383.8958);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(23,11.91117);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(24,24.2408);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(25,9.034223);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(26,3.532283);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(27,31.60195);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(28,5.897487);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(29,5.882572);
   VbbHcc_both_H_dR_Bj1_stack_1->SetEntries(10203);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(1,41.23448);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(2,101.3176);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(3,102.1255);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(4,96.92764);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(5,71.82728);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(6,60.72739);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(7,49.80597);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(8,37.18587);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(9,35.25574);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(10,30.9752);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(11,26.62266);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(12,25.20961);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(13,23.33967);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(14,24.05997);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(15,18.17187);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(16,16.87061);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(17,10.84618);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(18,6.16029);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(19,4.530485);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(20,3.413733);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(21,2.730765);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(22,0.6909694);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(23,0.5230249);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(24,0.6864517);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(25,0.225662);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(26,0.1451856);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(27,0.05072579);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(28,0.3628219);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(29,0.05072579);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(1,2.669203);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(2,3.966296);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(3,3.94717);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(4,3.897067);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(5,3.285713);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(6,3.018708);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(7,2.79847);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(8,2.339552);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(9,2.371701);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(10,2.244099);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(11,1.985028);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(12,2.109966);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(13,1.991135);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(14,2.031497);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(15,1.685547);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(16,1.633552);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(17,1.29476);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(18,0.9631908);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(19,0.7902099);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(20,0.7140305);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(21,0.6493696);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(22,0.1788636);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(23,0.1581201);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(24,0.3000271);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(25,0.1011127);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(26,0.08401713);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(27,0.05072579);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(28,0.2765935);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(29,0.05072579);
   VbbHcc_both_H_dR_Bj1_stack_2->SetEntries(10096);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_3 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(1,638.1951);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(2,1851.611);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(3,2134.294);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(4,1864.383);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(5,1527.914);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(6,1204.456);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(7,964.5181);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(8,772.9837);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(9,644.8556);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(10,546.7556);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(11,476.2147);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(12,421.1203);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(13,374.0485);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(14,346.8257);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(15,312.664);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(16,278.3915);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(17,162.0136);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(18,107.0903);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(19,70.63004);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(20,44.28901);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(21,34.54421);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(22,21.3481);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(23,15.16121);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(24,8.506409);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(25,5.166969);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(26,2.413878);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(27,2.390828);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(28,0.9625011);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(29,0.728127);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(30,0.3482246);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(31,0.5795283);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(1,6.359124);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(2,10.79988);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(3,11.61907);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(4,10.85763);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(5,9.825154);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(6,8.707307);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(7,7.794298);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(8,6.96549);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(9,6.357336);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(10,5.861715);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(11,5.467292);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(12,5.14113);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(13,4.84494);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(14,4.662398);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(15,4.426107);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(16,4.17656);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(17,3.191736);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(18,2.595611);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(19,2.098159);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(20,1.664875);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(21,1.477259);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(22,1.151255);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(23,0.972593);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(24,0.7283262);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(25,0.5614838);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(26,0.3751935);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(27,0.3884683);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(28,0.2444435);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(29,0.2073093);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(30,0.1557308);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(31,0.1871093);
   VbbHcc_both_H_dR_Bj1_stack_3->SetEntries(243289);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_4 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(1,114.2039);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(2,294.3279);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(3,296.3756);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(4,238.6938);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(5,191.0186);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(6,142.0348);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(7,142.8799);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(8,99.64961);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(9,83.74481);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(10,70.45113);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(11,58.32767);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(12,53.48225);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(13,63.36133);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(14,46.03412);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(15,53.62323);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(16,37.66498);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(17,20.12163);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(18,19.89452);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(19,9.140255);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(20,5.669268);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(21,7.724867);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(22,4.980569);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(23,1.381389);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(24,1.07197);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(25,0.4463606);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(26,0.647575);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(28,0.066575);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(29,0.07830265);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(31,0.066575);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(1,3.426278);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(2,10.63415);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(3,12.3338);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(4,13.06922);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(5,13.01121);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(6,10.64364);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(7,12.12225);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(8,8.849716);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(9,7.459476);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(10,6.803593);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(11,4.85191);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(12,4.761002);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(13,7.176103);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(14,4.604309);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(15,6.532044);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(16,3.551497);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(17,1.831473);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(18,4.850671);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(19,2.859761);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(20,0.9945704);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(21,3.836851);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(22,2.744493);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(23,0.4613507);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(24,0.4405468);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(25,0.1827284);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(26,0.3246354);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(28,0.066575);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(29,0.07830265);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(31,0.066575);
   VbbHcc_both_H_dR_Bj1_stack_4->SetEntries(15464);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_5 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(1,20.03954);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(2,31.6126);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(3,33.64032);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(4,19.10122);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(5,14.35757);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(6,7.643693);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(7,12.49707);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(8,4.344525);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(9,5.269631);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(10,13.12899);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(11,8.135561);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(12,5.103605);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(13,4.878647);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(14,7.233793);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(15,5.14624);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(16,2.990178);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(17,2.265502);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(18,0.9454886);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(19,0.9970992);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(20,0.6160404);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(21,0.452098);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(22,0.1315351);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(23,0.07896157);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(24,1.179293);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(25,0.07139802);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(26,0.007990861);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(28,0.07097071);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(1,1.662326);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(2,3.002007);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(3,6.815994);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(4,2.664597);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(5,1.976121);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(6,1.635285);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(7,2.349766);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(8,0.6930424);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(9,1.226512);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(10,6.361735);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(11,1.946547);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(12,1.555126);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(13,1.240734);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(14,1.924068);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(15,1.263071);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(16,0.5670785);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(17,1.070345);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(18,0.2758658);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(19,0.4205477);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(20,0.2256545);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(21,0.2308159);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(22,0.08464378);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(23,0.07139589);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(24,1.042271);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(25,0.07097136);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(26,0.007780141);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(28,0.07097071);
   VbbHcc_both_H_dR_Bj1_stack_5->SetEntries(3789);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(2,0.1343693);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(3,0.2687386);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(4,0.1343693);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(5,0.2687386);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(8,0.1343693);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(10,0.2687386);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(14,0.1343693);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(15,0.1343693);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(2,0.1343693);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(3,0.1900269);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(4,0.1343693);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(5,0.1900269);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(8,0.1343693);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(10,0.1900269);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(14,0.1343693);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(15,0.1343693);
   VbbHcc_both_H_dR_Bj1_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(1,0.5452932);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(2,1.308704);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(3,0.3271759);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(4,0.5452932);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(5,0.4362346);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(6,0.7634105);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(7,0.2181173);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(8,0.2181173);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(9,0.1090586);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(10,0.1090586);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(12,0.4362346);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(13,0.2181173);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(14,0.1090586);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(15,0.2181173);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(23,0.1090586);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(1,0.2438625);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(2,0.3777902);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(3,0.1888951);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(4,0.2438625);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(5,0.2181173);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(6,0.288542);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(7,0.1542322);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(8,0.1542322);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(9,0.1090586);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(10,0.1090586);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(12,0.2181173);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(13,0.1542322);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(14,0.1090586);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(15,0.1542322);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(23,0.1090586);
   VbbHcc_both_H_dR_Bj1_stack_7->SetEntries(52);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(1,2.432072);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(2,8.755457);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(3,5.350557);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(4,5.350557);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(5,2.675279);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(6,3.161693);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(7,2.188864);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(8,1.70245);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(9,1.459243);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(10,1.216036);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(11,1.459243);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(12,0.9728286);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(13,0.9728286);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(14,1.459243);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(15,1.70245);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(16,0.9728286);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(17,0.2432072);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(18,0.2432072);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(20,0.2432072);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(1,0.7690885);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(2,1.459243);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(3,1.140743);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(4,1.140743);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(5,0.8066269);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(6,0.8768959);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(7,0.7296215);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(8,0.6434656);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(9,0.5957334);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(10,0.5438277);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(11,0.5957334);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(12,0.4864143);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(13,0.4864143);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(14,0.5957334);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(15,0.6434656);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(16,0.4864143);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(17,0.2432072);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(18,0.2432072);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(20,0.2432072);
   VbbHcc_both_H_dR_Bj1_stack_8->SetEntries(175);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_9 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(1,1.948262);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(2,6.810674);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(3,7.128057);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(4,5.391383);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(5,3.562654);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(6,2.550053);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(7,1.861703);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(8,1.516842);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(9,1.368455);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(10,1.203581);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(11,1.085421);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(12,0.9933664);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(13,0.9329126);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(14,0.8669629);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(15,0.865589);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(16,0.7364376);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(17,0.3956978);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(18,0.2005968);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(19,0.1222816);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(20,0.0865589);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(21,0.05770593);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(22,0.02335716);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(23,0.01923531);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(24,0.004121852);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(25,0.004121852);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(26,0.005495803);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(27,0.002747902);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(29,0.001373951);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(30,0.001373951);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(1,0.05173796);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(2,0.09673433);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(3,0.09896261);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(4,0.0860668);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(5,0.06996365);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(6,0.05919161);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(7,0.05057557);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(8,0.04565157);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(9,0.04336116);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(10,0.04066523);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(11,0.03861755);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(12,0.03694369);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(13,0.0358019);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(14,0.03451325);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(15,0.03448589);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(16,0.03180926);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(17,0.02331672);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(18,0.01660151);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(19,0.01296183);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(20,0.0109054);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(21,0.008904219);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(22,0.005664944);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(23,0.005140853);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(24,0.002379753);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(25,0.002379753);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(26,0.002747902);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(27,0.00194306);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(29,0.001373951);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(30,0.001373951);
   VbbHcc_both_H_dR_Bj1_stack_9->SetEntries(28929);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_10 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(1,0.8979799);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(2,3.036948);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(3,3.382463);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(4,2.538906);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(5,1.714683);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(6,1.12892);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(7,0.8578787);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(8,0.728266);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(9,0.6340998);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(10,0.5041291);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(11,0.4722629);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(12,0.4228526);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(13,0.356256);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(14,0.34086);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(15,0.3054134);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(16,0.2878692);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(17,0.1496633);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(18,0.08593109);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(19,0.04797819);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(20,0.0279276);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(21,0.023273);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(22,0.01145748);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(23,0.006444832);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(24,0.005370693);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(25,0.001432185);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(26,0.001074139);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(27,0.002148277);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(28,0.0007160924);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(31,0.0007160924);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(1,0.01793093);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(2,0.03297526);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(3,0.03480054);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(4,0.03015038);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(5,0.02477773);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(6,0.02010486);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(7,0.01752599);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(8,0.01614784);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(9,0.01506775);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(10,0.01343508);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(11,0.01300354);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(12,0.0123045);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(13,0.01129407);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(14,0.01104734);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(15,0.01045716);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(16,0.01015236);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(17,0.007320272);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(18,0.005546828);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(19,0.004144685);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(20,0.003162178);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(21,0.002886661);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(22,0.002025415);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(23,0.001519061);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(24,0.001386707);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(25,0.0007160924);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(26,0.0006201542);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(27,0.0008770305);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(28,0.0005063538);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(31,0.0005063538);
   VbbHcc_both_H_dR_Bj1_stack_10->SetEntries(50200);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(1,0.005470015);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(2,0.01367504);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(3,0.02188006);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(4,0.01094003);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(5,0.008205022);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(6,0.008205022);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(7,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(9,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(10,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(11,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(12,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(13,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(14,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(15,0.005470015);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(16,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(21,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(1,0.003867885);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(2,0.006115663);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(3,0.007735769);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(4,0.005470015);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(5,0.004737172);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(6,0.004737172);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(7,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(9,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(10,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(11,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(12,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(13,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(14,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(15,0.003867885);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(16,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(21,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(1,0.0007145317);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(2,0.008931646);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(3,0.01000344);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(4,0.006788051);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(5,0.006073519);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(6,0.003215393);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(7,0.003572658);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(8,0.001786329);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(9,0.001429063);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(10,0.001071798);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(11,0.0007145317);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(12,0.001786329);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(13,0.0007145317);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(15,0.001786329);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(16,0.0003572658);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(1,0.0005052502);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(2,0.001786329);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(3,0.001890473);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(4,0.001557286);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(5,0.001473045);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(6,0.001071798);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(7,0.001129774);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(8,0.0007988707);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(9,0.0007145317);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(10,0.0006188026);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(11,0.0005052502);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(12,0.0007988707);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(13,0.0005052502);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(15,0.0007988707);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(16,0.0003572658);
   VbbHcc_both_H_dR_Bj1_stack_12->SetEntries(137);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_Bj1__650 = new TH1D("VbbHcc_both_H_dR_Bj1__650","",30,0,6);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(1,6880);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(2,15771);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(3,14217);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(4,10986);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(5,8753);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(6,7021);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(7,5713);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(8,4789);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(9,4027);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(10,3580);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(11,3183);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(12,2940);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(13,2730);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(14,2665);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(15,2390);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(16,2201);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(17,1279);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(18,915);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(19,624);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(20,442);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(21,332);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(22,205);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(23,149);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(24,98);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(25,52);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(26,34);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(27,16);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(28,12);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(29,2);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(30,4);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(31,8);
   VbbHcc_both_H_dR_Bj1__650->SetEntries(102047);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1__650->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1__650->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj1__650->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj1__650->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj1__650->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1__650->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__650->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__650->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__650->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__650->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__650->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__650->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__650->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1__650->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__650->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__650->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__650->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__650->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__650->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fx1473[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fy1473[30] = {
   8108.63,
   32578.81,
   26391.1,
   17454.78,
   14886.24,
   14321.1,
   14572.16,
   8309.634,
   8391.134,
   10664.54,
   7819.471,
   4723.132,
   4978.456,
   4538.763,
   4892.423,
   4977.925,
   1507.847,
   1440.586,
   939.4868,
   278.62,
   1587.636,
   754.3722,
   47.44856,
   53.95594,
   21.20749,
   6.753482,
   50.8444,
   7.801773,
   6.924103,
   0.3495985};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fex1473[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fey1473[30] = {
   799.7931,
   3191.358,
   3000.029,
   1555.258,
   1521.455,
   2384.258,
   2455.469,
   1099.807,
   1188.643,
   2316.289,
   1748.825,
   782.6356,
   866.7753,
   1525.485,
   1570.679,
   906.8645,
   395.4461,
   473.1748,
   386.1894,
   58.20952,
   1419.055,
   383.9074,
   11.96147,
   24.27998,
   9.054342,
   3.567956,
   31.60438,
   5.909829,
   5.886964,
   0.1557368};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj1_fx1473,Graph_from_VbbHcc_both_H_dR_Bj1_fy1473,Graph_from_VbbHcc_both_H_dR_Bj1_fex1473,Graph_from_VbbHcc_both_H_dR_Bj1_fey1473);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj11473 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj11473","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->SetMinimum(0.1744755);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->SetMaximum(39347.17);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj11473);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_Bj1","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj1_both_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
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
   
   TH1D *data_mc_ratio__651 = new TH1D("data_mc_ratio__651","",30,0,6);
   data_mc_ratio__651->SetBinContent(1,0.8484788);
   data_mc_ratio__651->SetBinContent(2,0.4840876);
   data_mc_ratio__651->SetBinContent(3,0.5387044);
   data_mc_ratio__651->SetBinContent(4,0.6293978);
   data_mc_ratio__651->SetBinContent(5,0.5879927);
   data_mc_ratio__651->SetBinContent(6,0.4902556);
   data_mc_ratio__651->SetBinContent(7,0.392049);
   data_mc_ratio__651->SetBinContent(8,0.576319);
   data_mc_ratio__651->SetBinContent(9,0.4799113);
   data_mc_ratio__651->SetBinContent(10,0.3356918);
   data_mc_ratio__651->SetBinContent(11,0.4070608);
   data_mc_ratio__651->SetBinContent(12,0.6224683);
   data_mc_ratio__651->SetBinContent(13,0.5483628);
   data_mc_ratio__651->SetBinContent(14,0.5871644);
   data_mc_ratio__651->SetBinContent(15,0.4885105);
   data_mc_ratio__651->SetBinContent(16,0.4421521);
   data_mc_ratio__651->SetBinContent(17,0.8482291);
   data_mc_ratio__651->SetBinContent(18,0.6351583);
   data_mc_ratio__651->SetBinContent(19,0.6641924);
   data_mc_ratio__651->SetBinContent(20,1.58639);
   data_mc_ratio__651->SetBinContent(21,0.2091159);
   data_mc_ratio__651->SetBinContent(22,0.2717491);
   data_mc_ratio__651->SetBinContent(23,3.140243);
   data_mc_ratio__651->SetBinContent(24,1.816297);
   data_mc_ratio__651->SetBinContent(25,2.451964);
   data_mc_ratio__651->SetBinContent(26,5.03444);
   data_mc_ratio__651->SetBinContent(27,0.3146856);
   data_mc_ratio__651->SetBinContent(28,1.538112);
   data_mc_ratio__651->SetBinContent(29,0.2888461);
   data_mc_ratio__651->SetBinContent(30,11.4417);
   data_mc_ratio__651->SetBinContent(31,12.36821);
   data_mc_ratio__651->SetBinError(1,0.01022932);
   data_mc_ratio__651->SetBinError(2,0.003854734);
   data_mc_ratio__651->SetBinError(3,0.004518003);
   data_mc_ratio__651->SetBinError(4,0.006004895);
   data_mc_ratio__651->SetBinError(5,0.006284829);
   data_mc_ratio__651->SetBinError(6,0.005850905);
   data_mc_ratio__651->SetBinError(7,0.005186904);
   data_mc_ratio__651->SetBinError(8,0.008327996);
   data_mc_ratio__651->SetBinError(9,0.007562583);
   data_mc_ratio__651->SetBinError(10,0.00561047);
   data_mc_ratio__651->SetBinError(11,0.007215076);
   data_mc_ratio__651->SetBinError(12,0.01148004);
   data_mc_ratio__651->SetBinError(13,0.0104951);
   data_mc_ratio__651->SetBinError(14,0.01137395);
   data_mc_ratio__651->SetBinError(15,0.009992518);
   data_mc_ratio__651->SetBinError(16,0.009424573);
   data_mc_ratio__651->SetBinError(17,0.02371799);
   data_mc_ratio__651->SetBinError(18,0.02099769);
   data_mc_ratio__651->SetBinError(19,0.02658898);
   data_mc_ratio__651->SetBinError(20,0.07545687);
   data_mc_ratio__651->SetBinError(21,0.01147673);
   data_mc_ratio__651->SetBinError(22,0.01897978);
   data_mc_ratio__651->SetBinError(23,0.2572587);
   data_mc_ratio__651->SetBinError(24,0.1834737);
   data_mc_ratio__651->SetBinError(25,0.3400262);
   data_mc_ratio__651->SetBinError(26,0.8633993);
   data_mc_ratio__651->SetBinError(27,0.07867139);
   data_mc_ratio__651->SetBinError(28,0.4440147);
   data_mc_ratio__651->SetBinError(29,0.204245);
   data_mc_ratio__651->SetBinError(30,5.720848);
   data_mc_ratio__651->SetBinError(31,5.791641);
   data_mc_ratio__651->SetMinimum(0.4);
   data_mc_ratio__651->SetMaximum(1.6);
   data_mc_ratio__651->SetEntries(20.99952);
   data_mc_ratio__651->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__651->SetLineColor(ci);
   data_mc_ratio__651->SetLineWidth(2);
   data_mc_ratio__651->SetMarkerStyle(20);
   data_mc_ratio__651->SetMarkerSize(1.2);
   data_mc_ratio__651->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__651->GetXaxis()->SetRange(1,30);
   data_mc_ratio__651->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__651->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__651->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__651->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__651->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__651->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__651->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__651->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__651->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__651->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__651->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__651->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__651->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__651->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__651->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__651->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__651->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1474[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1474[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1474[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1474[30] = {
   0.09863481,
   0.09795807,
   0.1136758,
   0.08910214,
   0.1022055,
   0.1664857,
   0.1685041,
   0.1323532,
   0.1416546,
   0.2171953,
   0.22365,
   0.1657027,
   0.1741053,
   0.3361014,
   0.3210432,
   0.1821772,
   0.2622587,
   0.32846,
   0.4110642,
   0.2089208,
   0.8938162,
   0.5089098,
   0.2520933,
   0.4499964,
   0.4269407,
   0.5283135,
   0.6215901,
   0.7574983,
   0.8502132,
   0.4454733};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1474,Graph_from_mc_statistical_error_fy1474,Graph_from_mc_statistical_error_fex1474,Graph_from_mc_statistical_error_fey1474);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1474 = new TH1F("Graph_Graph_from_mc_statistical_error1474","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1474->SetMinimum(0.0955654);
   Graph_Graph_from_mc_statistical_error1474->SetMaximum(2.072579);
   Graph_Graph_from_mc_statistical_error1474->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1474->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1474->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1474->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1474);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_both_16->cd();
   H_dR_Bj1_both_16->Modified();
   H_dR_Bj1_both_16->cd();
   H_dR_Bj1_both_16->SetSelected(H_dR_Bj1_both_16);
}
