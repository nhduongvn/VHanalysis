void H_dR_Bj0_both_16()
{
//=========Macro generated from canvas: H_dR_Bj0_both_16/H_dR_Bj0_both_16
//=========  (Mon Jul 24 10:12:17 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_both_16 = new TCanvas("H_dR_Bj0_both_16", "H_dR_Bj0_both_16",0,0,600,600);
   H_dR_Bj0_both_16->SetHighLightColor(2);
   H_dR_Bj0_both_16->Range(0,0,1,1);
   H_dR_Bj0_both_16->SetFillColor(0);
   H_dR_Bj0_both_16->SetFillStyle(4000);
   H_dR_Bj0_both_16->SetBorderMode(0);
   H_dR_Bj0_both_16->SetBorderSize(2);
   H_dR_Bj0_both_16->SetFrameFillStyle(1000);
   H_dR_Bj0_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1045.604,6.314516,1044569);
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
   st->SetMaximum(895245);
   
   TH1F *st_stack_233 = new TH1F("st_stack_233","",30,0,6);
   st_stack_233->SetMinimum(0.01);
   st_stack_233->SetMaximum(940007.3);
   st_stack_233->SetDirectory(0);
   st_stack_233->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_233->SetLineColor(ci);
   st_stack_233->GetXaxis()->SetRange(1,30);
   st_stack_233->GetXaxis()->SetLabelFont(42);
   st_stack_233->GetXaxis()->SetLabelSize(0.035);
   st_stack_233->GetXaxis()->SetTitleSize(0.035);
   st_stack_233->GetXaxis()->SetTitleFont(42);
   st_stack_233->GetYaxis()->SetTitle("Events/0.2");
   st_stack_233->GetYaxis()->SetLabelFont(42);
   st_stack_233->GetYaxis()->SetLabelSize(0.05);
   st_stack_233->GetYaxis()->SetTitleSize(0.057);
   st_stack_233->GetYaxis()->SetTitleOffset(1.2);
   st_stack_233->GetYaxis()->SetTitleFont(42);
   st_stack_233->GetZaxis()->SetLabelFont(42);
   st_stack_233->GetZaxis()->SetLabelSize(0.035);
   st_stack_233->GetZaxis()->SetTitleSize(0.035);
   st_stack_233->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_233);
   
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(1,98767.46);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(2,346234.5);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(3,323136.1);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(4,268421.3);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(5,249734.7);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(6,191397);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(7,188473);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(8,143551.1);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(9,123813.9);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(10,120734.2);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(11,94663.34);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(12,90074.43);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(13,80685.69);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(14,81625.68);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(15,69493.76);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(16,64163.16);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(17,50086.3);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(18,39276.79);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(19,30739.73);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(20,38484.35);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(21,16999.4);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(22,14468.86);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(23,10540.92);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(24,5398.114);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(25,5731.894);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(26,2479.923);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(27,2174.48);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(28,1740.605);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(29,437.2156);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(30,351.4598);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(31,699.8129);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(1,3031.707);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(2,8873.89);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(3,8611.966);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(4,8811.509);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(5,22190.46);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(6,7211.203);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(7,21706.32);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(8,6478.185);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(9,5906.183);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(10,6819.712);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(11,5219.43);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(12,4399.684);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(13,5376.569);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(14,4774.304);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(15,3635.246);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(16,3754.73);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(17,3783.068);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(18,3337.303);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(19,2545.564);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(20,20522.1);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(21,2022.845);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(22,2402.202);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(23,2272.495);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(24,875.3688);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(25,1640.364);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(26,558.9974);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(27,665.9707);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(28,606.7981);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(29,273.8571);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(30,271.0521);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(31,384.0988);
   VbbHcc_both_H_dR_Bj0_stack_1->SetEntries(182810);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(1,1026.498);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(2,3577.878);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(3,4030.703);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(4,3306.151);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(5,2585.107);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(6,2086.451);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(7,1764.978);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(8,1540.299);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(9,1372.527);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(10,1236.272);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(11,1132.265);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(12,1046.402);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(13,996.1383);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(14,943.9989);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(15,903.0213);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(16,833.0623);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(17,579.3568);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(18,442.8632);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(19,321.2917);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(20,243.2036);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(21,174.1017);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(22,131.0971);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(23,88.67754);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(24,60.2608);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(25,39.32319);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(26,24.28596);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(27,15.35604);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(28,8.12385);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(29,4.692322);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(30,2.682216);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(31,4.348253);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(1,13.37923);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(2,24.33518);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(3,25.28326);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(4,22.50504);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(5,19.87161);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(6,17.86886);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(7,16.47358);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(8,15.32364);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(9,14.28788);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(10,13.51973);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(11,12.82235);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(12,12.25981);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(13,11.87338);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(14,11.63832);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(15,11.40106);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(16,10.81988);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(17,8.549795);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(18,7.353067);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(19,5.914498);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(20,5.105329);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(21,4.24177);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(22,3.581964);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(23,2.888159);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(24,2.394943);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(25,1.864371);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(26,1.534168);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(27,1.190772);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(28,0.886308);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(29,0.7937306);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(30,0.5491605);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(31,0.7026869);
   VbbHcc_both_H_dR_Bj0_stack_2->SetEntries(401943);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_3 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(1,11348.83);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(2,48777.85);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(3,62260.11);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(4,56523.72);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(5,45761.88);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(6,37180.77);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(7,31306.55);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(8,26942.98);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(9,23585.32);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(10,20845.99);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(11,18602.71);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(12,16887.93);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(13,15439.05);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(14,14250.87);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(15,13253.85);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(16,12071.04);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(17,8309.674);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(18,5957.53);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(19,4278.372);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(20,3062.272);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(21,2170.353);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(22,1510.535);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(23,996.7738);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(24,669.7195);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(25,439.2288);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(26,276.6757);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(27,165.8846);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(28,97.39941);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(29,57.27095);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(30,35.89251);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(31,60.55716);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(1,26.48078);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(2,54.93963);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(3,62.19248);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(4,59.36475);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(5,53.49398);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(6,48.26456);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(7,44.29168);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(8,41.08157);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(9,38.43308);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(10,36.12859);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(11,34.12253);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(12,32.50797);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(13,31.07757);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(14,29.84533);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(15,28.77931);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(16,27.45538);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(17,22.76234);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(18,19.25642);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(19,16.2959);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(20,13.77887);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(21,11.58411);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(22,9.656645);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(23,7.838298);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(24,6.41112);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(25,5.196176);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(26,4.119672);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(27,3.196752);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(28,2.4548);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(29,1.876614);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(30,1.497087);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(31,1.941648);
   VbbHcc_both_H_dR_Bj0_stack_3->SetEntries(7926175);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_4 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(1,877.6759);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(2,2572.253);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(3,2630.419);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(4,2197.671);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(5,1791.647);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(6,1492.238);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(7,1216.283);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(8,1069.377);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(9,925.7712);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(10,856.8658);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(11,783.2879);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(12,687.5608);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(13,691.6903);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(14,642.2295);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(15,639.0332);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(16,554.1062);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(17,371.0809);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(18,267.6687);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(19,189.0993);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(20,153.7705);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(21,112.2829);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(22,75.85887);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(23,51.50081);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(24,36.67192);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(25,26.7088);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(26,16.57882);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(27,6.5372);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(28,5.780223);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(29,2.186322);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(30,0.7021768);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(31,1.427563);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(1,12.65806);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(2,33.98588);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(3,39.32071);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(4,38.6346);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(5,35.0442);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(6,32.69405);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(7,27.15038);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(8,25.51382);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(9,22.59381);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(10,22.57519);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(11,20.38882);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(12,17.17778);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(13,19.73426);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(14,18.06507);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(15,18.57481);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(16,15.18559);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(17,12.54969);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(18,11.32919);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(19,7.902621);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(20,8.816678);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(21,7.650035);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(22,6.721787);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(23,5.284997);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(24,4.374104);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(25,4.236289);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(26,4.764822);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(27,1.05395);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(28,1.054406);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(29,0.6237641);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(30,0.3287596);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(31,0.4685355);
   VbbHcc_both_H_dR_Bj0_stack_4->SetEntries(171964);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_5 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(1,617.002);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(2,1613.609);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(3,1737.505);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(4,1288.728);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(5,938.1229);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(6,834.7019);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(7,671.1731);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(8,577.6858);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(9,520.5465);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(10,473.8171);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(11,429.0713);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(12,395.6518);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(13,337.2699);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(14,336.001);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(15,314.1188);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(16,313.147);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(17,203.3901);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(18,162.8098);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(19,118.1241);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(20,70.95428);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(21,46.07565);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(22,40.64656);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(23,20.93067);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(24,17.7053);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(25,17.2258);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(26,8.107318);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(27,10.1552);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(28,1.823416);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(29,0.389863);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(30,0.6976743);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(31,0.4757608);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(1,14.09962);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(2,39.96753);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(3,48.18413);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(4,46.20746);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(5,35.12061);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(6,37.10004);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(7,31.63359);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(8,27.92269);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(9,28.50432);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(10,26.72226);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(11,22.18789);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(12,23.82094);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(13,17.7901);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(14,20.29379);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(15,17.50836);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(16,19.39963);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(17,16.29893);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(18,16.91174);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(19,12.53604);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(20,7.929039);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(21,4.203672);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(22,7.22061);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(23,2.667958);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(24,2.832564);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(25,6.616815);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(26,2.172837);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(27,6.396268);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(28,1.063834);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(29,0.1554307);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(30,0.4051027);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(31,0.2095351);
   VbbHcc_both_H_dR_Bj0_stack_5->SetEntries(118385);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(1,2.405743);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(2,9.708889);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(3,9.365212);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(4,6.186195);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(5,6.358034);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(6,5.069243);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(7,3.866372);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(8,3.952291);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(9,2.835339);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(10,3.179017);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(11,1.976146);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(12,2.405743);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(13,1.976146);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(14,1.546549);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(15,1.976146);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(16,1.632468);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(17,0.5155163);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(18,0.5155163);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(19,0.5155163);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(20,0.08591938);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(21,0.08591938);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(22,0.2577581);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(23,0.08591938);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(24,0.1718388);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(27,0.08591938);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(1,0.4546426);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(2,0.9133355);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(3,0.8970246);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(4,0.7290501);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(5,0.7391064);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(6,0.6599592);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(7,0.5763647);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(8,0.5827336);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(9,0.4935692);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(10,0.5226272);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(11,0.4120548);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(12,0.4546426);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(13,0.4120548);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(14,0.364525);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(15,0.4120548);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(16,0.3745139);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(17,0.2104586);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(18,0.2104586);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(19,0.2104586);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(20,0.08591938);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(21,0.08591938);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(22,0.1488167);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(23,0.08591938);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(24,0.1215083);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(27,0.08591938);
   VbbHcc_both_H_dR_Bj0_stack_6->SetEntries(777);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(1,10.64025);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(2,26.37764);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(3,24.4025);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(4,17.45766);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(5,11.21368);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(6,11.02254);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(7,9.684543);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(8,6.562552);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(9,5.479412);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(10,5.861697);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(11,5.351984);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(12,5.28827);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(13,3.822846);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(14,3.88656);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(15,4.714843);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(16,4.013988);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(17,2.421136);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(18,1.08314);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(19,1.019426);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(20,1.08314);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(21,0.5097128);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(22,0.4459987);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(23,0.0637141);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(24,0.2548564);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(26,0.1274282);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(27,0.0637141);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(30,0.0637141);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(1,0.8233676);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(2,1.29639);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(3,1.246909);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(4,1.054656);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(5,0.845263);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(6,0.8380281);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(7,0.7855201);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(8,0.6466275);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(9,0.5908602);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(10,0.6111241);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(11,0.5839493);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(12,0.580463);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(13,0.4935273);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(14,0.497623);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(15,0.5480894);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(16,0.505715);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(17,0.3927601);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(18,0.2626999);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(19,0.2548564);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(20,0.2626999);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(21,0.1802107);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(22,0.1685717);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(23,0.0637141);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(24,0.1274282);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(26,0.09010534);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(27,0.0637141);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(30,0.0637141);
   VbbHcc_both_H_dR_Bj0_stack_7->SetEntries(2557);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(1,7.354732);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(2,23.85803);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(3,23.67865);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(4,16.86207);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(5,12.55686);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(6,10.04549);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(7,10.94241);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(8,6.457813);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(9,4.484592);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(10,3.40829);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(11,5.560895);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(12,4.484592);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(13,5.560895);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(14,4.84336);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(15,3.228907);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(16,3.40829);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(17,2.870139);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(18,1.793837);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(19,1.43507);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(20,0.8969185);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(21,0.7175348);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(22,0.1793837);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(23,0.7175348);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(30,0.1793837);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(31,0.1793837);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(1,1.148616);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(2,2.068754);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(3,2.060962);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(4,1.739189);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(5,1.500832);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(6,1.342385);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(7,1.401031);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(8,1.076302);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(9,0.8969185);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(10,0.7819154);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(11,0.9987662);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(12,0.8969185);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(13,0.9987662);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(14,0.932105);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(15,0.7610606);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(16,0.7819154);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(17,0.7175348);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(18,0.5672611);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(19,0.5073737);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(20,0.4011141);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(21,0.3587674);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(22,0.1793837);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(23,0.3587674);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(30,0.1793837);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(31,0.1793837);
   VbbHcc_both_H_dR_Bj0_stack_8->SetEntries(868);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_9 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(1,4.565772);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(2,16.24091);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(3,15.86296);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(4,11.52754);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(5,7.924581);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(6,6.273454);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(7,5.31478);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(8,4.535426);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(9,3.935392);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(10,3.596063);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(11,3.200179);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(12,2.887058);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(13,2.85947);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(14,2.649803);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(15,2.491174);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(16,2.244263);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(17,1.380767);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(18,0.9352247);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(19,0.5958954);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(20,0.4331276);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(21,0.2910507);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(22,0.1944936);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(23,0.1131098);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(24,0.07586631);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(25,0.06207243);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(26,0.0331053);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(27,0.01517326);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(28,0.01931142);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(29,0.00551755);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(30,0.002758775);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(31,0.008276324);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(1,0.07935974);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(2,0.1496747);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(3,0.1479228);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(4,0.1260989);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(5,0.1045517);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(6,0.09302432);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(7,0.08562208);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(8,0.07909557);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(9,0.07367788);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(10,0.07042985);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(11,0.0664401);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(12,0.06310603);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(13,0.0628038);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(14,0.06045747);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(15,0.05861991);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(16,0.05563909);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(17,0.04364186);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(18,0.03591709);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(19,0.02867003);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(20,0.02444281);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(21,0.02003676);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(22,0.01637932);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(23,0.01249088);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(24,0.01022981);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(25,0.009253212);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(26,0.006757591);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(27,0.00457491);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(28,0.005161195);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(29,0.002758775);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(30,0.001950748);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(31,0.003378795);
   VbbHcc_both_H_dR_Bj0_stack_9->SetEntries(72695);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_10 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(1,2.086335);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(2,7.462399);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(3,7.637484);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(4,5.538259);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(5,3.848997);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(6,2.939559);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(7,2.511336);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(8,2.21738);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(9,2.031912);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(10,1.78486);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(11,1.642716);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(12,1.568958);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(13,1.485176);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(14,1.416789);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(15,1.333364);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(16,1.16544);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(17,0.7486746);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(18,0.5417239);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(19,0.3591203);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(20,0.2552869);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(21,0.1686398);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(22,0.1271064);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(23,0.09631443);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(24,0.05621325);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(25,0.03365634);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(26,0.02756956);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(27,0.01181552);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(28,0.006086786);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(29,0.004654601);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(30,0.003580462);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(31,0.003580462);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(1,0.02733138);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(2,0.05169027);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(3,0.05229314);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(4,0.04453036);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(5,0.03712302);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(6,0.03244223);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(7,0.02998624);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(8,0.02817667);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(9,0.02697255);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(10,0.02527969);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(11,0.02425218);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(12,0.02370147);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(13,0.02305995);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(14,0.02252279);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(15,0.02184962);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(16,0.02042747);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(17,0.01637254);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(18,0.01392703);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(19,0.01133939);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(20,0.009560571);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(21,0.00777051);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(22,0.006746107);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(23,0.005872394);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(24,0.004486306);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(25,0.003471387);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(26,0.003141843);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(27,0.002056819);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(28,0.001476262);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(29,0.001290954);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(30,0.001132242);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(31,0.001132242);
   VbbHcc_both_H_dR_Bj0_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(1,0.06290517);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(2,0.374696);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(3,0.4293962);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(4,0.4102511);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(5,0.2543557);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(6,0.1777755);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(7,0.1094003);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(8,0.1039303);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(9,0.1011953);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(10,0.0738452);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(11,0.0355551);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(12,0.07658021);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(13,0.04376012);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(14,0.05743516);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(15,0.0382901);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(16,0.05470015);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(17,0.01914505);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(18,0.01641004);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(19,0.02188006);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(20,0.01367504);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(21,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(22,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(23,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(25,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(26,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(1,0.01311663);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(2,0.03201244);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(3,0.03426955);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(4,0.03349686);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(5,0.02637546);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(6,0.02205034);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(7,0.01729771);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(8,0.01685972);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(9,0.0166364);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(10,0.01421152);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(11,0.00986121);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(12,0.0144723);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(13,0.01094003);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(14,0.01253338);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(15,0.01023346);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(16,0.01223133);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(17,0.00723615);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(18,0.006699373);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(19,0.007735769);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(20,0.006115663);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(21,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(22,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(23,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(25,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(26,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetEntries(910);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(1,0.03001033);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(2,0.1507662);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(3,0.197568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(4,0.1807765);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(5,0.1261148);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(6,0.09146006);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(7,0.06395059);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(8,0.04894542);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(9,0.03822745);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(10,0.03179666);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(11,0.02858127);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(12,0.02679494);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(13,0.02286501);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(14,0.02322228);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(15,0.01964962);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(16,0.01143251);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(17,0.01036071);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(18,0.007859849);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(19,0.005358988);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(20,0.005001722);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(21,0.001429063);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(22,0.003215393);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(23,0.001429063);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(24,0.0007145317);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(25,0.001429063);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(26,0.0003572658);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(27,0.0003572658);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(30,0.0003572658);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(1,0.003274396);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(2,0.007339183);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(3,0.008401447);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(4,0.008036497);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(5,0.006712416);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(6,0.005716254);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(7,0.004779891);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(8,0.00418169);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(9,0.003695587);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(10,0.003370439);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(11,0.003195483);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(12,0.003094013);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(13,0.002858127);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(14,0.002880369);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(15,0.002649554);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(16,0.002021001);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(17,0.001923935);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(18,0.001675725);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(19,0.001383685);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(20,0.001336766);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(21,0.0007145317);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(22,0.001071798);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(23,0.0007145317);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(24,0.0005052502);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(25,0.0007145317);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(26,0.0003572658);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(27,0.0003572658);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(30,0.0003572658);
   VbbHcc_both_H_dR_Bj0_stack_12->SetEntries(3163);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_Bj0__465 = new TH1D("VbbHcc_both_H_dR_Bj0__465","",30,0,6);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(1,77104);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(2,200952);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(3,194995);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(4,156409);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(5,128786);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(6,107725);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(7,92482);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(8,80842);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(9,71998);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(10,64628);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(11,58775);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(12,54829);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(13,51940);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(14,49117);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(15,47394);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(16,43856);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(17,30553);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(18,22735);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(19,17486);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(20,13166);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(21,9773);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(22,7143);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(23,5072);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(24,3460);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(25,2267);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(26,1531);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(27,861);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(28,478);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(29,254);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(30,157);
   VbbHcc_both_H_dR_Bj0__465->SetBinContent(31,234);
   VbbHcc_both_H_dR_Bj0__465->SetEntries(1597031);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0__465->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0__465->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj0__465->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj0__465->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj0__465->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0__465->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__465->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__465->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__465->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__465->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__465->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__465->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__465->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0__465->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__465->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__465->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__465->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__465->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__465->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fx1465[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fy1465[30] = {
   112664.6,
   402860.3,
   393876.4,
   331795.8,
   300853.8,
   233026.8,
   223464.5,
   173705.3,
   150237,
   144165.1,
   115628.5,
   109108.7,
   98165.61,
   97813.2,
   84617.59,
   77947.04,
   59557.77,
   46112.56,
   35650.57,
   42017.32,
   19503.99,
   16228.21,
   11699.88,
   6183.031,
   6254.48,
   2805.762,
   2372.59,
   1853.757,
   501.7652,
   391.6841};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fex1465[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fey1465[30] = {
   3031.912,
   8874.249,
   8612.453,
   8811.944,
   22190.59,
   7211.556,
   21706.41,
   6478.444,
   5906.437,
   6819.911,
   5219.644,
   4399.919,
   5376.738,
   4774.489,
   3635.467,
   3754.927,
   3783.202,
   3337.428,
   2545.666,
   20522.1,
   2022.902,
   2402.244,
   2272.518,
   875.4111,
   1640.392,
   559.0392,
   666.011,
   606.8056,
   273.8655,
   271.0574};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj0_fx1465,Graph_from_VbbHcc_both_H_dR_Bj0_fy1465,Graph_from_VbbHcc_both_H_dR_Bj0_fex1465,Graph_from_VbbHcc_both_H_dR_Bj0_fey1465);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj01465 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj01465","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->SetMinimum(108.5641);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->SetMaximum(452895.9);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj01465);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_Bj0","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj0_both_16->cd();
  
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
   
   TH1D *data_mc_ratio__466 = new TH1D("data_mc_ratio__466","",30,0,6);
   data_mc_ratio__466->SetBinContent(1,0.6843675);
   data_mc_ratio__466->SetBinContent(2,0.4988131);
   data_mc_ratio__466->SetBinContent(3,0.4950665);
   data_mc_ratio__466->SetBinContent(4,0.4714014);
   data_mc_ratio__466->SetBinContent(5,0.4280684);
   data_mc_ratio__466->SetBinContent(6,0.4622859);
   data_mc_ratio__466->SetBinContent(7,0.4138554);
   data_mc_ratio__466->SetBinContent(8,0.4653974);
   data_mc_ratio__466->SetBinContent(9,0.4792296);
   data_mc_ratio__466->SetBinContent(10,0.4482915);
   data_mc_ratio__466->SetBinContent(11,0.5083091);
   data_mc_ratio__466->SetBinContent(12,0.5025172);
   data_mc_ratio__466->SetBinContent(13,0.5291059);
   data_mc_ratio__466->SetBinContent(14,0.502151);
   data_mc_ratio__466->SetBinContent(15,0.5600963);
   data_mc_ratio__466->SetBinContent(16,0.5626384);
   data_mc_ratio__466->SetBinContent(17,0.5129977);
   data_mc_ratio__466->SetBinContent(18,0.4930328);
   data_mc_ratio__466->SetBinContent(19,0.490483);
   data_mc_ratio__466->SetBinContent(20,0.313347);
   data_mc_ratio__466->SetBinContent(21,0.5010769);
   data_mc_ratio__466->SetBinContent(22,0.4401595);
   data_mc_ratio__466->SetBinContent(23,0.4335086);
   data_mc_ratio__466->SetBinContent(24,0.5595961);
   data_mc_ratio__466->SetBinContent(25,0.3624602);
   data_mc_ratio__466->SetBinContent(26,0.5456628);
   data_mc_ratio__466->SetBinContent(27,0.3628945);
   data_mc_ratio__466->SetBinContent(28,0.2578547);
   data_mc_ratio__466->SetBinContent(29,0.5062129);
   data_mc_ratio__466->SetBinContent(30,0.4008332);
   data_mc_ratio__466->SetBinContent(31,0.3051592);
   data_mc_ratio__466->SetBinError(1,0.002464626);
   data_mc_ratio__466->SetBinError(2,0.001112735);
   data_mc_ratio__466->SetBinError(3,0.001121119);
   data_mc_ratio__466->SetBinError(4,0.001191955);
   data_mc_ratio__466->SetBinError(5,0.001192831);
   data_mc_ratio__466->SetBinError(6,0.001408486);
   data_mc_ratio__466->SetBinError(7,0.001360881);
   data_mc_ratio__466->SetBinError(8,0.001636837);
   data_mc_ratio__466->SetBinError(9,0.001786008);
   data_mc_ratio__466->SetBinError(10,0.001763397);
   data_mc_ratio__466->SetBinError(11,0.002096677);
   data_mc_ratio__466->SetBinError(12,0.002146079);
   data_mc_ratio__466->SetBinError(13,0.002321623);
   data_mc_ratio__466->SetBinError(14,0.002265784);
   data_mc_ratio__466->SetBinError(15,0.00257277);
   data_mc_ratio__466->SetBinError(16,0.002686673);
   data_mc_ratio__466->SetBinError(17,0.002934868);
   data_mc_ratio__466->SetBinError(18,0.003269853);
   data_mc_ratio__466->SetBinError(19,0.003709187);
   data_mc_ratio__466->SetBinError(20,0.002730854);
   data_mc_ratio__466->SetBinError(21,0.005068628);
   data_mc_ratio__466->SetBinError(22,0.005207986);
   data_mc_ratio__466->SetBinError(23,0.006087067);
   data_mc_ratio__466->SetBinError(24,0.009513418);
   data_mc_ratio__466->SetBinError(25,0.007612627);
   data_mc_ratio__466->SetBinError(26,0.01394559);
   data_mc_ratio__466->SetBinError(27,0.01236741);
   data_mc_ratio__466->SetBinError(28,0.011794);
   data_mc_ratio__466->SetBinError(29,0.03176262);
   data_mc_ratio__466->SetBinError(30,0.03198997);
   data_mc_ratio__466->SetBinError(31,0.1541537);
   data_mc_ratio__466->SetMinimum(0.4);
   data_mc_ratio__466->SetMaximum(1.6);
   data_mc_ratio__466->SetEntries(805.1563);
   data_mc_ratio__466->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__466->SetLineColor(ci);
   data_mc_ratio__466->SetLineWidth(2);
   data_mc_ratio__466->SetMarkerStyle(20);
   data_mc_ratio__466->SetMarkerSize(1.2);
   data_mc_ratio__466->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__466->GetXaxis()->SetRange(1,30);
   data_mc_ratio__466->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__466->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__466->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__466->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__466->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__466->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__466->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__466->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__466->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__466->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__466->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__466->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__466->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__466->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__466->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__466->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__466->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1466[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1466[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1466[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1466[30] = {
   0.02691095,
   0.02202811,
   0.02186588,
   0.02655834,
   0.07375873,
   0.03094733,
   0.09713581,
   0.0372956,
   0.03931414,
   0.04730625,
   0.04514151,
   0.04032601,
   0.05477212,
   0.04881232,
   0.04296349,
   0.04817279,
   0.06352155,
   0.0723757,
   0.07140604,
   0.4884201,
   0.1037173,
   0.1480289,
   0.1942342,
   0.1415828,
   0.2622747,
   0.1992468,
   0.2807105,
   0.3273382,
   0.545804,
   0.6920305};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1466,Graph_from_mc_statistical_error_fy1466,Graph_from_mc_statistical_error_fex1466,Graph_from_mc_statistical_error_fey1466);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1466 = new TH1F("Graph_Graph_from_mc_statistical_error1466","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1466->SetMinimum(0.1695634);
   Graph_Graph_from_mc_statistical_error1466->SetMaximum(1.830437);
   Graph_Graph_from_mc_statistical_error1466->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1466->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1466->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1466->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1466->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1466->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1466->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1466->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1466->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1466->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1466);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_both_16->cd();
   H_dR_Bj0_both_16->Modified();
   H_dR_Bj0_both_16->cd();
   H_dR_Bj0_both_16->SetSelected(H_dR_Bj0_both_16);
}
