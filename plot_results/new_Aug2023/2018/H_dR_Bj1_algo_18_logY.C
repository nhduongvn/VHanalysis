void H_dR_Bj1_algo_18_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_18/H_dR_Bj1_algo_18
//=========  (Tue Aug 22 09:17:25 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_algo_18 = new TCanvas("H_dR_Bj1_algo_18", "H_dR_Bj1_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_algo_18->SetHighLightColor(2);
   H_dR_Bj1_algo_18->Range(0,0,1,1);
   H_dR_Bj1_algo_18->SetFillColor(0);
   H_dR_Bj1_algo_18->SetFillStyle(4000);
   H_dR_Bj1_algo_18->SetBorderMode(0);
   H_dR_Bj1_algo_18->SetBorderSize(2);
   H_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.907626,6.314516,13.79798);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(3.612974e+11);
   
   TH1F *st_stack_143 = new TH1F("st_stack_143","",30,0,6);
   st_stack_143->SetMinimum(0.001285523);
   st_stack_143->SetMaximum(1.340982e+12);
   st_stack_143->SetDirectory(0);
   st_stack_143->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_143->SetLineColor(ci);
   st_stack_143->GetXaxis()->SetRange(1,30);
   st_stack_143->GetXaxis()->SetLabelFont(42);
   st_stack_143->GetXaxis()->SetLabelSize(0.035);
   st_stack_143->GetXaxis()->SetTitleSize(0.035);
   st_stack_143->GetXaxis()->SetTitleFont(42);
   st_stack_143->GetYaxis()->SetTitle("Events/0.2");
   st_stack_143->GetYaxis()->SetLabelFont(42);
   st_stack_143->GetYaxis()->SetLabelSize(0.05);
   st_stack_143->GetYaxis()->SetTitleSize(0.057);
   st_stack_143->GetYaxis()->SetTitleOffset(1.2);
   st_stack_143->GetYaxis()->SetTitleFont(42);
   st_stack_143->GetZaxis()->SetLabelFont(42);
   st_stack_143->GetZaxis()->SetLabelSize(0.035);
   st_stack_143->GetZaxis()->SetTitleSize(0.035);
   st_stack_143->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_143);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,42543.02);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,96045.75);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,105471.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,118760);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,125876.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,125105.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,123713.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,113901.3);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,111496.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,101264);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,97336.14);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,88536.37);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,109089.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,80283.89);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,70482.46);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,61216.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,61918.29);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,42022.68);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,38154.46);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,30383.62);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,23176.09);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(23,19195.76);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(24,13543.77);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(25,9744.494);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(26,5994.372);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(27,4438.097);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(28,3955.029);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(29,2350.848);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(30,897.0238);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(31,950.3606);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,3287.153);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,4551.611);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,4864.395);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,4767.099);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,5880.34);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,4915.274);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,4793.891);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,5047.736);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,5301.48);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,4495.123);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,4633.226);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,3755.41);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,21447.01);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,3678.666);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,4020.785);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,3481.419);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,3734.6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,2503.41);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,2491.491);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,2209.745);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,1991.928);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(23,1869.287);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(24,1446.943);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(25,1167.638);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(26,711.432);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(27,591.7881);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(28,770.1952);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(29,659.5381);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(30,382.2548);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(31,385.1875);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(105593);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(1,0.7652568);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,294.9212);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,765.6217);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,909.291);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,1029.774);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,1035.973);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,995.0977);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,935.7156);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,865.694);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,805.1113);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,706.7279);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,655.4268);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,618.1074);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,564.3875);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,514.8981);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,485.1347);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,402.1778);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,362.6346);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,294.9601);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,251.3879);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,203.5385);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(22,159.7322);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,128.6875);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(24,96.76332);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(25,75.91189);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(26,50.14452);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(27,31.09863);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(28,20.9311);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(29,10.95771);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(30,8.663675);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(31,10.32003);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(1,0.3972376);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,7.214959);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,11.30809);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,12.28027);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,12.9165);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,12.80356);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,12.52285);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,12.03412);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,11.59766);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,11.11214);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,10.35091);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,9.833835);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,9.654891);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,9.18665);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,8.700553);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,8.558875);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,7.698379);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,7.414998);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,6.599084);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,6.204313);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,5.467987);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(22,4.890209);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,4.389625);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(24,3.757774);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(25,3.407812);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(26,2.675755);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(27,2.00667);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(28,1.70415);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(29,1.175364);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(30,1.191363);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(31,1.135649);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(152694);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_3 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(1,22.81881);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(2,9221.542);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(3,26867.93);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(4,27574.8);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(5,23542.31);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(6,19014.96);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(7,15670.28);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(8,13354.75);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(9,11524.8);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(10,10095.03);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(11,8943.931);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(12,7983.137);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(13,7193.045);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(14,6604.817);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(15,6186.521);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(16,5762.918);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(17,5252.94);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(18,4723.887);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(19,4175.306);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(20,3655.425);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(21,3151.755);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(22,2697.285);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(23,2223.828);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(24,1750.093);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(25,1314.442);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(26,901.9561);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(27,555.0814);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(28,299.2502);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(29,146.331);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(30,72.22513);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(31,90.56289);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(1,1.104043);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(2,25.14803);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(3,43.19631);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(4,43.69651);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(5,40.16381);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(6,35.88018);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(7,32.39236);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(8,29.82282);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(9,27.67049);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(10,25.8758);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(11,24.33842);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(12,22.99828);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(13,21.82619);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(14,20.93196);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(15,20.26821);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(16,19.56769);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(17,18.71437);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(18,17.75663);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(19,16.70913);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(20,15.65413);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(21,14.56255);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(22,13.506);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(23,12.28043);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(24,10.90138);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(25,9.437414);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(26,7.812021);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(27,6.111023);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(28,4.45253);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(29,3.084092);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(30,2.152711);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(31,2.397105);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetEntries(3537992);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_4 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(1,0.1859733);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(2,302.8636);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(3,819.1079);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(4,795.8396);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(5,867.5662);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(6,840.4587);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(7,818.3774);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(8,757.094);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(9,721.1614);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(10,646.7487);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(11,586.4061);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(12,545.7852);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(13,529.4052);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(14,484.8045);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(15,409.0193);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(16,395.2608);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(17,351.942);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(18,293.2101);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(19,250.6001);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(20,195.6132);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(21,180.6228);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(22,124.6137);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(23,96.44563);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(24,72.93322);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(25,62.27504);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(26,52.21167);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(27,26.29558);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(28,17.64618);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(29,9.451289);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(30,5.430888);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(31,9.495887);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(1,0.131503);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(2,12.14636);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(3,20.49016);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(4,25.77577);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(5,25.22797);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(6,24.10692);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(7,23.26655);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(8,22.37892);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(9,22.01169);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(10,17.90864);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(11,16.42352);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(12,16.38968);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(13,17.51087);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(14,14.15438);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(15,12.06352);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(16,13.69592);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(17,12.20025);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(18,12.04486);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(19,12.18832);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(20,11.53551);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(21,10.79389);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(22,9.092112);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(23,7.637775);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(24,6.092886);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(25,4.454262);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(26,5.647946);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(27,2.639137);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(28,2.147761);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(29,1.658128);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(30,1.253027);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(31,4.271373);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetEntries(53670);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_5 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(1,0.1281828);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(2,92.12983);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(3,227.1766);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(4,175.5578);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(5,199.9475);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(6,299.4028);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(7,261.679);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(8,215.0362);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(9,226.8018);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(10,216.2923);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(11,192.0922);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(12,176.5309);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(13,170.3713);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(14,171.493);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(15,150.3096);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(16,140.0262);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(17,108.819);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(18,122.449);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(19,105.3956);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(20,66.23642);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(21,53.90759);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(22,44.42268);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(23,26.06386);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(24,18.10517);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(25,12.68605);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(26,14.16575);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(27,9.526972);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(28,2.805114);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(29,1.987269);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(30,3.146113);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(31,4.420933);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(1,0.1281828);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(2,9.832635);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(3,23.87455);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(4,17.39689);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(5,13.61006);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(6,29.73286);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(7,26.75344);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(8,20.52511);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(9,21.40725);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(10,20.9187);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(11,17.13561);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(12,19.10333);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(13,16.20419);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(14,19.47106);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(15,16.14938);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(16,12.04768);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(17,9.748498);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(18,21.07325);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(19,17.54938);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(20,12.65316);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(21,12.26034);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(22,12.31182);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(23,4.717662);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(24,3.554219);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(25,2.645197);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(26,3.947221);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(27,2.565452);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(28,0.7339928);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(29,0.6279645);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(30,2.175165);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(31,2.26722);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetEntries(13622);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(2,1.141868);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(3,2.854671);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(4,1.712803);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(5,2.283737);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(6,3.425605);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(7,2.283737);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(8,2.854671);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(9,2.283737);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(10,2.283737);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(11,1.141868);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(12,1.712803);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(13,3.425605);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(15,0.5709342);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(16,1.712803);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(18,0.5709342);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(19,0.5709342);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(20,1.141868);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(21,0.5709342);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(22,0.5709342);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(24,0.5709342);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(28,0.5709342);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(2,0.8074229);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(3,1.276648);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(4,0.988887);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(5,1.141868);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(6,1.398497);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(7,1.141868);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(8,1.276648);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(9,1.141868);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(10,1.141868);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(11,0.8074229);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(12,0.988887);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(13,1.398497);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(15,0.5709342);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(16,0.988887);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(18,0.5709342);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(19,0.5709342);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(20,0.8074229);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(21,0.5709342);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(22,0.5709342);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(24,0.5709342);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(28,0.5709342);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetEntries(60);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(2,9.209177);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(3,17.35576);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(4,6.375584);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(5,3.541991);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(6,6.021385);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(7,3.89619);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(8,3.187792);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(9,2.479394);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(10,1.416796);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(11,2.833593);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(12,2.833593);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(13,4.250389);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(14,1.770996);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(15,4.958788);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(16,3.541991);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(17,1.770996);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(18,2.833593);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(19,1.770996);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(20,0.7083982);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(21,1.062597);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(22,1.062597);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(23,0.3541991);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(24,1.062597);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(25,0.7083982);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(26,1.062597);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(27,0.7083982);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(28,0.3541991);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(30,0.3541991);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(2,1.806068);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(3,2.479394);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(4,1.50274);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(5,1.120076);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(6,1.4604);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(7,1.174746);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(8,1.062597);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(9,0.9371228);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(10,0.7083982);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(11,1.001826);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(12,1.001826);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(13,1.226982);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(14,0.7920133);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(15,1.325292);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(16,1.120076);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(17,0.7920133);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(18,1.001826);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(19,0.7920133);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(20,0.5009132);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(21,0.6134909);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(22,0.6134909);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(23,0.3541991);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(24,0.6134909);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(25,0.5009132);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(26,0.6134909);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(27,0.5009132);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(28,0.3541991);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(30,0.3541991);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetEntries(247);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(2,10.89716);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(3,27.94144);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(4,15.92662);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(5,10.61775);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(6,9.500088);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(7,6.147116);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(8,4.750044);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(9,7.544187);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(10,6.147116);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(11,4.191215);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(12,6.42653);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(13,5.029458);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(14,6.147116);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(15,5.867701);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(16,3.911801);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(17,3.352972);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(18,2.794144);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(19,1.9559);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(20,2.514729);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(21,1.676486);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(22,3.073558);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(23,1.117657);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(24,1.676486);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(25,0.8382431);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(26,0.5588287);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(27,0.5588287);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(28,0.2794144);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(29,0.2794144);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(2,1.744942);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(3,2.794144);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(4,2.109532);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(5,1.722426);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(6,1.629252);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(7,1.310569);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(8,1.152055);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(9,1.45188);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(10,1.310569);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(11,1.082167);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(12,1.340024);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(13,1.185455);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(14,1.310569);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(15,1.280437);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(16,1.045473);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(17,0.9679197);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(18,0.8835858);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(19,0.7392609);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(20,0.8382431);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(21,0.6844226);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(22,0.9267126);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(23,0.5588287);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(24,0.6844226);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(25,0.4839599);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(26,0.3951516);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(27,0.3951516);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(28,0.2794144);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(29,0.2794144);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetEntries(543);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_9 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(2,7.237312);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(3,20.11814);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(4,16.63277);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(5,11.29837);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(6,7.208953);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(7,5.226632);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(8,4.302117);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(9,4.029867);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(10,3.709406);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(11,3.422976);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(12,3.198937);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(13,2.821758);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(14,2.719664);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(15,2.521148);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(16,2.175164);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(17,1.849031);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(18,1.616484);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(19,1.417969);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(20,1.106016);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(21,1.037953);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(22,1.043625);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(23,0.995414);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(24,0.947203);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(25,0.8309296);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(26,0.6097265);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(27,0.4140468);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(28,0.2013515);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(29,0.05388281);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(30,0.03119531);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(31,0.0226875);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(2,0.143264);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(3,0.2388593);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(4,0.2171854);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(5,0.1790013);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(6,0.142983);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(7,0.1217473);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(8,0.110456);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(9,0.1069039);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(10,0.1025653);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(11,0.09852586);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(12,0.09524697);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(13,0.08945573);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(14,0.08782253);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(15,0.0845566);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(16,0.07854062);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(17,0.07241365);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(18,0.06770707);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(19,0.06341349);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(20,0.05600527);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(21,0.05425467);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(22,0.05440271);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(23,0.05313127);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(24,0.05182864);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(25,0.04854343);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(26,0.041583);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(27,0.03426676);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(28,0.02389603);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(29,0.01236156);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(30,0.00940574);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(31,0.008021242);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetEntries(38365);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_10 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(1,0.001414005);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(2,2.253217);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(3,7.936105);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(4,9.051755);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(5,7.662495);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(6,5.399379);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(7,4.249086);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(8,3.536427);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(9,3.119296);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(10,2.84003);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(11,2.544503);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(12,2.230593);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(13,1.970416);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(14,1.842449);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(15,1.763265);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(16,1.626813);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(17,1.516521);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(18,1.286038);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(19,1.117064);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(20,1.032224);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(21,0.8547662);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(22,0.7621489);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(23,0.5960032);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(24,0.4828828);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(25,0.3464313);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(26,0.2340179);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(27,0.1661456);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(28,0.07352828);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(29,0.04595517);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(30,0.01414005);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(31,0.01414005);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(1,0.0009998527);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(2,0.03991279);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(3,0.07490559);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(4,0.07999759);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(5,0.07360302);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(6,0.06178491);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(7,0.05480981);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(8,0.05000263);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(9,0.04696116);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(10,0.04480969);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(11,0.04241427);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(12,0.03971191);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(13,0.03732412);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(14,0.03609178);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(15,0.03530769);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(16,0.03391403);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(17,0.03274422);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(18,0.03015348);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(19,0.0281028);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(20,0.02701453);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(21,0.02458296);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(22,0.02321295);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(23,0.02052744);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(24,0.018477);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(25,0.01565017);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(26,0.01286279);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(27,0.01083815);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(28,0.007210041);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(29,0.005700038);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(30,0.003161812);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(31,0.003161812);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetEntries(94157);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(2,0.07282438);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(3,0.1092366);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(4,0.143373);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(5,0.06827286);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(6,0.05689405);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(7,0.05916981);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(8,0.02048186);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(9,0.0295849);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(10,0.02275762);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(11,0.04323948);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(12,0.0295849);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(13,0.01593033);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(14,0.02048186);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(15,0.02048186);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(16,0.01137881);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(17,0.01593033);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(18,0.006827286);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(19,0.002275762);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(20,0.0182061);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(21,0.006827286);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(22,0.01365457);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(24,0.006827286);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(26,0.004551524);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(28,0.002275762);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(2,0.01287365);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(3,0.01576694);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(4,0.0180633);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(5,0.01246486);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(6,0.01137881);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(7,0.01160415);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(8,0.006827286);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(9,0.008205376);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(10,0.007196591);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(11,0.009919816);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(12,0.008205376);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(13,0.0060211);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(14,0.006827286);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(15,0.006827286);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(16,0.005088758);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(17,0.0060211);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(18,0.003941735);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(19,0.002275762);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(20,0.006436827);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(21,0.003941735);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(22,0.005574455);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(24,0.003941735);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(26,0.003218413);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(28,0.002275762);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetEntries(352);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(2,0.01917804);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(3,0.04704612);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(4,0.04434921);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(5,0.03985435);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(6,0.02816774);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(7,0.02187495);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(8,0.02277392);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(9,0.01917804);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(10,0.01947769);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(11,0.01348456);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(12,0.01468318);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(13,0.01168662);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(14,0.01288524);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(15,0.01048799);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(16,0.008090734);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(17,0.009289361);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(18,0.005993136);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(19,0.005393822);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(20,0.005993136);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(21,0.005094166);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(22,0.003895538);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(23,0.003895538);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(24,0.001797941);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(25,0.001198627);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(26,0.003895538);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(27,0.0005993136);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(31,0.0002996568);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(2,0.002397254);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(3,0.003754689);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(4,0.003645482);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(5,0.003455811);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(6,0.00290528);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(7,0.002560269);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(8,0.002612347);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(9,0.002397254);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(10,0.00241591);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(11,0.002010159);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(12,0.002097598);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(13,0.001871356);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(14,0.001964981);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(15,0.001772794);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(16,0.001557062);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(17,0.001668418);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(18,0.001340106);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(19,0.001271336);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(20,0.001340106);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(21,0.001235517);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(22,0.001080428);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(23,0.001080428);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(24,0.0007340063);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(25,0.0005993136);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(26,0.001080428);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(27,0.0004237787);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(31,0.0002996568);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetEntries(1270);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_Bj1__392 = new TH1D("VbbHcc_algo_H_dR_Bj1__392","",30,0,6);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(1,91);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(2,55757);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(3,122076);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(4,131571);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(5,156745);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(6,158869);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(7,151463);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(8,142139);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(9,132279);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(10,122882);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(11,113877);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(12,105785);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(13,97820);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(14,91199);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(15,85109);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(16,78828);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(17,67592);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(18,58877);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(19,49302);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(20,41354);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(21,33423);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(22,26500);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(23,21139);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(24,16528);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(25,12669);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(26,9081);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(27,6209);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(28,3799);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(29,2207);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(30,1315);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(31,1478);
   VbbHcc_algo_H_dR_Bj1__392->SetEntries(2097992);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1__392->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1__392->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj1__392->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj1__392->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj1__392->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1__392->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__392->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__392->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__392->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__392->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__392->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__392->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__392->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1__392->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__392->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__392->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__392->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__392->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__392->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fx1285[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fy1285[30] = {
   23.89964,
   52485.31,
   124802,
   134977.2,
   144435.2,
   147098.6,
   142872.6,
   138995.1,
   127259.2,
   123276.5,
   111707.4,
   106713.5,
   97064.82,
   116927.4,
   87560.35,
   77278.79,
   67340.49,
   67429.59,
   46855.78,
   42329.64,
   33978.66,
   26208.67,
   21673.85,
   15486.42,
   11212.53,
   7015.324,
   5061.948,
   4297.144,
   2519.954,
   986.8891};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fex1285[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fey1285[30] = {
   1.187616,
   3287.295,
   4551.941,
   4864.707,
   4767.373,
   5880.588,
   4915.525,
   4794.096,
   5047.918,
   5301.627,
   4495.263,
   4633.363,
   3755.563,
   21447.04,
   3678.788,
   4020.884,
   3481.513,
   3734.729,
   2503.566,
   2491.607,
   2209.86,
   1992.039,
   1869.354,
   1447.006,
   1167.693,
   711.5136,
   591.8348,
   770.2136,
   659.5488,
   382.2711};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj1_fx1285,Graph_from_VbbHcc_algo_H_dR_Bj1_fy1285,Graph_from_VbbHcc_algo_H_dR_Bj1_fex1285,Graph_from_VbbHcc_algo_H_dR_Bj1_fey1285);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->SetMinimum(20.44082);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->SetMaximum(168274.8);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_Bj1","MC unc. (stat.)","fl");

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
   H_dR_Bj1_algo_18->cd();
  
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
   
   TH1D *data_mc_ratio__393 = new TH1D("data_mc_ratio__393","",30,0,6);
   data_mc_ratio__393->SetBinContent(1,3.807589);
   data_mc_ratio__393->SetBinContent(2,1.062335);
   data_mc_ratio__393->SetBinContent(3,0.9781578);
   data_mc_ratio__393->SetBinContent(4,0.9747644);
   data_mc_ratio__393->SetBinContent(5,1.085227);
   data_mc_ratio__393->SetBinContent(6,1.080017);
   data_mc_ratio__393->SetBinContent(7,1.060127);
   data_mc_ratio__393->SetBinContent(8,1.022619);
   data_mc_ratio__393->SetBinContent(9,1.039445);
   data_mc_ratio__393->SetBinContent(10,0.9967999);
   data_mc_ratio__393->SetBinContent(11,1.019423);
   data_mc_ratio__393->SetBinContent(12,0.9912995);
   data_mc_ratio__393->SetBinContent(13,1.00778);
   data_mc_ratio__393->SetBinContent(14,0.7799628);
   data_mc_ratio__393->SetBinContent(15,0.9720039);
   data_mc_ratio__393->SetBinContent(16,1.020047);
   data_mc_ratio__393->SetBinContent(17,1.003735);
   data_mc_ratio__393->SetBinContent(18,0.8731627);
   data_mc_ratio__393->SetBinContent(19,1.052207);
   data_mc_ratio__393->SetBinContent(20,0.9769513);
   data_mc_ratio__393->SetBinContent(21,0.9836467);
   data_mc_ratio__393->SetBinContent(22,1.011116);
   data_mc_ratio__393->SetBinContent(23,0.9753226);
   data_mc_ratio__393->SetBinContent(24,1.067258);
   data_mc_ratio__393->SetBinContent(25,1.129896);
   data_mc_ratio__393->SetBinContent(26,1.294452);
   data_mc_ratio__393->SetBinContent(27,1.226603);
   data_mc_ratio__393->SetBinContent(28,0.8840756);
   data_mc_ratio__393->SetBinContent(29,0.8758096);
   data_mc_ratio__393->SetBinContent(30,1.33247);
   data_mc_ratio__393->SetBinContent(31,1.387536);
   data_mc_ratio__393->SetBinError(1,0.3991438);
   data_mc_ratio__393->SetBinError(2,0.004498958);
   data_mc_ratio__393->SetBinError(3,0.002799586);
   data_mc_ratio__393->SetBinError(4,0.002687321);
   data_mc_ratio__393->SetBinError(5,0.002741094);
   data_mc_ratio__393->SetBinError(6,0.002709636);
   data_mc_ratio__393->SetBinError(7,0.002723983);
   data_mc_ratio__393->SetBinError(8,0.002712421);
   data_mc_ratio__393->SetBinError(9,0.00285796);
   data_mc_ratio__393->SetBinError(10,0.00284357);
   data_mc_ratio__393->SetBinError(11,0.003020899);
   data_mc_ratio__393->SetBinError(12,0.003047845);
   data_mc_ratio__393->SetBinError(13,0.003222196);
   data_mc_ratio__393->SetBinError(14,0.002582729);
   data_mc_ratio__393->SetBinError(15,0.00333181);
   data_mc_ratio__393->SetBinError(16,0.003633122);
   data_mc_ratio__393->SetBinError(17,0.003860747);
   data_mc_ratio__393->SetBinError(18,0.003598507);
   data_mc_ratio__393->SetBinError(19,0.004738808);
   data_mc_ratio__393->SetBinError(20,0.004804123);
   data_mc_ratio__393->SetBinError(21,0.005380423);
   data_mc_ratio__393->SetBinError(22,0.006211235);
   data_mc_ratio__393->SetBinError(23,0.006708201);
   data_mc_ratio__393->SetBinError(24,0.00830155);
   data_mc_ratio__393->SetBinError(25,0.01003847);
   data_mc_ratio__393->SetBinError(26,0.01358373);
   data_mc_ratio__393->SetBinError(27,0.01556658);
   data_mc_ratio__393->SetBinError(28,0.01434349);
   data_mc_ratio__393->SetBinError(29,0.01864269);
   data_mc_ratio__393->SetBinError(30,0.03674469);
   data_mc_ratio__393->SetBinError(31,0.5030965);
   data_mc_ratio__393->SetMinimum(0.4);
   data_mc_ratio__393->SetMaximum(1.6);
   data_mc_ratio__393->SetEntries(1662.702);
   data_mc_ratio__393->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__393->SetLineColor(ci);
   data_mc_ratio__393->SetLineWidth(2);
   data_mc_ratio__393->SetMarkerStyle(20);
   data_mc_ratio__393->SetMarkerSize(1.2);
   data_mc_ratio__393->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__393->GetXaxis()->SetRange(1,30);
   data_mc_ratio__393->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__393->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__393->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__393->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__393->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__393->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__393->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__393->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__393->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__393->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__393->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__393->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__393->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__393->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__393->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__393->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__393->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1286[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1286[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1286[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1286[30] = {
   0.04969182,
   0.06263267,
   0.03647331,
   0.03604095,
   0.03300701,
   0.03997719,
   0.03440496,
   0.03449112,
   0.03966642,
   0.04300598,
   0.04024143,
   0.04341873,
   0.03869128,
   0.1834219,
   0.04201431,
   0.05203088,
   0.05170014,
   0.05538709,
   0.05343132,
   0.05886198,
   0.06503671,
   0.07600686,
   0.08624928,
   0.09343714,
   0.1041418,
   0.1014228,
   0.1169184,
   0.1792385,
   0.2617305,
   0.3873496};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1286,Graph_from_mc_statistical_error_fy1286,Graph_from_mc_statistical_error_fex1286,Graph_from_mc_statistical_error_fey1286);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1286 = new TH1F("Graph_Graph_from_mc_statistical_error1286","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1286->SetMinimum(0.5351804);
   Graph_Graph_from_mc_statistical_error1286->SetMaximum(1.46482);
   Graph_Graph_from_mc_statistical_error1286->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1286->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1286->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1286->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1286->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1286->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1286->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1286->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1286->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1286->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1286->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1286->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1286->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1286->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1286->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1286->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1286);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_algo_18->cd();
   H_dR_Bj1_algo_18->Modified();
   H_dR_Bj1_algo_18->cd();
   H_dR_Bj1_algo_18->SetSelected(H_dR_Bj1_algo_18);
}
