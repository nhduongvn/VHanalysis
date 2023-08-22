void Z_dR_algo_17()
{
//=========Macro generated from canvas: Z_dR_algo_17/Z_dR_algo_17
//=========  (Tue Aug 22 09:21:25 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_algo_17 = new TCanvas("Z_dR_algo_17", "Z_dR_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_algo_17->SetHighLightColor(2);
   Z_dR_algo_17->Range(0,0,1,1);
   Z_dR_algo_17->SetFillColor(0);
   Z_dR_algo_17->SetFillStyle(4000);
   Z_dR_algo_17->SetBorderMode(0);
   Z_dR_algo_17->SetBorderSize(2);
   Z_dR_algo_17->SetFrameFillStyle(1000);
   Z_dR_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-325.909,6.314516,325593.1);
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
   st->SetMaximum(279048.8);
   
   TH1F *st_stack_114 = new TH1F("st_stack_114","",30,0,6);
   st_stack_114->SetMinimum(0.01);
   st_stack_114->SetMaximum(293001.2);
   st_stack_114->SetDirectory(0);
   st_stack_114->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_114->SetLineColor(ci);
   st_stack_114->GetXaxis()->SetRange(1,30);
   st_stack_114->GetXaxis()->SetLabelFont(42);
   st_stack_114->GetXaxis()->SetLabelSize(0.035);
   st_stack_114->GetXaxis()->SetTitleSize(0.035);
   st_stack_114->GetXaxis()->SetTitleFont(42);
   st_stack_114->GetYaxis()->SetTitle("Events/0.2");
   st_stack_114->GetYaxis()->SetLabelFont(42);
   st_stack_114->GetYaxis()->SetLabelSize(0.05);
   st_stack_114->GetYaxis()->SetTitleSize(0.057);
   st_stack_114->GetYaxis()->SetTitleOffset(1.2);
   st_stack_114->GetYaxis()->SetTitleFont(42);
   st_stack_114->GetZaxis()->SetLabelFont(42);
   st_stack_114->GetZaxis()->SetLabelSize(0.035);
   st_stack_114->GetZaxis()->SetTitleSize(0.035);
   st_stack_114->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_114);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(2,30.45828);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,77180.57);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,109019.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,84687.07);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,70316.54);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,74793.88);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,69610.13);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,67939.04);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,67788.39);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,66597.31);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,59133.41);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,58711.56);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,58886.5);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,52381.24);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,83383.74);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,43086.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,57020.32);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,31747.24);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,27888.73);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,29409.95);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,26625.91);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,19989.67);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(24,19563.08);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(25,17356.19);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(26,29729.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(27,17230.47);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(28,14367.37);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(29,15079.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(30,8128.119);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(31,9743.438);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(2,11.23062);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,2842.877);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,18923.02);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,3754.758);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,3167.596);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,3697.163);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,3208.679);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,3139.049);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,3063.674);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,3479.561);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,2836.99);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,2843.162);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,3330.294);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,2897.639);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,20923.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,2459.582);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,16771.33);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,2073.943);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,1907.364);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,2024.597);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,1917.138);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,1616.793);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(24,1590.945);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(25,1693.82);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(26,10855.67);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(27,1473.813);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(28,1454.589);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(29,1765.82);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(30,959.8324);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(31,1180.627);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(106115);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,0.5535155);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,378.7771);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,601.1887);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,652.1578);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,662.5872);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,634.6299);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,631.457);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,557.0443);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,529.2491);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,478.853);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,435.3523);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,399.8016);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,374.6461);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,335.1092);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,308.0458);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,264.2717);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,246.5676);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,211.3558);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,202.1149);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,190.5517);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,183.8134);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,184.6525);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,163.428);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,150.3494);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,141.2409);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,128.2237);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(28,118.2549);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(29,88.95643);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(30,61.62417);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(31,51.92935);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.430908);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,8.286914);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,10.10192);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,10.33098);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,10.4295);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,10.08928);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,10.29799);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,9.614886);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,9.502938);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,9.013053);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,8.544262);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,8.241751);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,7.77446);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,7.327659);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,6.953741);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,6.481257);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,6.31387);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,5.796425);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,5.781011);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,5.644193);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,5.592361);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,5.564079);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,5.282196);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,4.946126);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,4.833225);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,4.50492);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(28,4.44232);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(29,3.779735);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(30,3.180229);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(31,2.924539);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(142925);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_3 = new TH1D("VbbHcc_algo_Z_dR_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(2,4.277626);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(3,7982.323);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(4,14995.81);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(5,17023.69);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(6,16842.44);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(7,14806.39);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(8,12262.08);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(9,10013.98);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(10,8254.464);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(11,7062.766);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(12,6245.108);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(13,5674.745);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(14,5209.606);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(15,4830.089);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(16,4491.173);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(17,4058.89);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(18,3724.071);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(19,3401.121);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(20,3140.754);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(21,2952.874);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(22,2814.92);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(23,2739.31);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(24,2712.512);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(25,2740.669);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(26,2771.531);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(27,2652.434);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(28,2382.59);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(29,1864.224);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(30,1110.889);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(31,780.1305);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(2,0.5507503);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(3,23.79946);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(4,31.9796);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(5,33.55466);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(6,32.94281);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(7,30.59881);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(8,27.59203);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(9,24.82063);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(10,22.47636);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(11,20.78854);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(12,19.54562);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(13,18.64255);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(14,17.91134);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(15,17.2644);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(16,16.63552);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(17,15.85311);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(18,15.20938);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(19,14.49981);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(20,13.94067);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(21,13.49426);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(22,13.15909);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(23,12.97966);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(24,12.92557);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(25,13.03968);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(26,13.18053);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(27,12.97703);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(28,12.37423);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(29,11.04641);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(30,8.543159);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(31,7.070253);
   VbbHcc_algo_Z_dR_stack_3->SetEntries(3114170);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_4 = new TH1D("VbbHcc_algo_Z_dR_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(2,0.2235332);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(3,503.2486);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(4,682.6469);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(5,674.9);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(6,593.8411);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(7,500.485);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(8,436.5906);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(9,435.6249);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(10,391.4333);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(11,369.6041);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(12,348.2796);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(13,327.8292);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(14,300.7097);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(15,275.6316);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(16,268.7079);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(17,221.105);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(18,208.5054);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(19,199.3861);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(20,166.6478);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(21,144.3338);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(22,149.0541);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(23,144.1368);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(24,124.5217);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(25,108.3412);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(26,92.01774);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(27,103.7474);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(28,92.26322);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(29,80.28813);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(30,50.78397);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(31,38.82234);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(2,0.1292447);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(3,11.32998);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(4,14.31454);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(5,18.0654);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(6,20.26162);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(7,18.53631);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(8,15.50736);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(9,14.30353);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(10,13.9514);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(11,12.7826);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(12,12.59346);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(13,13.66709);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(14,12.84268);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(15,11.13747);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(16,11.38753);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(17,9.378526);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(18,10.29922);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(19,10.57509);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(20,8.508077);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(21,7.142231);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(22,9.145726);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(23,9.1544);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(24,8.026228);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(25,7.377492);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(26,5.832888);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(27,6.222562);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(28,6.167499);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(29,5.20456);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(30,3.897654);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(31,2.747936);
   VbbHcc_algo_Z_dR_stack_4->SetEntries(54777);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_5 = new TH1D("VbbHcc_algo_Z_dR_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(2,0.1066864);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(3,202.7348);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(4,234.5212);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(5,176.9652);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(6,167.7914);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(7,134.6552);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(8,154.68);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(9,151.8292);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(10,145.4219);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(11,131.53);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(12,141.1497);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(13,112.5903);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(14,111.2102);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(15,91.6865);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(16,107.7285);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(17,75.39472);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(18,86.90294);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(19,67.3528);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(20,43.50556);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(21,58.122);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(22,46.11473);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(23,61.26643);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(24,40.13255);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(25,40.9338);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(26,36.98054);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(27,38.52071);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(28,23.64918);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(29,34.32744);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(30,11.916);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(31,19.79022);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(2,0.09181493);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(3,12.25008);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(4,17.16278);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(5,11.72388);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(6,14.93224);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(7,9.198445);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(8,16.1151);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(9,13.90735);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(10,14.19649);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(11,10.66397);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(12,18.63045);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(13,13.60614);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(14,11.42026);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(15,9.798837);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(16,12.70751);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(17,10.70855);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(18,14.67115);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(19,8.117505);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(20,4.813525);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(21,10.51784);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(22,4.899832);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(23,8.524156);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(24,4.528681);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(25,4.991708);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(26,4.72032);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(27,5.127931);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(28,3.626341);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(29,4.411915);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(30,1.77818);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(31,6.611384);
   VbbHcc_algo_Z_dR_stack_5->SetEntries(15759);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_6 = new TH1D("VbbHcc_algo_Z_dR_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(3,2.842079);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(4,2.242197);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(5,2.323452);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(6,1.648192);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(7,2.19602);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(8,1.420928);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(9,0.546279);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(10,0.9560132);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(11,0.8136933);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(12,0.8013858);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(13,1.100093);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(14,2.045106);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(15,1.151455);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(16,0.6467053);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(17,0.232904);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(18,1.324932);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(19,0.2836788);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(20,0.3826602);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(21,0.3041425);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(22,0.3341271);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(23,0.3528268);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(25,0.3445159);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(29,0.3478197);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(30,0.3776423);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(3,0.9149741);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(4,0.8052479);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(5,0.8351712);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(6,0.7395104);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(7,0.8536976);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(8,0.6410689);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(9,0.389617);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(10,0.5526841);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(11,0.478992);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(12,0.463301);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(13,0.5570419);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(14,0.8479435);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(15,0.6708883);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(16,0.4577968);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(17,0.232904);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(18,0.6278926);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(19,0.2836788);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(20,0.3826602);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(21,0.3041425);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(22,0.3341271);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(23,0.3528268);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(25,0.3445159);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(29,0.3478197);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(30,0.3776423);
   VbbHcc_algo_Z_dR_stack_6->SetEntries(83);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_7 = new TH1D("VbbHcc_algo_Z_dR_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(3,5.633276);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(4,8.241176);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(5,8.814233);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(6,3.209219);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(7,2.74754);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(8,2.108115);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(9,1.6184);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(10,2.892523);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(11,2.421871);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(12,3.646148);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(13,1.892059);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(14,1.278006);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(15,2.458152);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(16,1.894707);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(17,1.410022);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(18,3.119542);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(19,1.669981);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(20,1.688327);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(21,1.222711);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(22,0.7217968);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(23,1.161671);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(24,0.3927661);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(25,0.9632612);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(26,0.6844704);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(27,1.093221);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(28,1.509275);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(29,0.5631072);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(30,0.2389563);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(31,0.2845511);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(3,1.233739);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(4,1.462046);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(5,1.475772);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(6,0.8529206);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(7,0.8644679);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(8,0.7158393);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(9,0.6436424);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(10,0.8480779);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(11,0.7700826);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(12,0.9526234);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(13,0.6825134);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(14,0.5793471);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(15,0.8443559);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(16,0.7245878);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(17,0.5817368);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(18,0.8758448);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(19,0.6560932);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(20,0.64715);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(21,0.5523026);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(22,0.4252601);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(23,0.5272819);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(24,0.2826806);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(25,0.5036454);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(26,0.3963049);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(27,0.507484);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(28,0.6271432);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(29,0.3983436);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(30,0.2389563);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(31,0.2845511);
   VbbHcc_algo_Z_dR_stack_7->SetEntries(272);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_8 = new TH1D("VbbHcc_algo_Z_dR_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(3,12.22991);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(4,13.28417);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(5,16.74112);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(6,6.058296);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(7,3.20167);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(8,4.648956);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(9,3.689037);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(10,3.029594);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(11,3.792723);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(12,3.092431);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(13,3.808089);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(14,3.080495);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(15,2.023579);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(16,2.122355);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(17,3.258953);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(18,2.76784);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(19,1.997387);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(20,3.188331);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(21,1.947891);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(22,1.544801);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(23,0.2267611);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(24,1.464114);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(25,0.2819752);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(26,0.5544655);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(27,0.6830999);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(28,0.9286614);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(29,2.29154);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(30,1.22787);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(31,0.7785924);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(3,1.797116);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(4,1.788539);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(5,2.011427);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(6,1.192466);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(7,0.8367778);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(8,1.107583);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(9,0.9614445);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(10,0.8656655);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(11,0.9838995);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(12,0.8646707);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(13,0.9676299);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(14,0.8706978);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(15,0.6994414);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(16,0.7159924);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(17,0.915559);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(18,0.8446586);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(19,0.7237147);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(20,0.8670831);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(21,0.6597176);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(22,0.6014006);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(23,0.2267611);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(24,0.5593115);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(25,0.2819752);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(26,0.3356437);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(27,0.3956965);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(28,0.4698283);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(29,0.7797622);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(30,0.5537399);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(31,0.4218078);
   VbbHcc_algo_Z_dR_stack_8->SetEntries(443);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_9 = new TH1D("VbbHcc_algo_Z_dR_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(2,0.007331233);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(3,7.025135);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(4,11.32734);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(5,9.989928);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(6,7.035598);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(7,4.268347);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(8,2.541913);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(9,2.138295);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(10,1.954721);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(11,1.964337);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(12,2.017731);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(13,2.007395);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(14,1.855854);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(15,1.840942);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(16,1.517984);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(17,1.499664);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(18,1.316167);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(19,1.291456);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(20,1.011223);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(21,0.998558);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(22,0.8084093);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(23,0.7183107);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(24,0.598135);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(25,0.5549822);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(26,0.7819965);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(27,0.8801942);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(28,1.060318);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(29,0.9453907);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(30,0.5920835);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(31,0.3431491);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(2,0.00371277);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(3,0.1105976);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(4,0.137227);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(5,0.1255698);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(6,0.1037707);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(7,0.08055616);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(8,0.06224749);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(9,0.05758802);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(10,0.05502432);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(11,0.05539087);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(12,0.05621588);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(13,0.05608373);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(14,0.0544593);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(15,0.05418563);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(16,0.04972765);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(17,0.04879859);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(18,0.0460937);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(19,0.04530153);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(20,0.03982775);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(21,0.03939813);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(22,0.035314);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(23,0.03356145);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(24,0.02998295);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(25,0.02911861);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(26,0.03430899);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(27,0.03702437);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(28,0.04067936);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(29,0.03913569);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(30,0.03134906);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(31,0.02304086);
   VbbHcc_algo_Z_dR_stack_9->SetEntries(49206);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_10 = new TH1D("VbbHcc_algo_Z_dR_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(2,0.0008159512);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(3,1.617134);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(4,3.498556);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(5,4.052245);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(6,3.718875);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(7,2.602653);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(8,1.8666);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(9,1.469433);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(10,1.336395);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(11,1.308421);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(12,1.289342);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(13,1.261215);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(14,1.15502);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(15,1.052503);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(16,0.9630622);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(17,0.8460974);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(18,0.7777658);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(19,0.7454876);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(20,0.6916808);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(21,0.6592228);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(22,0.5776711);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(23,0.4999369);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(24,0.4488568);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(25,0.4529155);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(26,0.4804929);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(27,0.5239715);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(28,0.5330864);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(29,0.3837164);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(30,0.2452975);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(31,0.1537083);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(2,0.000584599);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(3,0.02553333);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(4,0.03702841);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(5,0.03930915);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(6,0.03729453);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(7,0.03109198);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(8,0.0264388);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(9,0.02357898);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(10,0.02254623);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(11,0.0223045);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(12,0.02221233);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(13,0.02195638);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(14,0.02100028);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(15,0.02010335);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(16,0.01926305);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(17,0.01802781);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(18,0.01729425);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(19,0.01691455);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(20,0.01626996);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(21,0.01584157);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(22,0.01480146);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(23,0.01376869);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(24,0.01302217);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(25,0.01304925);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(26,0.01342977);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(27,0.01406553);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(28,0.01426235);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(29,0.01216851);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(30,0.009725123);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(31,0.007708451);
   VbbHcc_algo_Z_dR_stack_10->SetEntries(94157);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_11 = new TH1D("VbbHcc_algo_Z_dR_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(3,0.06432113);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(4,0.08497757);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(5,0.06544503);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(6,0.06117798);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(7,0.02996101);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(8,0.02635986);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(9,0.01360646);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(10,0.01854007);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(11,0.0146091);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(12,0.02295819);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(13,0.02039498);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(14,0.02166131);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(15,0.01142208);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(16,0.0102445);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(17,0.01139857);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(18,0.008941801);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(19,0.01766825);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(20,0.009627029);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(21,0.010299);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(22,0.004853579);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(23,0.008759679);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(24,0.006630184);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(25,0.008666312);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(26,0.006477294);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(27,0.006732441);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(28,0.008369462);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(29,0.006993048);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(30,0.006796234);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(31,0.001309165);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(3,0.01040058);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(4,0.01168925);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(5,0.009860787);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(6,0.009372251);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(7,0.006405702);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(8,0.006516214);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(9,0.004966589);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(10,0.005234433);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(11,0.005012621);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(12,0.005993778);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(13,0.00562744);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(14,0.005675457);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(15,0.003933534);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(16,0.003703482);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(17,0.004346303);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(18,0.003658164);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(19,0.00539518);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(20,0.003826458);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(21,0.003958617);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(22,0.002546512);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(23,0.003600352);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(24,0.003031263);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(25,0.003320473);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(26,0.003269602);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(27,0.003380617);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(28,0.003470227);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(29,0.003167672);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(30,0.003481501);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(31,0.001309165);
   VbbHcc_algo_Z_dR_stack_11->SetEntries(413);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_12 = new TH1D("VbbHcc_algo_Z_dR_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(3,0.01421446);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(4,0.02711067);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(5,0.03450827);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(6,0.02439432);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(7,0.0202659);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(8,0.01115259);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(9,0.01234754);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(10,0.011985);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(11,0.01234163);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(12,0.01166007);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(13,0.01052971);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(14,0.01049735);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(15,0.01008046);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(16,0.009418535);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(17,0.005087254);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(18,0.007912677);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(19,0.005256611);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(20,0.006265322);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(21,0.004785764);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(22,0.003582535);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(23,0.002821475);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(24,0.003576536);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(25,0.003087235);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(26,0.002836716);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(27,0.004344795);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(28,0.005156611);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(29,0.002192788);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(30,0.001427594);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(31,0.001052918);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(3,0.001729843);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(4,0.002315461);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(5,0.002640836);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(6,0.002146146);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(7,0.002025785);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(8,0.001470314);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(9,0.001616148);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(10,0.001553913);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(11,0.001576522);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(12,0.001557454);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(13,0.001465047);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(14,0.001450089);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(15,0.001397791);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(16,0.001402002);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(17,0.001009243);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(18,0.001281522);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(19,0.001033466);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(20,0.001223493);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(21,0.0009766582);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(22,0.000838824);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(23,0.0007275099);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(24,0.0008581326);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(25,0.0008070193);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(26,0.000744083);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(27,0.0009351772);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(28,0.001046494);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(29,0.0006268882);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(30,0.0005159955);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(31,0.0004732133);
   VbbHcc_algo_Z_dR_stack_12->SetEntries(1460);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR__312 = new TH1D("VbbHcc_algo_Z_dR__312","",30,0,6);
   VbbHcc_algo_Z_dR__312->SetBinContent(2,8);
   VbbHcc_algo_Z_dR__312->SetBinContent(3,13551);
   VbbHcc_algo_Z_dR__312->SetBinContent(4,17062);
   VbbHcc_algo_Z_dR__312->SetBinContent(5,14307);
   VbbHcc_algo_Z_dR__312->SetBinContent(6,13699);
   VbbHcc_algo_Z_dR__312->SetBinContent(7,13406);
   VbbHcc_algo_Z_dR__312->SetBinContent(8,13202);
   VbbHcc_algo_Z_dR__312->SetBinContent(9,12622);
   VbbHcc_algo_Z_dR__312->SetBinContent(10,12553);
   VbbHcc_algo_Z_dR__312->SetBinContent(11,11857);
   VbbHcc_algo_Z_dR__312->SetBinContent(12,11273);
   VbbHcc_algo_Z_dR__312->SetBinContent(13,10711);
   VbbHcc_algo_Z_dR__312->SetBinContent(14,10236);
   VbbHcc_algo_Z_dR__312->SetBinContent(15,9583);
   VbbHcc_algo_Z_dR__312->SetBinContent(16,9131);
   VbbHcc_algo_Z_dR__312->SetBinContent(17,7805);
   VbbHcc_algo_Z_dR__312->SetBinContent(18,6922);
   VbbHcc_algo_Z_dR__312->SetBinContent(19,6182);
   VbbHcc_algo_Z_dR__312->SetBinContent(20,5613);
   VbbHcc_algo_Z_dR__312->SetBinContent(21,5035);
   VbbHcc_algo_Z_dR__312->SetBinContent(22,4609);
   VbbHcc_algo_Z_dR__312->SetBinContent(23,4248);
   VbbHcc_algo_Z_dR__312->SetBinContent(24,3803);
   VbbHcc_algo_Z_dR__312->SetBinContent(25,3435);
   VbbHcc_algo_Z_dR__312->SetBinContent(26,3272);
   VbbHcc_algo_Z_dR__312->SetBinContent(27,3063);
   VbbHcc_algo_Z_dR__312->SetBinContent(28,2770);
   VbbHcc_algo_Z_dR__312->SetBinContent(29,2414);
   VbbHcc_algo_Z_dR__312->SetBinContent(30,1808);
   VbbHcc_algo_Z_dR__312->SetBinContent(31,1430);
   VbbHcc_algo_Z_dR__312->SetEntries(235639);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR__312->SetLineColor(ci);
   VbbHcc_algo_Z_dR__312->SetLineWidth(2);
   VbbHcc_algo_Z_dR__312->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR__312->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR__312->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR__312->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__312->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__312->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__312->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__312->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__312->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__312->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__312->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR__312->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__312->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__312->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__312->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__312->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__312->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_fx1227[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_fy1227[30] = {
   0,
   35.62779,
   86277.08,
   125571.9,
   103256.8,
   88604.95,
   90885.1,
   83107.57,
   79107.01,
   77119.16,
   74650.39,
   66314.18,
   65236.63,
   64892.12,
   57922.3,
   88566.56,
   47713.23,
   61295.69,
   35632.46,
   31448.73,
   32760.98,
   29823.81,
   23122.01,
   22606.59,
   20399.1,
   32773.48,
   20156.58,
   16988.17,
   17151.63,
   9366.022};
   Double_t Graph_from_VbbHcc_algo_Z_dR_fex1227[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_fey1227[30] = {
   0,
   11.25349,
   2843.038,
   18923.06,
   3754.985,
   3167.885,
   3697.362,
   3208.893,
   3139.226,
   3063.836,
   3479.675,
   2837.16,
   2843.301,
   3330.396,
   2897.738,
   20923.31,
   2459.683,
   16771.35,
   2074.045,
   1907.449,
   2024.69,
   1917.22,
   1616.903,
   1591.033,
   1693.901,
   10855.68,
   1473.899,
   1454.666,
   1765.872,
   959.8855};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_fx1227,Graph_from_VbbHcc_algo_Z_dR_fy1227,Graph_from_VbbHcc_algo_Z_dR_fex1227,Graph_from_VbbHcc_algo_Z_dR_fey1227);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR1227 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR1227","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->SetMaximum(158944.5);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR1227);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR","MC unc. (stat.)","fl");

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
   Z_dR_algo_17->cd();
  
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
   
   TH1D *data_mc_ratio__313 = new TH1D("data_mc_ratio__313","",30,0,6);
   data_mc_ratio__313->SetBinContent(2,0.2245438);
   data_mc_ratio__313->SetBinContent(3,0.1570637);
   data_mc_ratio__313->SetBinContent(4,0.1358743);
   data_mc_ratio__313->SetBinContent(5,0.1385574);
   data_mc_ratio__313->SetBinContent(6,0.1546076);
   data_mc_ratio__313->SetBinContent(7,0.1475049);
   data_mc_ratio__313->SetBinContent(8,0.1588544);
   data_mc_ratio__313->SetBinContent(9,0.159556);
   data_mc_ratio__313->SetBinContent(10,0.1627741);
   data_mc_ratio__313->SetBinContent(11,0.1588337);
   data_mc_ratio__313->SetBinContent(12,0.1699938);
   data_mc_ratio__313->SetBinContent(13,0.1641869);
   data_mc_ratio__313->SetBinContent(14,0.1577387);
   data_mc_ratio__313->SetBinContent(15,0.1654458);
   data_mc_ratio__313->SetBinContent(16,0.1030976);
   data_mc_ratio__313->SetBinContent(17,0.1635815);
   data_mc_ratio__313->SetBinContent(18,0.112928);
   data_mc_ratio__313->SetBinContent(19,0.1734935);
   data_mc_ratio__313->SetBinContent(20,0.178481);
   data_mc_ratio__313->SetBinContent(21,0.1536889);
   data_mc_ratio__313->SetBinContent(22,0.154541);
   data_mc_ratio__313->SetBinContent(23,0.183721);
   data_mc_ratio__313->SetBinContent(24,0.1682253);
   data_mc_ratio__313->SetBinContent(25,0.1683898);
   data_mc_ratio__313->SetBinContent(26,0.09983681);
   data_mc_ratio__313->SetBinContent(27,0.1519603);
   data_mc_ratio__313->SetBinContent(28,0.1630546);
   data_mc_ratio__313->SetBinContent(29,0.1407446);
   data_mc_ratio__313->SetBinContent(30,0.1930382);
   data_mc_ratio__313->SetBinContent(31,0.1344532);
   data_mc_ratio__313->SetBinError(2,0.07938823);
   data_mc_ratio__313->SetBinError(3,0.001349243);
   data_mc_ratio__313->SetBinError(4,0.001040213);
   data_mc_ratio__313->SetBinError(5,0.001158392);
   data_mc_ratio__313->SetBinError(6,0.00132095);
   data_mc_ratio__313->SetBinError(7,0.001273963);
   data_mc_ratio__313->SetBinError(8,0.001382545);
   data_mc_ratio__313->SetBinError(9,0.001420199);
   data_mc_ratio__313->SetBinError(10,0.001452819);
   data_mc_ratio__313->SetBinError(11,0.001458664);
   data_mc_ratio__313->SetBinError(12,0.001601081);
   data_mc_ratio__313->SetBinError(13,0.00158644);
   data_mc_ratio__313->SetBinError(14,0.001559097);
   data_mc_ratio__313->SetBinError(15,0.001690071);
   data_mc_ratio__313->SetBinError(16,0.00107892);
   data_mc_ratio__313->SetBinError(17,0.001851602);
   data_mc_ratio__313->SetBinError(18,0.001357331);
   data_mc_ratio__313->SetBinError(19,0.002206575);
   data_mc_ratio__313->SetBinError(20,0.002382289);
   data_mc_ratio__313->SetBinError(21,0.002165922);
   data_mc_ratio__313->SetBinError(22,0.002276356);
   data_mc_ratio__313->SetBinError(23,0.002818816);
   data_mc_ratio__313->SetBinError(24,0.002727897);
   data_mc_ratio__313->SetBinError(25,0.002873111);
   data_mc_ratio__313->SetBinError(26,0.001745356);
   data_mc_ratio__313->SetBinError(27,0.002745722);
   data_mc_ratio__313->SetBinError(28,0.003098084);
   data_mc_ratio__313->SetBinError(29,0.002864594);
   data_mc_ratio__313->SetBinError(30,0.004539876);
   data_mc_ratio__313->SetBinError(31,0.01534338);
   data_mc_ratio__313->SetMinimum(0.4);
   data_mc_ratio__313->SetMaximum(1.6);
   data_mc_ratio__313->SetEntries(1229.069);
   data_mc_ratio__313->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__313->SetLineColor(ci);
   data_mc_ratio__313->SetLineWidth(2);
   data_mc_ratio__313->SetMarkerStyle(20);
   data_mc_ratio__313->SetMarkerSize(1.2);
   data_mc_ratio__313->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__313->GetXaxis()->SetRange(1,30);
   data_mc_ratio__313->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__313->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__313->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__313->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__313->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__313->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__313->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__313->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__313->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__313->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__313->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__313->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__313->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__313->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__313->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__313->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__313->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1228[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1228[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1228[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1228[30] = {
   0,
   0.3158626,
   0.03295242,
   0.150695,
   0.0363655,
   0.03575291,
   0.04068171,
   0.03861132,
   0.03968328,
   0.0397286,
   0.04661295,
   0.0427836,
   0.04358442,
   0.05132204,
   0.05002802,
   0.2362439,
   0.05155138,
   0.2736138,
   0.05820661,
   0.06065267,
   0.06180187,
   0.06428488,
   0.06992918,
   0.07037917,
   0.08303807,
   0.3312337,
   0.07312248,
   0.08562817,
   0.1029565,
   0.1024859};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1228,Graph_from_mc_statistical_error_fy1228,Graph_from_mc_statistical_error_fex1228,Graph_from_mc_statistical_error_fey1228);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1228 = new TH1F("Graph_Graph_from_mc_statistical_error1228","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1228->SetMinimum(0.6025196);
   Graph_Graph_from_mc_statistical_error1228->SetMaximum(1.39748);
   Graph_Graph_from_mc_statistical_error1228->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1228->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1228->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1228->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1228);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_algo_17->cd();
   Z_dR_algo_17->Modified();
   Z_dR_algo_17->cd();
   Z_dR_algo_17->SetSelected(Z_dR_algo_17);
}
