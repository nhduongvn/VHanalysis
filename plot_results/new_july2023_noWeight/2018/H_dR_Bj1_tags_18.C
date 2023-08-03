void H_dR_Bj1_tags_18()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_18/H_dR_Bj1_tags_18
//=========  (Thu Aug  3 12:23:26 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_tags_18 = new TCanvas("H_dR_Bj1_tags_18", "H_dR_Bj1_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_tags_18->SetHighLightColor(2);
   H_dR_Bj1_tags_18->Range(0,0,1,1);
   H_dR_Bj1_tags_18->SetFillColor(0);
   H_dR_Bj1_tags_18->SetFillStyle(4000);
   H_dR_Bj1_tags_18->SetBorderMode(0);
   H_dR_Bj1_tags_18->SetBorderSize(2);
   H_dR_Bj1_tags_18->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-102.4283,6.314516,102335.8);
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
   st->SetMaximum(87706.67);
   
   TH1F *st_stack_47 = new TH1F("st_stack_47","",30,0,6);
   st_stack_47->SetMinimum(0.01);
   st_stack_47->SetMaximum(92092);
   st_stack_47->SetDirectory(0);
   st_stack_47->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_47->SetLineColor(ci);
   st_stack_47->GetXaxis()->SetRange(1,30);
   st_stack_47->GetXaxis()->SetLabelFont(42);
   st_stack_47->GetXaxis()->SetLabelSize(0.035);
   st_stack_47->GetXaxis()->SetTitleSize(0.035);
   st_stack_47->GetXaxis()->SetTitleFont(42);
   st_stack_47->GetYaxis()->SetTitle("Events/0.2");
   st_stack_47->GetYaxis()->SetLabelFont(42);
   st_stack_47->GetYaxis()->SetLabelSize(0.05);
   st_stack_47->GetYaxis()->SetTitleSize(0.057);
   st_stack_47->GetYaxis()->SetTitleOffset(1.2);
   st_stack_47->GetYaxis()->SetTitleFont(42);
   st_stack_47->GetZaxis()->SetLabelFont(42);
   st_stack_47->GetZaxis()->SetLabelSize(0.035);
   st_stack_47->GetZaxis()->SetTitleSize(0.035);
   st_stack_47->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_47);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(1,8531.811);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(2,28541.4);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(3,23149.27);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(4,21360.49);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(5,15684.18);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(6,16411.26);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(7,13825.5);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(8,8714.485);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(9,8683.906);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(10,14345.75);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(11,9564.081);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(12,5907.055);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(13,6515.634);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(14,6770.177);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(15,3985.547);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(16,7603.107);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(17,3578.278);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(18,2766.261);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(19,2032.261);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(20,972.9484);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(21,701.7362);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(22,1615.345);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(23,1341.776);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(24,635.3301);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(25,414.8911);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(26,214.2776);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(27,272.2519);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(28,529.2624);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(29,139.3367);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(30,38.88206);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(31,784.9358);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(1,972.8653);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(2,2245.421);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(3,1908.517);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(4,2028.265);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(5,1602.85);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(6,1829.981);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(7,2261.787);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(8,1170.246);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(9,1223.786);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(10,2427.735);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(11,1424.702);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(12,883.9027);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(13,1087.6);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(14,1149.604);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(15,696.0279);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(16,2504.003);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(17,853.0046);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(18,674.164);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(19,551.8767);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(20,149.9458);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(21,125.5902);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(22,545.2203);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(23,538.0304);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(24,378.6734);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(25,101.2265);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(26,63.52915);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(27,77.71826);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(28,375.4585);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(29,52.39158);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(30,32.47536);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(31,525.1772);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetEntries(10231);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(1,51.29394);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(2,159.3246);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(3,160.8264);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(4,136.9138);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(5,107.0442);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(6,95.65444);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(7,77.6242);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(8,64.95057);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(9,58.52567);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(10,53.14271);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(11,44.06406);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(12,40.33442);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(13,33.39514);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(14,32.69196);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(15,25.89286);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(16,28.56175);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(17,20.39661);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(18,18.76159);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(19,13.88811);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(20,11.59604);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(21,8.134262);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(22,7.85272);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(23,8.180222);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(24,5.544995);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(25,4.858938);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(26,2.924908);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(27,2.924367);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(28,1.268926);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(29,1.314372);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(30,0.7767536);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(31,1.318931);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(1,3.080397);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(2,5.25086);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(3,5.176582);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(4,4.763152);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(5,4.195847);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(6,4.102524);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(7,3.648626);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(8,3.273095);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(9,3.133288);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(10,3.049899);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(11,2.668698);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(12,2.516404);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(13,2.225793);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(14,2.315952);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(15,2.031919);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(16,2.22238);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(17,1.811422);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(18,1.711536);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(19,1.563241);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(20,1.405131);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(21,1.04423);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(22,1.149467);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(23,1.197514);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(24,0.9557947);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(25,0.9198192);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(26,0.7144226);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(27,0.7202999);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(28,0.3751789);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(29,0.5432012);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(30,0.3413234);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(31,0.4485085);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetEntries(14890);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_3 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(1,752.1322);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(2,2759.748);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(3,3266.066);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(4,2888.673);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(5,2353.809);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(6,1903.444);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(7,1555.926);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(8,1300.792);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(9,1132.44);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(10,993.9829);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(11,915.2718);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(12,831.6536);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(13,744.1621);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(14,656.9524);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(15,587.262);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(16,502.0164);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(17,409.5543);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(18,339.6751);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(19,277.0646);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(20,222.9909);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(21,176.8951);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(22,143.8238);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(23,109.1289);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(24,90.12685);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(25,63.73672);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(26,45.97705);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(27,33.76726);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(28,21.21977);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(29,14.30007);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(30,9.686618);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(31,17.57453);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(1,6.79398);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(2,13.01133);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(3,14.20079);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(4,13.3618);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(5,12.0736);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(6,10.85049);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(7,9.808226);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(8,8.956597);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(9,8.364112);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(10,7.833965);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(11,7.517414);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(12,7.18194);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(13,6.787171);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(14,6.370347);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(15,6.03141);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(16,5.570059);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(17,5.024116);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(18,4.564843);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(19,4.132054);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(20,3.699813);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(21,3.294239);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(22,2.967671);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(23,2.585961);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(24,2.353086);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(25,1.978273);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(26,1.671943);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(27,1.433618);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(28,1.129995);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(29,0.9287623);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(30,0.7671924);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(31,1.023035);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetEntries(421807);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_4 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(1,140.5959);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(2,426.1905);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(3,456.361);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(4,373.0451);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(5,277.9271);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(6,200.9692);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(7,185.4601);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(8,156.0062);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(9,153.8223);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(10,140.8429);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(11,117.3874);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(12,105.4089);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(13,99.41482);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(14,93.41419);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(15,73.24837);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(16,53.05176);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(17,52.67314);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(18,37.82025);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(19,35.85732);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(20,26.689);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(21,20.93834);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(22,17.3064);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(23,8.666422);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(24,8.798776);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(25,8.11695);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(26,5.007851);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(27,2.454656);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(28,3.089514);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(29,1.858969);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(30,0.4367026);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(31,2.719222);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(1,4.87264);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(2,12.96204);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(3,13.92918);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(4,15.21267);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(5,13.14257);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(6,8.659119);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(7,9.890442);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(8,7.786485);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(9,9.587677);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(10,10.07488);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(11,7.095656);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(12,6.734822);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(13,7.623537);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(14,9.303906);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(15,6.062568);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(16,3.744832);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(17,5.596566);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(18,3.317094);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(19,5.058115);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(20,4.728905);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(21,2.491258);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(22,2.372744);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(23,1.435236);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(24,1.373396);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(25,1.538954);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(26,1.134326);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(27,0.6775793);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(28,0.9476878);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(29,0.6223048);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(30,0.2208617);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(31,0.9294263);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetEntries(18660);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_5 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(1,20.31939);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(2,51.88492);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(3,38.24906);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(4,26.04176);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(5,25.08901);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(6,29.72208);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(7,22.02535);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(8,14.78433);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(9,10.39015);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(10,8.412408);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(11,9.334436);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(12,15.74008);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(13,9.147704);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(14,4.653234);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(15,6.98091);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(16,5.40527);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(17,5.77759);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(18,3.473735);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(19,4.242294);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(20,2.370852);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(21,2.010176);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(22,2.823256);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(23,1.580061);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(24,0.5698326);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(25,1.242592);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(26,0.01224321);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(27,0.2594997);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(28,0.1265664);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(29,0.02448642);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(30,0.01224321);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(31,0.4126432);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(1,1.715988);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(2,11.90026);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(3,4.395894);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(4,3.569799);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(5,4.549252);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(6,5.745417);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(7,4.478584);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(8,3.265576);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(9,2.428264);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(10,1.390833);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(11,3.106022);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(12,4.15543);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(13,2.420328);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(14,0.8915216);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(15,2.283909);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(16,1.118806);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(17,2.260662);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(18,0.8277997);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(19,2.166715);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(20,0.7005363);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(21,0.6674107);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(22,2.108954);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(23,0.5336657);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(24,0.3186678);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(25,0.5253436);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(26,0.01224321);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(27,0.2594997);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(28,0.1265664);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(29,0.01731451);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(30,0.01224321);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(31,0.2113681);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetEntries(2359);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(2,0.4520427);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(3,0.9040853);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(12,0.4520427);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(2,0.4520427);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(3,0.6392849);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(12,0.4520427);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetEntries(4);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(1,0.7083982);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(2,1.062597);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(3,3.187792);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(4,1.062597);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(5,1.416796);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(6,0.7083982);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(7,0.3541991);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(9,0.7083982);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(11,0.3541991);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(15,0.7083982);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(18,0.3541991);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(19,0.7083982);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(1,0.5009132);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(2,0.6134909);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(3,1.062597);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(4,0.6134909);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(5,0.7083982);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(6,0.5009132);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(7,0.3541991);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(9,0.5009132);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(11,0.3541991);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(15,0.5009132);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(18,0.3541991);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(19,0.5009132);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetEntries(32);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(1,3.632387);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(2,8.103016);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(3,9.500088);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(4,6.147116);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(5,4.750044);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(6,4.191215);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(7,3.911801);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(8,3.632387);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(9,1.397072);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(10,2.514729);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(11,2.794144);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(12,0.8382431);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(13,1.9559);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(14,1.9559);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(15,1.676486);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(16,1.397072);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(17,1.397072);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(18,1.397072);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(19,0.2794144);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(20,0.5588287);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(22,0.5588287);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(24,0.8382431);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(25,0.5588287);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(1,1.007443);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(2,1.504692);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(3,1.629252);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(4,1.310569);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(5,1.152055);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(6,1.082167);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(7,1.045473);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(8,1.007443);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(9,0.6247895);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(10,0.8382431);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(11,0.8835858);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(12,0.4839599);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(13,0.7392609);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(14,0.7392609);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(15,0.6844226);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(16,0.6247895);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(17,0.6247895);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(18,0.6247895);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(19,0.2794144);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(20,0.3951516);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(22,0.3951516);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(23,0.2794144);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(24,0.4839599);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(25,0.3951516);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetEntries(230);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_9 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(1,2.441212);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(2,8.596813);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(3,9.236832);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(4,7.280205);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(5,5.293863);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(6,3.910967);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(7,3.216091);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(8,2.72922);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(9,2.587501);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(10,2.653789);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(11,2.603502);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(12,2.516642);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(13,2.162347);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(14,1.741763);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(15,1.328037);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(16,1.044601);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(17,0.701734);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(18,0.5760162);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(19,0.3908681);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(20,0.2628645);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(21,0.2354352);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(22,0.176005);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(23,0.1691476);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(24,0.1622903);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(25,0.1188605);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(26,0.07314492);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(27,0.03885824);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(28,0.01600045);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(29,0.01828623);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(30,0.004571557);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(31,0.009143115);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(1,0.07469986);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(2,0.1401799);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(3,0.1453043);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(4,0.1289998);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(5,0.1100027);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(6,0.09454949);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(7,0.08573955);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(8,0.07898349);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(9,0.0769055);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(10,0.07788436);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(11,0.07714291);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(12,0.07584515);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(13,0.07030395);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(14,0.06309743);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(15,0.05509627);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(16,0.04886437);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(17,0.04005008);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(18,0.03628561);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(19,0.02989043);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(20,0.02451225);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(21,0.02319812);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(22,0.02005763);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(23,0.01966301);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(24,0.01926031);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(25,0.01648298);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(26,0.01293032);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(27,0.009424507);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(28,0.006047602);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(29,0.006465158);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(30,0.003232579);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(31,0.004571557);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetEntries(27254);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_10 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(1,0.8840825);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(2,3.489831);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(3,4.429951);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(4,3.812941);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(5,2.865667);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(6,2.065045);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(7,1.630456);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(8,1.339537);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(9,1.199443);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(10,1.148175);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(11,1.081406);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(12,0.9896001);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(13,0.8834864);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(14,0.7594883);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(15,0.5997215);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(16,0.465589);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(17,0.3982246);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(18,0.2807841);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(19,0.2158044);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(20,0.1752665);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(21,0.1460554);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(22,0.1084983);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(23,0.1043253);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(24,0.06617206);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(25,0.04292241);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(26,0.04471085);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(27,0.01788434);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(28,0.01311518);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(29,0.003576868);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(30,0.0005961446);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(31,0.002384579);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(1,0.02295737);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(2,0.04561188);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(3,0.0513896);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(4,0.04767667);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(5,0.04133222);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(6,0.03508654);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(7,0.03117671);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(8,0.02825877);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(9,0.02674026);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(10,0.02616253);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(11,0.02539044);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(12,0.02428878);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(13,0.02294963);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(14,0.02127827);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(15,0.01890822);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(16,0.01666008);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(17,0.01540777);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(18,0.01293785);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(19,0.01134243);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(20,0.01022175);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(21,0.00933114);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(22,0.008042431);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(23,0.007886252);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(24,0.006280774);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(25,0.005058455);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(26,0.005162764);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(27,0.003265219);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(28,0.002796166);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(29,0.00146025);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(30,0.0005961446);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(31,0.001192289);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetEntries(49090);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(1,0.004551524);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(2,0.04551524);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(3,0.02275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(4,0.02275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(5,0.0182061);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(6,0.006827286);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(7,0.01137881);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(8,0.004551524);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(9,0.004551524);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(10,0.004551524);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(11,0.004551524);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(12,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(13,0.004551524);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(15,0.004551524);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(16,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(17,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(21,0.004551524);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(23,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(28,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(1,0.003218413);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(2,0.01017752);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(3,0.007196591);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(4,0.007196591);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(5,0.006436827);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(6,0.003941735);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(7,0.005088758);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(8,0.003218413);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(9,0.003218413);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(10,0.003218413);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(11,0.003218413);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(12,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(13,0.003218413);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(15,0.003218413);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(16,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(17,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(21,0.003218413);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(23,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(28,0.002275762);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetEntries(77);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(1,0.003296225);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(2,0.01558215);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(3,0.01378421);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(4,0.0110873);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(5,0.00839039);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(6,0.005693479);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(7,0.004494852);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(8,0.004494852);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(9,0.001797941);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(10,0.002996568);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(11,0.001498284);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(12,0.001797941);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(13,0.002097598);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(14,0.001797941);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(15,0.0008989704);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(16,0.002097598);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(17,0.001498284);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(18,0.0005993136);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(19,0.0008989704);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(20,0.0005993136);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(21,0.001498284);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(22,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(23,0.0008989704);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(25,0.0005993136);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(26,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(30,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(1,0.0009938492);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(2,0.002160856);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(3,0.002032371);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(4,0.001822741);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(5,0.001585635);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(6,0.001306174);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(7,0.001160566);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(8,0.001160566);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(9,0.0007340063);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(10,0.000947598);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(11,0.000670053);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(12,0.0007340063);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(13,0.0007928174);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(14,0.0007340063);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(15,0.0005190208);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(16,0.0007928174);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(17,0.000670053);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(18,0.0004237787);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(19,0.0005190208);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(20,0.0004237787);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(21,0.000670053);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(22,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(23,0.0005190208);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(25,0.0004237787);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(26,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(30,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetEntries(298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_Bj1__128 = new TH1D("VbbHcc_tags_H_dR_Bj1__128","",30,0,6);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(1,11668);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(2,39468);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(3,39383);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(4,32242);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(5,26215);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(6,21894);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(7,18413);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(8,15732);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(9,14071);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(10,12746);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(11,11611);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(12,10701);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(13,9657);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(14,8669);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(15,7683);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(16,6655);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(17,5286);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(18,4421);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(19,3751);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(20,3151);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(21,2564);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(22,2102);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(23,1577);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(24,1290);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(25,975);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(26,753);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(27,552);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(28,322);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(29,245);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(30,160);
   VbbHcc_tags_H_dR_Bj1__128->SetBinContent(31,278);
   VbbHcc_tags_H_dR_Bj1__128->SetEntries(314264);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1__128->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1__128->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj1__128->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj1__128->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj1__128->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1__128->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__128->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__128->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__128->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__128->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__128->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__128->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__128->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1__128->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__128->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__128->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__128->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__128->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__128->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fx1093[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fy1093[30] = {
   9503.826,
   31960.31,
   27098.06,
   24803.5,
   18462.4,
   18651.94,
   15675.66,
   10258.73,
   10044.98,
   15548.46,
   10656.98,
   6904.992,
   7406.762,
   7562.348,
   4683.249,
   8195.054,
   4069.181,
   3168.6,
   2364.909,
   1237.593,
   910.1016,
   1787.994,
   1469.888,
   741.4373,
   493.5675,
   268.3178,
   311.7144,
   554.9986,
   156.8564,
   49.79985};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fex1093[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fey1093[30] = {
   972.9083,
   2245.535,
   1908.634,
   2028.376,
   1602.962,
   1830.048,
   2261.838,
   1170.316,
   1223.859,
   2427.771,
   1424.746,
   883.9711,
   1087.653,
   1149.662,
   696.0877,
   2504.013,
   853.0429,
   674.1907,
   551.9221,
   150.0747,
   125.6642,
   545.2389,
   538.0402,
   378.6849,
   101.2639,
   63.56529,
   77.7382,
   375.4617,
   52.40633,
   32.48697};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj1_fx1093,Graph_from_VbbHcc_tags_H_dR_Bj1_fy1093,Graph_from_VbbHcc_tags_H_dR_Bj1_fex1093,Graph_from_VbbHcc_tags_H_dR_Bj1_fey1093);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->SetMinimum(15.58159);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->SetMaximum(37624.7);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj11093);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_Bj1","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj1_tags_18->cd();
  
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
   
   TH1D *data_mc_ratio__129 = new TH1D("data_mc_ratio__129","",30,0,6);
   data_mc_ratio__129->SetBinContent(1,1.227716);
   data_mc_ratio__129->SetBinContent(2,1.234907);
   data_mc_ratio__129->SetBinContent(3,1.453351);
   data_mc_ratio__129->SetBinContent(4,1.299897);
   data_mc_ratio__129->SetBinContent(5,1.419913);
   data_mc_ratio__129->SetBinContent(6,1.173819);
   data_mc_ratio__129->SetBinContent(7,1.174623);
   data_mc_ratio__129->SetBinContent(8,1.533523);
   data_mc_ratio__129->SetBinContent(9,1.400799);
   data_mc_ratio__129->SetBinContent(10,0.8197599);
   data_mc_ratio__129->SetBinContent(11,1.089521);
   data_mc_ratio__129->SetBinContent(12,1.549748);
   data_mc_ratio__129->SetBinContent(13,1.303809);
   data_mc_ratio__129->SetBinContent(14,1.146337);
   data_mc_ratio__129->SetBinContent(15,1.640528);
   data_mc_ratio__129->SetBinContent(16,0.8120752);
   data_mc_ratio__129->SetBinContent(17,1.299033);
   data_mc_ratio__129->SetBinContent(18,1.395253);
   data_mc_ratio__129->SetBinContent(19,1.586108);
   data_mc_ratio__129->SetBinContent(20,2.546072);
   data_mc_ratio__129->SetBinContent(21,2.817268);
   data_mc_ratio__129->SetBinContent(22,1.175619);
   data_mc_ratio__129->SetBinContent(23,1.072871);
   data_mc_ratio__129->SetBinContent(24,1.739864);
   data_mc_ratio__129->SetBinContent(25,1.975414);
   data_mc_ratio__129->SetBinContent(26,2.806374);
   data_mc_ratio__129->SetBinContent(27,1.770852);
   data_mc_ratio__129->SetBinContent(28,0.5801816);
   data_mc_ratio__129->SetBinContent(29,1.561938);
   data_mc_ratio__129->SetBinContent(30,3.212861);
   data_mc_ratio__129->SetBinContent(31,0.3444974);
   data_mc_ratio__129->SetBinError(1,0.01136579);
   data_mc_ratio__129->SetBinError(2,0.006216008);
   data_mc_ratio__129->SetBinError(3,0.007323457);
   data_mc_ratio__129->SetBinError(4,0.007239323);
   data_mc_ratio__129->SetBinError(5,0.008769741);
   data_mc_ratio__129->SetBinError(6,0.007933021);
   data_mc_ratio__129->SetBinError(7,0.008656381);
   data_mc_ratio__129->SetBinError(8,0.0122264);
   data_mc_ratio__129->SetBinError(9,0.011809);
   data_mc_ratio__129->SetBinError(10,0.007261055);
   data_mc_ratio__129->SetBinError(11,0.01011115);
   data_mc_ratio__129->SetBinError(12,0.01498128);
   data_mc_ratio__129->SetBinError(13,0.01326761);
   data_mc_ratio__129->SetBinError(14,0.01231198);
   data_mc_ratio__129->SetBinError(15,0.01871622);
   data_mc_ratio__129->SetBinError(16,0.009954563);
   data_mc_ratio__129->SetBinError(17,0.0178672);
   data_mc_ratio__129->SetBinError(18,0.02098422);
   data_mc_ratio__129->SetBinError(19,0.02589758);
   data_mc_ratio__129->SetBinError(20,0.04535722);
   data_mc_ratio__129->SetBinError(21,0.05563769);
   data_mc_ratio__129->SetBinError(22,0.0256419);
   data_mc_ratio__129->SetBinError(23,0.02701666);
   data_mc_ratio__129->SetBinError(24,0.04844182);
   data_mc_ratio__129->SetBinError(25,0.06326387);
   data_mc_ratio__129->SetBinError(26,0.1022699);
   data_mc_ratio__129->SetBinError(27,0.07537246);
   data_mc_ratio__129->SetBinError(28,0.03233226);
   data_mc_ratio__129->SetBinError(29,0.09978855);
   data_mc_ratio__129->SetBinError(30,0.253999);
   data_mc_ratio__129->SetBinError(31,0.2251496);
   data_mc_ratio__129->SetMinimum(0.4);
   data_mc_ratio__129->SetMaximum(1.6);
   data_mc_ratio__129->SetEntries(270.0689);
   data_mc_ratio__129->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__129->SetLineColor(ci);
   data_mc_ratio__129->SetLineWidth(2);
   data_mc_ratio__129->SetMarkerStyle(20);
   data_mc_ratio__129->SetMarkerSize(1.2);
   data_mc_ratio__129->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__129->GetXaxis()->SetRange(1,30);
   data_mc_ratio__129->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__129->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__129->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__129->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__129->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__129->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__129->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__129->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__129->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__129->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__129->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__129->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__129->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__129->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__129->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__129->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__129->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1094[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1094[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1094[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1094[30] = {
   0.1023702,
   0.07026011,
   0.07043432,
   0.08177778,
   0.08682305,
   0.0981157,
   0.1442898,
   0.11408,
   0.1218378,
   0.1561423,
   0.1336913,
   0.1280191,
   0.1468459,
   0.1520244,
   0.1486335,
   0.3055518,
   0.209635,
   0.2127724,
   0.2333798,
   0.1212634,
   0.1380771,
   0.3049444,
   0.3660417,
   0.5107443,
   0.2051672,
   0.236903,
   0.2493892,
   0.6765092,
   0.3341038,
   0.6523508};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1094,Graph_from_mc_statistical_error_fy1094,Graph_from_mc_statistical_error_fex1094,Graph_from_mc_statistical_error_fey1094);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1094 = new TH1F("Graph_Graph_from_mc_statistical_error1094","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1094->SetMinimum(0.188189);
   Graph_Graph_from_mc_statistical_error1094->SetMaximum(1.811811);
   Graph_Graph_from_mc_statistical_error1094->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1094->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1094->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1094);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_tags_18->cd();
   H_dR_Bj1_tags_18->Modified();
   H_dR_Bj1_tags_18->cd();
   H_dR_Bj1_tags_18->SetSelected(H_dR_Bj1_tags_18);
}
