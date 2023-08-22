void Z_mass_tags_18_logY()
{
//=========Macro generated from canvas: Z_mass_tags_18/Z_mass_tags_18
//=========  (Tue Aug 22 09:15:51 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_tags_18 = new TCanvas("Z_mass_tags_18", "Z_mass_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_tags_18->SetHighLightColor(2);
   Z_mass_tags_18->Range(0,0,1,1);
   Z_mass_tags_18->SetFillColor(0);
   Z_mass_tags_18->SetFillStyle(4000);
   Z_mass_tags_18->SetBorderMode(0);
   Z_mass_tags_18->SetBorderSize(2);
   Z_mass_tags_18->SetFrameFillStyle(1000);
   Z_mass_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-2.819098,315.7258,10.62842);
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
   st->SetMaximum(6.087143e+08);
   
   TH1F *st_stack_3 = new TH1F("st_stack_3","",40,0,400);
   st_stack_3->SetMinimum(0.001564405);
   st_stack_3->SetMaximum(1.92164e+09);
   st_stack_3->SetDirectory(0);
   st_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_3->SetLineColor(ci);
   st_stack_3->GetXaxis()->SetRange(1,30);
   st_stack_3->GetXaxis()->SetLabelFont(42);
   st_stack_3->GetXaxis()->SetLabelSize(0.035);
   st_stack_3->GetXaxis()->SetTitleSize(0.035);
   st_stack_3->GetXaxis()->SetTitleFont(42);
   st_stack_3->GetYaxis()->SetTitle("Events/10.0");
   st_stack_3->GetYaxis()->SetLabelFont(42);
   st_stack_3->GetYaxis()->SetLabelSize(0.05);
   st_stack_3->GetYaxis()->SetTitleSize(0.057);
   st_stack_3->GetYaxis()->SetTitleOffset(1.2);
   st_stack_3->GetYaxis()->SetTitleFont(42);
   st_stack_3->GetZaxis()->SetLabelFont(42);
   st_stack_3->GetZaxis()->SetLabelSize(0.035);
   st_stack_3->GetZaxis()->SetTitleSize(0.035);
   st_stack_3->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_3);
   
   
   TH1D *VbbHcc_tags_Z_mass_stack_1 = new TH1D("VbbHcc_tags_Z_mass_stack_1","",40,0,400);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(3,40.20254);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(4,372.138);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(5,3651.643);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(6,6139.106);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(7,7145.34);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(8,6310.127);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(9,7433.07);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(10,4136.434);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(11,5444.977);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(12,4817.412);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(13,4308.202);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(14,6438.979);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(15,3754.273);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(16,4558.997);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(17,4078.778);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(18,4335.99);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(19,4680.408);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(20,2421.041);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(21,2669.657);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(22,4557.376);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(23,4263.832);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(24,1928.525);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(25,3643.99);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(26,1761.429);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(27,2052.451);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(28,3029.968);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(29,3195.488);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(30,2109.117);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(31,3312.333);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(32,2482.425);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(33,1015.212);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(34,3098.406);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(35,1484.571);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(36,2080.912);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(37,3366.847);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(38,1552.165);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(39,1961.069);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(40,2390.625);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(41,85312.01);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(3,33.21285);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(4,97.09567);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(5,847.3227);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(6,1280.529);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(7,2344.465);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(8,1071.607);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(9,1669.76);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(10,966.7965);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(11,1067.364);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(12,2224.092);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(13,940.9453);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(14,1361.493);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(15,846.3743);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(16,1140.935);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(17,952.1498);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(18,986.2683);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(19,1412.096);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(20,454.3687);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(21,716.0382);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(22,1227.391);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(23,1091.428);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(24,686.2187);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(25,982.999);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(26,540.9202);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(27,725.1146);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(28,885.9211);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(29,924.1419);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(30,646.5864);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(31,1029.829);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(32,755.3097);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(33,171.6251);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(34,1060.696);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(35,531.5004);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(36,451.5468);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(37,962.8792);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(38,406.4304);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(39,610.6752);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(40,637.6033);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(41,4096.81);
   VbbHcc_tags_Z_mass_stack_1->SetEntries(9459);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_2 = new TH1D("VbbHcc_tags_Z_mass_stack_2","",40,0,400);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(4,3.453704);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(5,8.933229);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(6,13.97674);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(7,19.46779);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(8,19.26241);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(9,22.46292);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(10,22.79144);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(11,26.72289);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(12,27.87765);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(13,24.3026);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(14,29.69067);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(15,23.73588);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(16,25.73373);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(17,25.22266);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(18,28.3551);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(19,23.3479);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(20,22.9195);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(21,22.83327);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(22,21.53586);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(23,17.59553);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(24,19.45579);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(25,18.4888);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(26,15.36114);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(27,14.09723);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(28,17.93682);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(29,15.71399);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(30,15.91629);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(31,16.50797);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(32,14.61458);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(33,15.14148);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(34,12.82233);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(35,14.12794);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(36,10.21956);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(37,14.95338);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(38,13.55531);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(39,13.00942);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(40,12.43904);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(41,537.0212);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(4,0.8755363);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(5,1.299746);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(6,1.477102);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(7,1.90083);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(8,1.931553);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(9,2.015755);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(10,2.103898);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(11,2.352354);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(12,2.411585);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(13,2.053907);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(14,2.554988);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(15,2.145289);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(16,2.302334);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(17,2.213813);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(18,2.410844);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(19,2.165901);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(20,2.190755);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(21,2.229598);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(22,2.076288);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(23,1.682393);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(24,1.975951);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(25,2.010924);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(26,1.605237);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(27,1.674836);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(28,1.962308);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(29,1.694815);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(30,1.791678);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(31,1.8732);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(32,1.554174);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(33,1.694875);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(34,1.523697);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(35,1.598139);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(36,1.327443);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(37,1.700382);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(38,1.684948);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(39,1.627781);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(40,1.643251);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(41,10.34397);
   VbbHcc_tags_Z_mass_stack_2->SetEntries(14001);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_mass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_3 = new TH1D("VbbHcc_tags_Z_mass_stack_3","",40,0,400);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(2,0.08904539);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(3,1.532329);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(4,49.06882);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(5,174.0397);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(6,291.916);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(7,364.6775);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(8,425.2463);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(9,462.5689);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(10,513.6875);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(11,546.377);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(12,595.6583);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(13,599.6424);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(14,609.2282);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(15,579.655);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(16,575.2715);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(17,533.8769);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(18,507.4503);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(19,496.5594);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(20,468.2624);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(21,444.5979);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(22,436.1934);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(23,430.2763);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(24,399.7123);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(25,395.0458);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(26,386.8734);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(27,363.9463);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(28,357.6153);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(29,346.3583);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(30,347.2568);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(31,333.7481);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(32,322.4717);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(33,313.1431);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(34,317.0456);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(35,298.1535);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(36,296.9047);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(37,289.4664);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(38,279.4543);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(39,277.2319);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(40,276.2091);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(41,11262.95);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(2,0.0632433);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(3,0.3445303);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(4,1.981243);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(5,3.865621);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(6,4.883949);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(7,5.368468);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(8,5.9288);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(9,6.044381);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(10,6.340941);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(11,6.856551);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(12,7.373083);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(13,7.042297);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(14,7.518238);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(15,6.811327);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(16,7.694185);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(17,6.565388);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(18,6.400338);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(19,6.340876);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(20,6.147633);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(21,6.059065);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(22,5.840689);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(23,6.226518);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(24,5.50557);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(25,6.351795);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(26,5.610696);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(27,5.337439);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(28,5.374665);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(29,5.315866);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(30,5.292162);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(31,5.093688);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(32,4.962336);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(33,5.54571);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(34,5.920375);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(35,4.85776);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(36,4.990692);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(37,5.004589);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(38,5.669399);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(39,4.63465);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(40,5.774014);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(41,31.18726);
   VbbHcc_tags_Z_mass_stack_3->SetEntries(383722);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_mass_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_3->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_4 = new TH1D("VbbHcc_tags_Z_mass_stack_4","",40,0,400);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(4,5.443315);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(5,18.57467);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(6,35.0684);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(7,68.78559);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(8,99.12042);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(9,170.057);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(10,217.8448);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(11,152.5451);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(12,100.1451);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(13,58.80985);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(14,64.13914);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(15,57.53289);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(16,54.54448);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(17,43.74403);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(18,46.14431);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(19,45.98938);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(20,40.95461);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(21,42.17975);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(22,38.83618);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(23,43.65197);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(24,37.96833);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(25,38.26847);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(26,48.23747);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(27,53.16739);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(28,35.73336);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(29,36.07433);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(30,47.77242);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(31,34.25544);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(32,48.15228);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(33,36.70467);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(34,28.60162);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(35,43.20832);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(36,23.68177);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(37,33.41538);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(38,40.33262);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(39,25.78143);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(40,31.62467);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(41,1450.635);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(4,1.587949);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(5,2.756589);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(6,3.609965);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(7,7.29677);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(8,8.458232);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(9,12.98919);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(10,8.474087);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(11,9.617468);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(12,8.069433);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(13,4.389205);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(14,6.928966);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(15,4.518893);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(16,5.678798);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(17,3.736332);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(18,3.847887);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(19,3.833433);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(20,3.800283);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(21,3.777672);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(22,3.630098);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(23,4.44915);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(24,5.592333);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(25,3.917895);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(26,6.832635);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(27,8.835065);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(28,4.892206);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(29,5.290045);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(30,10.15788);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(31,5.275073);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(32,6.973447);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(33,4.097266);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(34,3.134018);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(35,12.96725);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(36,2.708214);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(37,3.330035);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(38,6.452018);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(39,3.096349);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(40,3.326294);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(41,30.54348);
   VbbHcc_tags_Z_mass_stack_4->SetEntries(17726);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_mass_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_4->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_5 = new TH1D("VbbHcc_tags_Z_mass_stack_5","",40,0,400);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(4,1.332796);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(5,8.201809);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(6,18.03998);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(7,11.55183);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(8,10.5386);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(9,19.26675);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(10,7.280055);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(11,9.893913);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(12,11.78669);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(13,5.881105);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(14,7.806609);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(15,3.17125);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(16,4.642473);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(17,4.486842);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(18,8.347128);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(19,6.731434);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(20,3.984403);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(21,2.484251);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(22,6.452338);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(23,3.173654);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(24,2.431613);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(25,10.40209);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(26,3.659013);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(27,3.06808);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(28,2.767594);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(29,1.68683);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(30,5.424874);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(31,0.9312593);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(32,6.943455);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(33,1.737484);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(34,1.866264);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(35,2.02079);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(36,1.538331);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(37,3.487837);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(38,1.476814);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(39,2.192688);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(40,4.51249);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(41,116.1719);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(4,0.7236154);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(5,2.448192);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(6,4.833108);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(7,3.889238);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(8,3.313831);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(9,8.95293);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(10,1.293566);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(11,2.373275);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(12,3.846176);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(13,1.184956);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(14,2.351512);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(15,0.7876788);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(16,0.9873789);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(17,1.013736);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(18,3.161074);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(19,3.433905);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(20,1.042864);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(21,0.6161726);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(22,2.455237);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(23,0.9525014);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(24,0.6534005);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(25,4.49123);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(26,1.056241);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(27,0.8415087);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(28,0.6915467);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(29,0.4503389);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(30,2.383092);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(31,0.340714);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(32,3.088305);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(33,0.6590091);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(34,0.6654284);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(35,0.6760545);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(36,0.4406381);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(37,2.180899);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(38,0.5463595);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(39,0.7485118);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(40,2.636836);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(41,8.872851);
   VbbHcc_tags_Z_mass_stack_5->SetEntries(2023);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_mass_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_5->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_6 = new TH1D("VbbHcc_tags_Z_mass_stack_6","",40,0,400);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(7,0.6225638);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(14,0.4278565);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(7,0.6225638);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(14,0.4278565);
   VbbHcc_tags_Z_mass_stack_6->SetEntries(2);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_mass_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_7 = new TH1D("VbbHcc_tags_Z_mass_stack_7","",40,0,400);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(6,0.4346562);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(7,0.5493952);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(8,1.062223);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(9,1.990981);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(10,1.668775);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(11,0.3443727);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(12,0.4671207);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(13,0.3477974);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(15,0.7853639);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(16,0.9636619);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(22,0.6124482);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(27,0.4722652);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(34,0.3690103);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(35,0.3443088);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(39,0.3354616);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(41,2.540912);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(6,0.4346562);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(7,0.5493952);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(8,0.7151957);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(9,0.9132128);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(10,0.8389854);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(11,0.3443727);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(12,0.4671207);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(13,0.3477974);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(15,0.558946);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(16,0.9636619);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(22,0.4364139);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(27,0.4722652);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(34,0.3690103);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(35,0.3443088);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(39,0.3354616);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(41,1.044988);
   VbbHcc_tags_Z_mass_stack_7->SetEntries(32);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_mass_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_8 = new TH1D("VbbHcc_tags_Z_mass_stack_8","",40,0,400);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(6,0.6335791);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(7,0.6549733);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(8,1.62031);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(9,4.991838);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(10,5.04152);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(11,4.58013);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(12,0.8206644);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(13,0.2378081);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(14,1.343638);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(15,0.8868252);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(16,1.160964);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(17,1.219431);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(18,0.6489086);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(19,0.2974008);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(20,0.9231203);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(22,0.2773954);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(23,0.2378081);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(24,0.7191211);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(25,1.195712);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(26,1.473875);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(27,0.6682922);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(28,0.329787);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(29,1.019931);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(30,0.9690141);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(31,0.3837183);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(32,0.9831919);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(33,0.4327783);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(34,0.2701839);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(35,1.002806);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(36,0.4328981);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(37,0.738453);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(38,0.4648215);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(39,0.659894);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(41,30.58018);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(6,0.4554743);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(7,0.339082);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(8,0.7423896);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(9,1.266584);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(10,1.301646);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(11,1.200208);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(12,0.4738399);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(13,0.2378081);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(14,0.6775154);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(15,0.5190324);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(16,0.5808697);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(17,0.6156781);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(18,0.4588872);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(19,0.2974008);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(20,0.5008492);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(22,0.2773954);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(23,0.2378081);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(24,0.5117402);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(25,0.5986252);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(26,0.6905244);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(27,0.4821802);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(28,0.2626828);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(29,0.5949725);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(30,0.5670555);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(31,0.3837183);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(32,0.5692984);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(33,0.4327783);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(34,0.2701839);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(35,0.585936);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(36,0.3338997);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(37,0.5221724);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(38,0.3330652);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(39,0.4244782);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(41,3.046465);
   VbbHcc_tags_Z_mass_stack_8->SetEntries(230);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_mass_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_8->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_9 = new TH1D("VbbHcc_tags_Z_mass_stack_9","",40,0,400);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(4,0.0310308);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(5,0.1485787);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(6,0.2706898);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(7,0.4650838);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(8,1.169021);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(9,2.677798);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(10,3.741146);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(11,2.935217);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(12,2.549729);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(13,2.805042);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(14,2.201625);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(15,1.290686);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(16,0.9127173);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(17,0.6210056);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(18,0.5493922);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(19,0.5188692);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(20,0.553075);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(21,0.5231148);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(22,0.5311141);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(23,0.4915219);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(24,0.5302456);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(25,0.5744099);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(26,0.5195326);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(27,0.5548083);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(28,0.5464646);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(29,0.5438788);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(30,0.5933382);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(31,0.5916265);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(32,0.6712421);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(33,0.5173629);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(34,0.6086224);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(35,0.7272784);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(36,0.5476059);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(37,0.6915504);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(38,0.7064319);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(39,0.7489739);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(40,0.6188496);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(41,29.57791);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(4,0.009985941);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(5,0.02205318);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(6,0.02967896);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(7,0.03927874);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(8,0.06626659);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(9,0.1142665);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(10,0.1156153);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(11,0.09992598);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(12,0.09173683);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(13,0.09688844);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(14,0.08554976);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(15,0.06450615);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(16,0.05673157);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(17,0.0444346);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(18,0.0424446);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(19,0.04165643);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(20,0.04197237);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(21,0.04660419);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(22,0.04124763);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(23,0.03909744);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(24,0.04133547);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(25,0.0444028);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(26,0.04426573);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(27,0.04390648);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(28,0.04143864);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(29,0.04241654);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(30,0.04578981);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(31,0.04367738);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(32,0.046364);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(33,0.04154218);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(34,0.04459428);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(35,0.05388782);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(36,0.04200311);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(37,0.050199);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(38,0.06207021);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(39,0.04965007);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(40,0.05716734);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(41,0.3466673);
   VbbHcc_tags_Z_mass_stack_9->SetEntries(21953);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_mass_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_9->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_10 = new TH1D("VbbHcc_tags_Z_mass_stack_10","",40,0,400);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(3,0.0005842588);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(4,0.01433908);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(5,0.03905935);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(6,0.1003042);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(7,0.2028773);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(8,0.459468);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(9,1.014482);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(10,1.313761);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(11,1.009279);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(12,0.984146);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(13,0.9972375);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(14,0.8007022);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(15,0.5425175);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(16,0.3943845);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(17,0.3449729);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(18,0.2874859);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(19,0.3144905);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(20,0.2828796);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(21,0.2593991);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(22,0.2810474);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(23,0.2774856);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(24,0.2454654);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(25,0.2747799);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(26,0.2562784);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(27,0.2759451);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(28,0.2475284);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(29,0.2778419);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(30,0.2603896);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(31,0.2550941);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(32,0.2584395);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(33,0.2447892);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(34,0.2387916);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(35,0.237435);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(36,0.225579);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(37,0.228553);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(38,0.2195585);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(39,0.2448936);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(40,0.2138404);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(41,8.301726);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(3,0.0005842588);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(4,0.002879622);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(5,0.004671829);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(6,0.007475184);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(7,0.0106409);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(8,0.01593996);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(9,0.02375551);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(10,0.02711319);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(11,0.02372988);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(12,0.02352206);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(13,0.02379823);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(14,0.02127927);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(15,0.01740302);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(16,0.01482678);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(17,0.01392776);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(18,0.01265273);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(19,0.01326087);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(20,0.01251727);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(21,0.01206715);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(22,0.01249274);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(23,0.01240937);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(24,0.01162444);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(25,0.0123221);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(26,0.01189138);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(27,0.01237263);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(28,0.01165425);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(29,0.01239428);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(30,0.01200634);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(31,0.0118864);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(32,0.01193095);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(33,0.01160348);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(34,0.01143434);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(35,0.01141916);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(36,0.01110662);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(37,0.01122303);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(38,0.01095425);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(39,0.01155436);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(40,0.01086197);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(41,0.06823234);
   VbbHcc_tags_Z_mass_stack_10->SetEntries(40948);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_mass_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_10->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_11 = new TH1D("VbbHcc_tags_Z_mass_stack_11","",40,0,400);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(5,0.002360595);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(6,0.002583918);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(8,0.006278123);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(9,0.02083216);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(10,0.04387834);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(11,0.02016461);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(14,0.00225108);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(15,0.004590214);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(18,0.002294171);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(19,0.002176611);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(21,0.002284175);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(22,0.002399781);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(23,0.002884364);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(26,0.002390853);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(27,0.002203227);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(30,0.002141222);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(31,0.002203227);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(32,0.00210716);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(35,0.002299241);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(37,0.002640973);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(39,0.00221053);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(41,0.04287252);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(5,0.002360595);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(6,0.002583918);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(8,0.003627663);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(9,0.007070958);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(10,0.01053386);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(11,0.006883038);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(14,0.00225108);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(15,0.003249145);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(18,0.002294171);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(19,0.002176611);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(21,0.002284175);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(22,0.002399781);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(23,0.002884364);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(26,0.002390853);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(27,0.002203227);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(30,0.002141222);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(31,0.002203227);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(32,0.00210716);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(35,0.002299241);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(37,0.002640973);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(39,0.00221053);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(41,0.01001003);
   VbbHcc_tags_Z_mass_stack_11->SetEntries(77);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_mass_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_12 = new TH1D("VbbHcc_tags_Z_mass_stack_12","",40,0,400);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(6,0.0002951153);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(7,0.002724686);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(8,0.00482631);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(9,0.01097854);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(10,0.01612232);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(11,0.01170642);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(12,0.003994343);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(13,0.003512274);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(14,0.0007294568);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(15,0.001307943);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(16,0.0009141657);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(17,0.0003978012);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(18,0.0002942409);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(19,0.001072163);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(20,0.0007616916);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(21,0.0006251017);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(23,0.0002925643);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(24,0.0002962174);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(25,0.0009106269);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(26,0.000224562);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(28,0.0009500495);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(29,0.00061026);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(30,0.001254531);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(32,0.0002567216);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(33,0.0004084444);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(34,0.0003701543);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(35,0.001313583);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(39,0.0006183345);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(40,0.0005987885);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(41,0.02412784);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(6,0.0002951153);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(7,0.0009713169);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(8,0.001302797);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(9,0.001882419);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(10,0.002313042);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(11,0.002002171);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(12,0.001133665);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(13,0.001014801);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(14,0.0004864669);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(15,0.0006554934);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(16,0.0005280732);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(17,0.0003978012);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(18,0.0002942409);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(19,0.0006332045);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(20,0.0004978969);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(21,0.00045798);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(23,0.0002925643);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(24,0.0002962174);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(25,0.0005565968);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(26,0.000224562);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(28,0.0005524403);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(29,0.000431792);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(30,0.0006351311);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(32,0.0002567216);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(33,0.0003068223);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(34,0.0003701543);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(35,0.0006585809);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(39,0.0004378858);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(40,0.0004237938);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(41,0.002770251);
   VbbHcc_tags_Z_mass_stack_12->SetEntries(298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_mass_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_12->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_mass__7 = new TH1D("VbbHcc_tags_Z_mass__7","",40,0,400);
   VbbHcc_tags_Z_mass__7->SetBinContent(3,34);
   VbbHcc_tags_Z_mass__7->SetBinContent(4,1073);
   VbbHcc_tags_Z_mass__7->SetBinContent(5,4258);
   VbbHcc_tags_Z_mass__7->SetBinContent(6,7271);
   VbbHcc_tags_Z_mass__7->SetBinContent(7,8689);
   VbbHcc_tags_Z_mass__7->SetBinContent(15,6275);
   VbbHcc_tags_Z_mass__7->SetBinContent(16,5885);
   VbbHcc_tags_Z_mass__7->SetBinContent(17,5644);
   VbbHcc_tags_Z_mass__7->SetBinContent(18,5459);
   VbbHcc_tags_Z_mass__7->SetBinContent(19,5125);
   VbbHcc_tags_Z_mass__7->SetBinContent(20,4761);
   VbbHcc_tags_Z_mass__7->SetBinContent(21,4660);
   VbbHcc_tags_Z_mass__7->SetBinContent(22,4374);
   VbbHcc_tags_Z_mass__7->SetBinContent(23,4372);
   VbbHcc_tags_Z_mass__7->SetBinContent(24,4199);
   VbbHcc_tags_Z_mass__7->SetBinContent(25,4009);
   VbbHcc_tags_Z_mass__7->SetBinContent(26,3907);
   VbbHcc_tags_Z_mass__7->SetBinContent(27,3657);
   VbbHcc_tags_Z_mass__7->SetBinContent(28,3660);
   VbbHcc_tags_Z_mass__7->SetBinContent(29,3637);
   VbbHcc_tags_Z_mass__7->SetBinContent(30,3522);
   VbbHcc_tags_Z_mass__7->SetBinContent(31,3426);
   VbbHcc_tags_Z_mass__7->SetBinContent(32,3269);
   VbbHcc_tags_Z_mass__7->SetBinContent(33,3258);
   VbbHcc_tags_Z_mass__7->SetBinContent(34,3199);
   VbbHcc_tags_Z_mass__7->SetBinContent(35,3098);
   VbbHcc_tags_Z_mass__7->SetBinContent(36,3178);
   VbbHcc_tags_Z_mass__7->SetBinContent(37,3065);
   VbbHcc_tags_Z_mass__7->SetBinContent(38,2964);
   VbbHcc_tags_Z_mass__7->SetBinContent(39,2990);
   VbbHcc_tags_Z_mass__7->SetBinContent(40,2923);
   VbbHcc_tags_Z_mass__7->SetBinContent(41,127355);
   VbbHcc_tags_Z_mass__7->SetEntries(307613);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass__7->SetLineColor(ci);
   VbbHcc_tags_Z_mass__7->SetLineWidth(2);
   VbbHcc_tags_Z_mass__7->SetMarkerStyle(20);
   VbbHcc_tags_Z_mass__7->SetMarkerSize(1.2);
   VbbHcc_tags_Z_mass__7->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass__7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass__7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass__7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass__7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass__7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass__7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass__7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass__7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__7->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_mass_fx1005[40] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395};
   Double_t Graph_from_VbbHcc_tags_Z_mass_fy1005[40] = {
   0,
   0.08904539,
   41.73545,
   431.482,
   3861.583,
   6499.549,
   7612.321,
   6868.617,
   8118.133,
   4909.863,
   6189.417,
   5557.705,
   5001.229,
   7154.62,
   4421.879,
   5222.622,
   4688.294,
   4927.776,
   5254.17,
   2958.922,
   3182.538,
   5062.098,
   4759.54,
   2389.588,
   4108.241,
   2217.813,
   2488.704,
   3445.146,
   3597.164,
   2527.314,
   3699.008,
   2876.523,
   1383.134,
   3460.229,
   1844.397,
   2414.462,
   3709.831,
   1888.374,
   2281.277,
   2716.244};
   Double_t Graph_from_VbbHcc_tags_Z_mass_fex1005[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_VbbHcc_tags_Z_mass_fey1005[40] = {
   0,
   0.0632433,
   33.21464,
   97.13551,
   847.3405,
   1280.554,
   2344.487,
   1071.664,
   1669.847,
   966.8588,
   1067.436,
   2224.123,
   940.985,
   1361.536,
   846.4172,
   1140.979,
   952.1831,
   986.3047,
   1412.122,
   454.4329,
   716.0776,
   1227.414,
   1091.457,
   686.2669,
   983.0398,
   540.9963,
   725.1908,
   885.9534,
   924.1742,
   646.695,
   1029.856,
   755.3663,
   171.7738,
   1060.719,
   531.684,
   451.5848,
   962.9021,
   406.5252,
   610.7035,
   637.6457};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_tags_Z_mass_fx1005,Graph_from_VbbHcc_tags_Z_mass_fy1005,Graph_from_VbbHcc_tags_Z_mass_fex1005,Graph_from_VbbHcc_tags_Z_mass_fey1005);
   gre->SetName("Graph_from_VbbHcc_tags_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_mass1005 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_mass1005","",100,0,440);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->SetMinimum(10.95249);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->SetMaximum(10952.49);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_mass1005);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_mass","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_mass","MC unc. (stat.)","fl");

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
   Z_mass_tags_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-45.96762,-0.2774193,315.7258,1.658065);
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
   
   TH1D *data_mc_ratio__8 = new TH1D("data_mc_ratio__8","",40,0,400);
   data_mc_ratio__8->SetBinContent(3,0.8146551);
   data_mc_ratio__8->SetBinContent(4,2.486778);
   data_mc_ratio__8->SetBinContent(5,1.102657);
   data_mc_ratio__8->SetBinContent(6,1.118693);
   data_mc_ratio__8->SetBinContent(7,1.141439);
   data_mc_ratio__8->SetBinContent(8,1.306522);
   data_mc_ratio__8->SetBinContent(9,1.081653);
   data_mc_ratio__8->SetBinContent(10,1.660331);
   data_mc_ratio__8->SetBinContent(11,1.231295);
   data_mc_ratio__8->SetBinContent(12,1.320689);
   data_mc_ratio__8->SetBinContent(13,1.385259);
   data_mc_ratio__8->SetBinContent(14,0.919965);
   data_mc_ratio__8->SetBinContent(15,1.41908);
   data_mc_ratio__8->SetBinContent(16,1.126829);
   data_mc_ratio__8->SetBinContent(17,1.203849);
   data_mc_ratio__8->SetBinContent(18,1.107802);
   data_mc_ratio__8->SetBinContent(19,0.9754157);
   data_mc_ratio__8->SetBinContent(20,1.609032);
   data_mc_ratio__8->SetBinContent(21,1.46424);
   data_mc_ratio__8->SetBinContent(22,0.8640686);
   data_mc_ratio__8->SetBinContent(23,0.9185762);
   data_mc_ratio__8->SetBinContent(24,1.757206);
   data_mc_ratio__8->SetBinContent(25,0.9758435);
   data_mc_ratio__8->SetBinContent(26,1.761646);
   data_mc_ratio__8->SetBinContent(27,1.46944);
   data_mc_ratio__8->SetBinContent(28,1.062364);
   data_mc_ratio__8->SetBinContent(29,1.011074);
   data_mc_ratio__8->SetBinContent(30,1.393575);
   data_mc_ratio__8->SetBinContent(31,0.9261942);
   data_mc_ratio__8->SetBinContent(32,1.136442);
   data_mc_ratio__8->SetBinContent(33,2.355521);
   data_mc_ratio__8->SetBinContent(34,0.9245053);
   data_mc_ratio__8->SetBinContent(35,1.679681);
   data_mc_ratio__8->SetBinContent(36,1.316235);
   data_mc_ratio__8->SetBinContent(37,0.8261832);
   data_mc_ratio__8->SetBinContent(38,1.569604);
   data_mc_ratio__8->SetBinContent(39,1.310669);
   data_mc_ratio__8->SetBinContent(40,1.076118);
   data_mc_ratio__8->SetBinContent(41,1.289673);
   data_mc_ratio__8->SetBinError(3,0.1397122);
   data_mc_ratio__8->SetBinError(4,0.07591668);
   data_mc_ratio__8->SetBinError(5,0.01689808);
   data_mc_ratio__8->SetBinError(6,0.0131194);
   data_mc_ratio__8->SetBinError(7,0.01224525);
   data_mc_ratio__8->SetBinError(8,0.01379189);
   data_mc_ratio__8->SetBinError(9,0.01154292);
   data_mc_ratio__8->SetBinError(10,0.01838919);
   data_mc_ratio__8->SetBinError(11,0.01410445);
   data_mc_ratio__8->SetBinError(12,0.01541532);
   data_mc_ratio__8->SetBinError(13,0.01664283);
   data_mc_ratio__8->SetBinError(14,0.01133946);
   data_mc_ratio__8->SetBinError(15,0.01791431);
   data_mc_ratio__8->SetBinError(16,0.01468874);
   data_mc_ratio__8->SetBinError(17,0.01602428);
   data_mc_ratio__8->SetBinError(18,0.01499359);
   data_mc_ratio__8->SetBinError(19,0.0136252);
   data_mc_ratio__8->SetBinError(20,0.02331931);
   data_mc_ratio__8->SetBinError(21,0.02144961);
   data_mc_ratio__8->SetBinError(22,0.01306498);
   data_mc_ratio__8->SetBinError(23,0.01389233);
   data_mc_ratio__8->SetBinError(24,0.02711751);
   data_mc_ratio__8->SetBinError(25,0.01541211);
   data_mc_ratio__8->SetBinError(26,0.02818362);
   data_mc_ratio__8->SetBinError(27,0.02429905);
   data_mc_ratio__8->SetBinError(28,0.01756034);
   data_mc_ratio__8->SetBinError(29,0.01676531);
   data_mc_ratio__8->SetBinError(30,0.02348202);
   data_mc_ratio__8->SetBinError(31,0.01582371);
   data_mc_ratio__8->SetBinError(32,0.01987649);
   data_mc_ratio__8->SetBinError(33,0.04126781);
   data_mc_ratio__8->SetBinError(34,0.01634565);
   data_mc_ratio__8->SetBinError(35,0.03017771);
   data_mc_ratio__8->SetBinError(36,0.02334837);
   data_mc_ratio__8->SetBinError(37,0.01492317);
   data_mc_ratio__8->SetBinError(38,0.02883042);
   data_mc_ratio__8->SetBinError(39,0.02396942);
   data_mc_ratio__8->SetBinError(40,0.01990424);
   data_mc_ratio__8->SetBinError(41,0.05362958);
   data_mc_ratio__8->SetMinimum(0.4);
   data_mc_ratio__8->SetMaximum(1.6);
   data_mc_ratio__8->SetEntries(580.4004);
   data_mc_ratio__8->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__8->SetLineColor(ci);
   data_mc_ratio__8->SetLineWidth(2);
   data_mc_ratio__8->SetMarkerStyle(20);
   data_mc_ratio__8->SetMarkerSize(1.2);
   data_mc_ratio__8->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__8->GetXaxis()->SetRange(1,30);
   data_mc_ratio__8->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__8->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__8->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__8->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__8->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__8->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__8->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__8->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__8->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__8->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__8->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__8->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__8->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__8->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__8->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__8->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__8->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1006[40] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395};
   Double_t Graph_from_mc_statistical_error_fy1006[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1006[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_mc_statistical_error_fey1006[40] = {
   0,
   0.7102367,
   0.7958376,
   0.2251207,
   0.2194283,
   0.1970219,
   0.3079859,
   0.1560233,
   0.2056935,
   0.1969218,
   0.1724614,
   0.4001873,
   0.1881507,
   0.1903017,
   0.1914157,
   0.2184686,
   0.203098,
   0.2001521,
   0.2687621,
   0.1535806,
   0.2250021,
   0.2424714,
   0.2293198,
   0.2871904,
   0.2392848,
   0.2439324,
   0.291393,
   0.2571599,
   0.2569175,
   0.2558824,
   0.2784142,
   0.262597,
   0.1241917,
   0.3065457,
   0.2882698,
   0.1870333,
   0.2595542,
   0.2152778,
   0.2677025,
   0.2347527};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1006,Graph_from_mc_statistical_error_fy1006,Graph_from_mc_statistical_error_fex1006,Graph_from_mc_statistical_error_fey1006);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1006 = new TH1F("Graph_Graph_from_mc_statistical_error1006","",100,0,440);
   Graph_Graph_from_mc_statistical_error1006->SetMinimum(0.04499491);
   Graph_Graph_from_mc_statistical_error1006->SetMaximum(1.955005);
   Graph_Graph_from_mc_statistical_error1006->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1006->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1006);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tags_18->cd();
   Z_mass_tags_18->Modified();
   Z_mass_tags_18->cd();
   Z_mass_tags_18->SetSelected(Z_mass_tags_18);
}
