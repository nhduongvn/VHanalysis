void H_dR_Bj0_algo_all_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_all/H_dR_Bj0_algo_all
//=========  (Tue Aug 22 09:17:24 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_algo_all = new TCanvas("H_dR_Bj0_algo_all", "H_dR_Bj0_algo_all",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_algo_all->SetHighLightColor(2);
   H_dR_Bj0_algo_all->Range(0,0,1,1);
   H_dR_Bj0_algo_all->SetFillColor(0);
   H_dR_Bj0_algo_all->SetFillStyle(4000);
   H_dR_Bj0_algo_all->SetBorderMode(0);
   H_dR_Bj0_algo_all->SetBorderSize(2);
   H_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1.451481,6.314516,16.11571);
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
   st->SetMinimum(0.3);
   st->SetMaximum(5.9225e+13);
   
   TH1F *st_stack_140 = new TH1F("st_stack_140","",30,0,6);
   st_stack_140->SetMinimum(0.03682024);
   st_stack_140->SetMaximum(2.285538e+14);
   st_stack_140->SetDirectory(0);
   st_stack_140->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_140->SetLineColor(ci);
   st_stack_140->GetXaxis()->SetRange(1,30);
   st_stack_140->GetXaxis()->SetLabelFont(42);
   st_stack_140->GetXaxis()->SetLabelSize(0.035);
   st_stack_140->GetXaxis()->SetTitleSize(0.035);
   st_stack_140->GetXaxis()->SetTitleFont(42);
   st_stack_140->GetYaxis()->SetTitle("Events/0.2");
   st_stack_140->GetYaxis()->SetLabelFont(42);
   st_stack_140->GetYaxis()->SetLabelSize(0.05);
   st_stack_140->GetYaxis()->SetTitleSize(0.057);
   st_stack_140->GetYaxis()->SetTitleOffset(1.2);
   st_stack_140->GetYaxis()->SetTitleFont(42);
   st_stack_140->GetZaxis()->SetLabelFont(42);
   st_stack_140->GetZaxis()->SetLabelSize(0.035);
   st_stack_140->GetZaxis()->SetTitleSize(0.035);
   st_stack_140->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_140);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(1,495912.9);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(2,1352116);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(3,1194392);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(4,873907.1);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(5,617487.8);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(6,438514.6);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(7,345952.3);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(8,251641.6);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(9,239107.3);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(10,190800.3);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(11,176283.5);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(12,138047.7);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(13,122802.7);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(14,92871.99);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(15,76147.43);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(16,54078.12);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(17,32179.3);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(18,47975.76);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(19,16551.23);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(20,11485.71);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(21,6864.934);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(22,3868.114);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(23,4786.167);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(24,1150.389);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(25,759.5277);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(26,1234.785);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(27,516.9205);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(28,409.7638);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(29,49.96433);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(30,384.4784);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(31,2530.513);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(1,18305.25);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(2,23586.36);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(3,18447.68);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(4,27358.08);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(5,27999.11);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(6,24604.55);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(7,23381.23);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(8,8770.62);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(9,18865.82);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(10,7679.667);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(11,22616.11);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(12,7003.478);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(13,6914.697);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(14,5577.158);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(15,5372.253);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(16,4455.117);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(17,2697.592);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(18,21776.58);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(19,2745.398);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(20,2125.28);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(21,1848.97);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(22,1654.656);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(23,1759.654);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(24,495.5755);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(25,441.5221);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(26,599.3128);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(27,316.1795);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(28,312.6992);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(29,29.66001);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(30,311.6752);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(31,1598.112);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetEntries(333044);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(1,3127.253);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(2,10796.95);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(3,9614.296);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(4,6471.743);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(5,4345.622);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(6,3074.085);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(7,2392.262);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(8,1913.588);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(9,1571.993);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(10,1276.267);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(11,1016.325);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(12,841.0716);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(13,693.1884);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(14,557.4888);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(15,459.631);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(16,363.0528);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(17,269.2731);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(18,194.5544);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(19,132.1523);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(20,81.93907);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(21,49.6298);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(22,31.25456);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(23,18.65221);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(24,12.28192);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(25,8.868585);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(26,5.831194);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(27,5.218938);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(28,2.92779);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(29,1.433675);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(30,1.411313);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(31,2.504447);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(1,22.30285);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(2,39.63887);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(3,37.38062);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(4,30.50435);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(5,24.89308);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(6,20.82795);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(7,18.40321);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(8,16.44141);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(9,14.87856);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(10,13.33498);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(11,11.82162);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(12,10.87397);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(13,9.838071);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(14,8.778404);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(15,7.982);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(16,7.145306);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(17,6.080614);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(18,5.143985);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(19,4.163209);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(20,3.244596);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(21,2.505925);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(22,1.845439);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(23,1.314501);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(24,1.073666);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(25,1.017162);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(26,0.6891647);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(27,0.6295497);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(28,0.4603225);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(29,0.3610571);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(30,0.3542936);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(31,0.4311411);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetEntries(631310);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_3 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(1,54639.77);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(2,201571.5);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(3,172750.8);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(4,106390.8);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(5,66510.03);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(6,45588.15);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(7,34096.06);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(8,26926.93);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(9,21553.06);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(10,17191.67);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(11,13797.1);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(12,11523.66);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(13,9944.338);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(14,8683.837);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(15,7380.993);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(16,6055.471);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(17,4724.445);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(18,3461.39);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(19,2388.598);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(20,1455.623);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(21,758.588);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(22,375.8124);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(23,213.6888);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(24,130.6898);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(25,82.92011);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(26,56.85511);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(27,39.78162);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(28,23.02744);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(29,17.71972);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(30,14.68705);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinContent(31,26.79818);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(1,60.3434);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(2,115.4138);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(3,106.5688);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(4,83.49816);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(5,65.90987);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(6,54.49471);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(7,47.08462);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(8,41.83674);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(9,37.4317);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(10,33.41971);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(11,29.93853);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(12,27.37626);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(13,25.4722);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(14,23.84693);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(15,22.00947);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(16,19.94663);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(17,17.62991);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(18,15.08433);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(19,12.5442);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(20,9.77324);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(21,7.015402);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(22,4.909447);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(23,3.686735);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(24,2.884759);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(25,2.291735);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(26,1.896868);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(27,1.590274);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(28,1.20451);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(29,1.050198);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(30,0.9669884);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetBinError(31,1.296226);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetEntries(1.291274e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_4 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(1,2948.303);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(2,8116.649);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(3,6289.157);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(4,4326.137);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(5,2848.874);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(6,2062.336);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(7,1627.481);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(8,1375.873);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(9,1137.494);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(10,952.7501);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(11,741.6638);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(12,645.7175);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(13,511.4472);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(14,424.7689);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(15,332.3885);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(16,268.4005);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(17,160.2802);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(18,125.7414);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(19,75.41767);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(20,52.33595);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(21,20.68267);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(22,18.57253);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(23,15.63626);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(24,8.498808);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(25,5.45639);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(26,4.564928);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(27,1.792277);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(28,1.694403);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(29,0.3186177);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(30,1.837855);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinContent(31,1.227696);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(1,24.94918);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(2,65.0048);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(3,65.32021);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(4,56.94564);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(5,45.81004);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(6,39.78159);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(7,34.76008);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(8,31.84666);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(9,29.07304);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(10,27.47154);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(11,21.79749);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(12,22.74099);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(13,20.7509);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(14,18.36328);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(15,16.07096);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(16,16.03155);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(17,11.41111);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(18,11.67629);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(19,8.38397);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(20,7.111884);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(21,3.870197);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(22,5.212067);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(23,5.129549);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(24,3.329405);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(25,2.474392);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(26,2.388286);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(27,0.7756747);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(28,0.8296717);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(29,0.3186177);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(30,0.8453508);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetBinError(31,0.5070601);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetEntries(198969);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_5 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(1,1543.019);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(2,3339.662);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(3,2556.516);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(4,1748.859);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(5,1033.038);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(6,851.7729);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(7,618.1549);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(8,559.4182);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(9,432.1714);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(10,321.1281);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(11,290.8815);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(12,231.4232);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(13,196.1399);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(14,138.5081);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(15,123.7834);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(16,81.27637);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(17,55.94986);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(18,42.60539);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(19,26.16174);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(20,28.30539);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(21,10.19974);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(22,5.568311);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(23,5.882264);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(24,0.4555724);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(25,0.182441);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(26,7.233248);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(27,0.6404734);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(28,1.168063);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(29,0.1382101);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinContent(31,0.1221351);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(1,28.04603);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(2,72.38102);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(3,75.86394);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(4,63.74854);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(5,45.07227);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(6,44.64541);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(7,33.86404);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(8,35.82689);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(9,28.35265);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(10,26.5122);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(11,22.16309);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(12,20.24608);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(13,23.48508);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(14,19.66098);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(15,15.59856);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(16,14.11815);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(17,6.745986);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(18,10.9359);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(19,8.32598);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(20,10.58603);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(21,3.284949);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(22,1.992622);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(23,2.80723);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(24,0.3150246);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(25,0.1290053);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(26,7.164433);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(27,0.3679606);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(28,1.036885);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(29,0.1026119);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetBinError(31,0.08931733);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetEntries(95654);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_6 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(1,20.11009);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(2,29.80741);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(3,22.38587);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(4,18.53531);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(5,8.69011);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(6,7.02788);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(7,4.261272);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(8,8.746417);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(9,4.026075);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(10,3.225677);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(11,3.085891);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(12,1.897427);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(13,1.235059);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(14,1.490687);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(15,0.3022236);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(16,1.037352);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(17,0.3022236);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(18,0.722046);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(19,0.3022236);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(20,0.1511118);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinContent(21,0.1511118);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(1,2.492459);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(2,2.789493);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(3,2.387682);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(4,2.281127);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(5,1.461436);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(6,1.372811);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(7,1.28626);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(8,1.805098);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(9,1.067493);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(10,0.8333807);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(11,1.112276);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(12,0.8752746);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(13,0.5386787);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(14,0.7188343);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(15,0.2137044);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(16,0.6694912);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(17,0.2137044);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(18,0.5905934);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(19,0.2137044);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(20,0.1511118);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetBinError(21,0.1511118);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetEntries(653);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_7 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(1,29.0683);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(2,39.23805);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(3,28.8741);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(4,23.00009);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(5,10.7603);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(6,9.189146);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(7,6.414697);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(8,9.949848);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(9,5.048378);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(10,5.189103);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(11,4.945961);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(12,3.947496);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(13,2.313989);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(14,2.232941);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(15,0.8978009);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(16,2.120716);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(17,0.7855758);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(18,0.7953844);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(19,0.7855758);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(20,0.3366753);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(22,0.1122251);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinContent(23,0.2244502);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(1,2.615647);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(2,2.847977);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(3,2.429055);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(4,2.304537);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(5,1.456475);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(6,1.394631);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(7,1.353327);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(8,1.808324);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(9,1.074417);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(10,0.9156844);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(11,1.185231);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(12,0.9832566);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(13,0.622698);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(14,0.7592874);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(15,0.3174206);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(16,0.750948);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(17,0.2969197);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(18,0.5925832);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(19,0.2969197);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(20,0.1943796);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(22,0.1122251);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetBinError(23,0.1587103);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetEntries(1264);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_8 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(1,62.93619);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(2,121.6728);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(3,64.80734);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(4,45.22652);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(5,26.11319);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(6,20.01839);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(7,13.58975);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(8,13.65651);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(9,10.40881);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(10,10.76679);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(11,9.370745);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(12,4.47326);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(13,4.51177);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(14,5.843628);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(15,3.792664);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(16,3.447006);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(17,1.330827);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(18,1.584053);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(19,1.584053);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinContent(21,0.7987025);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(1,4.100099);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(2,5.708585);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(3,4.160296);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(4,3.481436);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(5,2.639455);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(6,2.313151);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(7,1.904252);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(8,1.913789);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(9,1.667973);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(10,1.703542);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(11,1.585221);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(12,1.085635);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(13,1.094807);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(14,1.246756);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(15,1.014248);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(16,0.9564666);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(17,0.5954522);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(18,0.6470599);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(19,0.6470599);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetBinError(21,0.4615028);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetEntries(1595);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_9 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(1,37.43586);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(2,86.26036);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(3,52.91311);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(4,30.21806);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(5,17.27765);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(6,12.02872);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(7,9.753253);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(8,8.098847);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(9,7.008803);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(10,5.653154);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(11,4.604759);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(12,3.791304);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(13,3.188404);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(14,2.723728);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(15,2.046531);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(16,1.820362);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(17,1.212742);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(18,0.9394354);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(19,0.54843);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(20,0.3626119);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(21,0.1837516);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(22,0.08730625);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(23,0.03008174);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(24,0.02330002);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(25,0.005978135);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(26,0.01262966);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(27,0.004604185);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(28,0.004363018);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinContent(31,0.01156197);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(1,0.2778547);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(2,0.4193024);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(3,0.3219918);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(4,0.241629);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(5,0.1825954);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(6,0.1526907);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(7,0.1384662);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(8,0.1260975);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(9,0.1185722);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(10,0.1059388);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(11,0.09592984);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(12,0.0867867);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(13,0.07891841);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(14,0.07302784);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(15,0.06247035);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(16,0.05894383);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(17,0.04833868);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(18,0.04201885);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(19,0.0320666);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(20,0.02621137);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(21,0.01896078);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(22,0.01232243);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(23,0.007438224);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(24,0.007082057);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(25,0.002998781);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(26,0.005458099);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(27,0.00266551);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(28,0.002526674);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetBinError(31,0.004561876);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetEntries(160336);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_10 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(1,11.46254);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(2,39.30802);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(3,30.61331);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(4,19.15564);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(5,11.34566);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(6,7.671995);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(7,6.095713);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(8,5.004816);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(9,4.443134);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(10,3.519443);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(11,2.7451);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(12,2.349001);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(13,2.004848);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(14,1.803552);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(15,1.506477);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(16,1.240246);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(17,0.9025877);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(18,0.5925261);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(19,0.4561639);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(20,0.3214251);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(21,0.1396089);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(22,0.05681757);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(23,0.03409054);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(24,0.02272703);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(25,0.01948031);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(26,0.01298687);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(27,0.008116795);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(28,0.003246718);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(29,0.003246718);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinContent(31,0.008116795);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(1,0.08068426);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(2,0.1494132);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(3,0.1318571);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(4,0.104303);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(5,0.08027184);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(6,0.06600891);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(7,0.05883838);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(8,0.05331415);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(9,0.05023346);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(10,0.04470801);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(11,0.03948458);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(12,0.03652498);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(13,0.03374343);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(14,0.03200462);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(15,0.02925026);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(16,0.02654009);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(17,0.02264087);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(18,0.01834434);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(19,0.01609566);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(20,0.01351102);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(21,0.008904405);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(22,0.005680541);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(23,0.004400128);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(24,0.00359269);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(25,0.003326184);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(26,0.002715818);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(27,0.002147043);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(28,0.001357909);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(29,0.001357909);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetBinError(31,0.002147043);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetEntries(282471);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_11 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(1,0.2772279);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(2,0.65058);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(3,0.4117844);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(4,0.338648);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(5,0.1725683);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(6,0.08966101);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(7,0.1035723);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(8,0.08799278);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(9,0.05753642);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(10,0.06907071);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(11,0.0420919);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(12,0.04613714);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(13,0.01838204);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(14,0.02435834);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(15,0.02794433);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(16,0.01884129);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(17,0.01503231);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(18,0.009292277);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(19,0.0127228);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(21,0.004315259);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(22,0.001580251);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinContent(23,0.002735007);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(1,0.02505519);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(2,0.03853309);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(3,0.03037298);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(4,0.02807045);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(5,0.02005744);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(6,0.01386617);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(7,0.01516749);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(8,0.01438754);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(9,0.01176087);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(10,0.01251239);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(11,0.0100641);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(12,0.01030028);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(13,0.006332919);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(14,0.007785557);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(15,0.007945024);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(16,0.006512068);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(17,0.006162635);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(18,0.004224898);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(19,0.00529263);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(21,0.003158712);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(22,0.001580251);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetBinError(23,0.002735007);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetEntries(1141);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_12 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(1,0.08544201);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(2,0.2833314);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(3,0.2094304);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(4,0.1368971);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(5,0.07286803);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(6,0.05380937);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(7,0.05302394);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(8,0.04138214);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(9,0.0306866);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(10,0.02095696);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(11,0.02183175);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(12,0.02355122);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(13,0.01239245);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(14,0.01099648);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(15,0.009430325);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(16,0.005153064);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(17,0.007353932);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(18,0.003988879);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(19,0.002559143);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(20,0.002351201);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(21,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinContent(25,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(1,0.004991534);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(2,0.009112872);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(3,0.007866568);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(4,0.006403608);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(5,0.004587442);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(6,0.003994785);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(7,0.004020079);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(8,0.003525607);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(9,0.003002691);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(10,0.002477364);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(11,0.002572075);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(12,0.00260007);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(13,0.00189706);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(14,0.001847773);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(15,0.00164613);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(16,0.001214523);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(17,0.001535587);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(18,0.001060537);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(19,0.0008790621);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(20,0.0008994073);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(21,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetBinError(25,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetEntries(3862);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all__384 = new TH1D("VbbHcc_algo_H_dR_Bj0_all__384","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(1,271940);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(2,733174);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(3,576513);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(4,389446);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(5,254196);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(6,182182);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(7,143927);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(8,119581);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(9,100419);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(10,83883);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(11,69577);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(12,56385);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(13,46430);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(14,37498);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(15,29228);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(16,21763);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(17,15765);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(18,10872);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(19,7376);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(20,4779);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(21,2848);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(22,1756);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(23,1106);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(24,711);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(25,504);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(26,339);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(27,239);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(28,140);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(29,123);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(30,70);
   VbbHcc_algo_H_dR_Bj0_all__384->SetBinContent(31,170);
   VbbHcc_algo_H_dR_Bj0_all__384->SetEntries(3162969);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all__384->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all__384->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj0_all__384->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj0_all__384->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj0_all__384->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all__384->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all__384->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all__384->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all__384->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all__384->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all__384->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all__384->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all__384->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_all__384->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all__384->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all__384->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all__384->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_all__384->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all__384->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_all_fx1279[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_all_fy1279[30] = {
   558332.6,
   1576258,
   1385803,
   992981.2,
   692299.8,
   490147,
   384726.5,
   282463,
   263833.1,
   210570.6,
   192154.3,
   151306.1,
   134161.1,
   102690.7,
   84452.81,
   60856.01,
   37393.81,
   51804.69,
   19177.25,
   13105.08,
   7705.312,
   4299.58,
   5040.318,
   1302.362,
   856.9811,
   1309.295,
   564.3665,
   438.5891,
   69.5778,
   402.4146};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_all_fex1279[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_all_fey1279[30] = {
   18305.4,
   23586.88,
   18448.29,
   27358.36,
   27999.27,
   24604.69,
   23381.34,
   8770.867,
   18865.91,
   7679.846,
   22616.16,
   7003.606,
   6914.822,
   5577.281,
   5372.351,
   4455.219,
   2697.689,
   21776.6,
   2745.456,
   2125.343,
   1848.992,
   1654.673,
   1759.668,
   495.5963,
   441.5362,
   599.3638,
   316.1853,
   312.7047,
   29.68268,
   311.678};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj0_all_fx1279,Graph_from_VbbHcc_algo_H_dR_Bj0_all_fy1279,Graph_from_VbbHcc_algo_H_dR_Bj0_all_fex1279,Graph_from_VbbHcc_algo_H_dR_Bj0_all_fey1279);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj0_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->SetMinimum(35.90561);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->SetMaximum(1759825);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_Bj0_all1279);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_Bj0_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj0_algo_all->cd();
  
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
   
   TH1D *data_mc_ratio__385 = new TH1D("data_mc_ratio__385","",30,0,6);
   data_mc_ratio__385->SetBinContent(1,0.4870574);
   data_mc_ratio__385->SetBinContent(2,0.4651358);
   data_mc_ratio__385->SetBinContent(3,0.4160136);
   data_mc_ratio__385->SetBinContent(4,0.3921988);
   data_mc_ratio__385->SetBinContent(5,0.3671762);
   data_mc_ratio__385->SetBinContent(6,0.3716885);
   data_mc_ratio__385->SetBinContent(7,0.3741021);
   data_mc_ratio__385->SetBinContent(8,0.4233511);
   data_mc_ratio__385->SetBinContent(9,0.3806157);
   data_mc_ratio__385->SetBinContent(10,0.3983605);
   data_mc_ratio__385->SetBinContent(11,0.3620892);
   data_mc_ratio__385->SetBinContent(12,0.3726551);
   data_mc_ratio__385->SetBinContent(13,0.3460765);
   data_mc_ratio__385->SetBinContent(14,0.3651547);
   data_mc_ratio__385->SetBinContent(15,0.3460868);
   data_mc_ratio__385->SetBinContent(16,0.3576146);
   data_mc_ratio__385->SetBinContent(17,0.4215939);
   data_mc_ratio__385->SetBinContent(18,0.2098652);
   data_mc_ratio__385->SetBinContent(19,0.3846224);
   data_mc_ratio__385->SetBinContent(20,0.3646677);
   data_mc_ratio__385->SetBinContent(21,0.3696152);
   data_mc_ratio__385->SetBinContent(22,0.408412);
   data_mc_ratio__385->SetBinContent(23,0.2194306);
   data_mc_ratio__385->SetBinContent(24,0.5459314);
   data_mc_ratio__385->SetBinContent(25,0.588111);
   data_mc_ratio__385->SetBinContent(26,0.2589179);
   data_mc_ratio__385->SetBinContent(27,0.4234837);
   data_mc_ratio__385->SetBinContent(28,0.3192054);
   data_mc_ratio__385->SetBinContent(29,1.767805);
   data_mc_ratio__385->SetBinContent(30,0.1739499);
   data_mc_ratio__385->SetBinContent(31,0.06637553);
   data_mc_ratio__385->SetBinError(1,0.0009339929);
   data_mc_ratio__385->SetBinError(2,0.0005432206);
   data_mc_ratio__385->SetBinError(3,0.0005479021);
   data_mc_ratio__385->SetBinError(4,0.0006284672);
   data_mc_ratio__385->SetBinError(5,0.0007282662);
   data_mc_ratio__385->SetBinError(6,0.0008708159);
   data_mc_ratio__385->SetBinError(7,0.0009860957);
   data_mc_ratio__385->SetBinError(8,0.001224249);
   data_mc_ratio__385->SetBinError(9,0.001201099);
   data_mc_ratio__385->SetBinError(10,0.001375432);
   data_mc_ratio__385->SetBinError(11,0.001372722);
   data_mc_ratio__385->SetBinError(12,0.00156937);
   data_mc_ratio__385->SetBinError(13,0.001606101);
   data_mc_ratio__385->SetBinError(14,0.001885701);
   data_mc_ratio__385->SetBinError(15,0.002024349);
   data_mc_ratio__385->SetBinError(16,0.00242413);
   data_mc_ratio__385->SetBinError(17,0.003357742);
   data_mc_ratio__385->SetBinError(18,0.00201273);
   data_mc_ratio__385->SetBinError(19,0.004478413);
   data_mc_ratio__385->SetBinError(20,0.005275076);
   data_mc_ratio__385->SetBinError(21,0.006925957);
   data_mc_ratio__385->SetBinError(22,0.00974622);
   data_mc_ratio__385->SetBinError(23,0.006598111);
   data_mc_ratio__385->SetBinError(24,0.02047403);
   data_mc_ratio__385->SetBinError(25,0.02619655);
   data_mc_ratio__385->SetBinError(26,0.01406249);
   data_mc_ratio__385->SetBinError(27,0.02739288);
   data_mc_ratio__385->SetBinError(28,0.02697778);
   data_mc_ratio__385->SetBinError(29,0.1593976);
   data_mc_ratio__385->SetBinError(30,0.02079099);
   data_mc_ratio__385->SetBinError(31,0.04172831);
   data_mc_ratio__385->SetMinimum(0.4);
   data_mc_ratio__385->SetMaximum(1.6);
   data_mc_ratio__385->SetEntries(172.3076);
   data_mc_ratio__385->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__385->SetLineColor(ci);
   data_mc_ratio__385->SetLineWidth(2);
   data_mc_ratio__385->SetMarkerStyle(20);
   data_mc_ratio__385->SetMarkerSize(1.2);
   data_mc_ratio__385->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__385->GetXaxis()->SetRange(1,30);
   data_mc_ratio__385->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__385->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__385->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__385->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__385->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__385->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__385->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__385->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__385->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__385->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__385->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__385->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__385->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__385->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__385->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__385->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__385->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1280[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1280[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1280[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1280[30] = {
   0.03278584,
   0.01496384,
   0.01331235,
   0.02755174,
   0.04044385,
   0.0501986,
   0.06077392,
   0.03105139,
   0.07150698,
   0.0364716,
   0.1176979,
   0.04628766,
   0.05154119,
   0.05431144,
   0.06361365,
   0.07320918,
   0.07214266,
   0.4203595,
   0.1431621,
   0.162177,
   0.2399633,
   0.3848453,
   0.3491185,
   0.3805366,
   0.5152228,
   0.4577759,
   0.5602481,
   0.7129786,
   0.4266113,
   0.7745197};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1280,Graph_from_mc_statistical_error_fy1280,Graph_from_mc_statistical_error_fex1280,Graph_from_mc_statistical_error_fey1280);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1280 = new TH1F("Graph_Graph_from_mc_statistical_error1280","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1280->SetMinimum(0.07057639);
   Graph_Graph_from_mc_statistical_error1280->SetMaximum(1.929424);
   Graph_Graph_from_mc_statistical_error1280->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1280->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1280->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1280->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1280->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1280->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1280->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1280->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1280->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1280->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1280->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1280->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1280->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1280->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1280->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1280->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1280);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_algo_all->cd();
   H_dR_Bj0_algo_all->Modified();
   H_dR_Bj0_algo_all->cd();
   H_dR_Bj0_algo_all->SetSelected(H_dR_Bj0_algo_all);
}
