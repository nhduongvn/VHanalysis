void Z_mass_algo_18()
{
//=========Macro generated from canvas: Z_mass_algo_18/Z_mass_algo_18
//=========  (Fri Jul 14 13:38:11 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_algo_18 = new TCanvas("Z_mass_algo_18", "Z_mass_algo_18",0,0,600,600);
   Z_mass_algo_18->SetHighLightColor(2);
   Z_mass_algo_18->Range(0,0,1,1);
   Z_mass_algo_18->SetFillColor(0);
   Z_mass_algo_18->SetFillStyle(4000);
   Z_mass_algo_18->SetBorderMode(0);
   Z_mass_algo_18->SetBorderSize(2);
   Z_mass_algo_18->SetFrameFillStyle(1000);
   Z_mass_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-37.89692,315.7258,37869.03);
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
   st->SetMaximum(32455.56);
   
   TH1F *st_stack_99 = new TH1F("st_stack_99","",40,0,400);
   st_stack_99->SetMinimum(0.01);
   st_stack_99->SetMaximum(34078.33);
   st_stack_99->SetDirectory(0);
   st_stack_99->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_99->SetLineColor(ci);
   st_stack_99->GetXaxis()->SetRange(1,30);
   st_stack_99->GetXaxis()->SetLabelFont(42);
   st_stack_99->GetXaxis()->SetLabelSize(0.035);
   st_stack_99->GetXaxis()->SetTitleSize(0.035);
   st_stack_99->GetXaxis()->SetTitleFont(42);
   st_stack_99->GetYaxis()->SetTitle("Events/10.0");
   st_stack_99->GetYaxis()->SetLabelFont(42);
   st_stack_99->GetYaxis()->SetLabelSize(0.05);
   st_stack_99->GetYaxis()->SetTitleSize(0.057);
   st_stack_99->GetYaxis()->SetTitleOffset(1.2);
   st_stack_99->GetYaxis()->SetTitleFont(42);
   st_stack_99->GetZaxis()->SetLabelFont(42);
   st_stack_99->GetZaxis()->SetLabelSize(0.035);
   st_stack_99->GetZaxis()->SetTitleSize(0.035);
   st_stack_99->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_99);
   
   
   TH1D *VbbHcc_algo_Z_mass_stack_1 = new TH1D("VbbHcc_algo_Z_mass_stack_1","",40,0,400);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(4,83.16871);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(5,3125.24);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(6,10307.15);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(7,7953.59);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(8,8735.398);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(9,10275.57);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(10,9604.534);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(11,9459.696);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(12,9602.399);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(13,9342.212);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(14,7453.686);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(15,7127.278);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(16,5339.836);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(17,6034.212);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(18,4563.289);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(19,4039.714);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(20,3985.06);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(21,5364.122);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(22,3755.744);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(23,3730.823);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(24,2557.814);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(25,3189.782);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(26,2456.668);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(27,2338.202);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(28,2025.893);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(29,1101.058);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(30,1586.083);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(31,2054.187);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(32,895.8213);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(33,1253.548);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(34,1714.846);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(35,993.3977);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(36,1272.416);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(37,1379.901);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(38,835.9238);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(39,1081.353);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(40,863.2316);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(41,46205.79);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(4,52.38707);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(5,947.3995);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(6,3463.433);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(7,1197.755);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(8,1334.908);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(9,1386.637);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(10,1251.393);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(11,1149.153);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(12,1357.925);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(13,1333.42);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(14,1116.93);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(15,1072.872);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(16,714.8805);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(17,1118.834);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(18,747.8902);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(19,527.6517);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(20,812.3647);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(21,1075.89);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(22,766.5777);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(23,1777.091);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(24,453.476);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(25,685.8333);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(26,646.3859);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(27,597.8449);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(28,403.073);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(29,135.4649);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(30,429.5469);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(31,472.6046);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(32,133.1449);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(33,393.1315);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(34,682.3559);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(35,124.1437);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(36,449.6448);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(37,452.0461);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(38,120.8308);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(39,376.7395);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(40,336.238);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(41,3548.67);
   VbbHcc_algo_Z_mass_stack_1->SetEntries(13324);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_mass_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_mass_stack_2 = new TH1D("VbbHcc_algo_Z_mass_stack_2","",40,0,400);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(4,0.7646212);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(5,5.98184);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(6,18.04278);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(7,21.56574);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(8,37.49062);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(9,45.11106);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(10,49.04271);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(11,60.85729);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(12,55.5883);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(13,61.14419);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(14,65.69549);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(15,62.94933);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(16,56.83311);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(17,54.91856);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(18,51.45741);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(19,41.76199);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(20,40.92419);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(21,37.29671);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(22,34.84405);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(23,34.38746);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(24,27.70107);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(25,28.6073);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(26,26.65058);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(27,27.12968);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(28,26.53649);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(29,22.12829);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(30,23.24833);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(31,19.19634);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(32,17.43112);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(33,17.64926);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(34,14.90746);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(35,14.49961);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(36,16.82423);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(37,13.89496);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(38,16.32922);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(39,16.1936);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(40,13.13919);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(41,564.3627);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(4,0.4025189);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(5,1.196741);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(6,4.993679);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(7,2.149013);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(8,2.888267);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(9,2.938781);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(10,3.206694);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(11,3.61836);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(12,3.167719);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(13,3.677999);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(14,3.630976);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(15,3.554578);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(16,3.201523);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(17,3.165066);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(18,3.181344);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(19,2.724154);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(20,3.575795);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(21,2.574042);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(22,2.540808);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(23,2.628638);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(24,2.14341);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(25,2.569516);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(26,2.329992);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(27,2.294993);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(28,2.388248);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(29,2.128558);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(30,2.143459);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(31,1.87285);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(32,1.830682);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(33,1.72847);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(34,1.46092);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(35,1.491796);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(36,1.773185);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(37,1.65301);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(38,1.756119);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(39,1.830331);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(40,1.657159);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(41,10.59438);
   VbbHcc_algo_Z_mass_stack_2->SetEntries(21685);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_mass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_mass_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_mass_stack_3 = new TH1D("VbbHcc_algo_Z_mass_stack_3","",40,0,400);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(3,0.1013315);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(4,8.310814);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(5,64.00598);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(6,163.3054);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(7,282.1632);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(8,417.2649);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(9,577.3038);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(10,702.887);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(11,795.3567);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(12,873.6021);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(13,868.7572);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(14,830.5832);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(15,786.6243);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(16,699.5323);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(17,628.7829);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(18,562.3927);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(19,501.8444);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(20,476.3565);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(21,421.7667);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(22,383.7507);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(23,367.7707);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(24,339.3068);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(25,320.4798);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(26,290.9815);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(27,284.4783);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(28,269.1088);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(29,243.1255);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(30,233.2897);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(31,221.4652);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(32,209.9879);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(33,203.2012);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(34,195.303);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(35,182.2669);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(36,172.055);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(37,166.8694);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(38,156.3562);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(39,147.7241);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(40,150.5968);
   VbbHcc_algo_Z_mass_stack_3->SetBinContent(41,6272.851);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(3,0.07165284);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(4,0.7682342);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(5,2.157512);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(6,3.364477);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(7,4.602701);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(8,5.784412);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(9,6.904079);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(10,8.15795);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(11,8.514591);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(12,8.315235);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(13,8.712917);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(14,7.983124);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(15,7.861292);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(16,7.39607);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(17,7.045413);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(18,6.540607);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(19,6.954386);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(20,6.477033);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(21,5.720523);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(22,5.494184);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(23,5.352049);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(24,5.202406);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(25,4.938633);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(26,4.626659);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(27,4.79345);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(28,4.426964);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(29,4.222112);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(30,4.091629);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(31,4.004385);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(32,3.868841);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(33,3.826999);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(34,3.90777);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(35,3.72891);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(36,3.552529);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(37,3.475385);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(38,3.413916);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(39,3.224031);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(40,3.40732);
   VbbHcc_algo_Z_mass_stack_3->SetBinError(41,22.45783);
   VbbHcc_algo_Z_mass_stack_3->SetEntries(319331);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_mass_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_mass_stack_3->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_mass_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_mass_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_mass_stack_4 = new TH1D("VbbHcc_algo_Z_mass_stack_4","",40,0,400);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(4,1.757056);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(5,6.481401);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(6,29.70109);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(7,38.9833);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(8,95.41817);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(9,191.939);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(10,233.1871);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(11,150.291);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(12,78.05464);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(13,46.81431);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(14,36.39446);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(15,39.9801);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(16,38.58651);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(17,32.56602);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(18,25.08418);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(19,35.91326);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(20,25.24681);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(21,30.82917);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(22,19.36879);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(23,18.71875);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(24,21.51665);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(25,20.45288);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(26,20.41828);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(27,15.99562);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(28,16.01226);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(29,15.46104);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(30,9.845832);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(31,10.78391);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(32,8.998692);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(33,11.14191);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(34,10.23655);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(35,9.415718);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(36,7.620815);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(37,8.815967);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(38,5.795287);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(39,6.811132);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(40,5.636006);
   VbbHcc_algo_Z_mass_stack_4->SetBinContent(41,360.139);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(4,1.02223);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(5,1.772922);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(6,6.426618);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(7,5.575479);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(8,8.693724);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(9,12.29244);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(10,12.92026);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(11,10.90207);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(12,6.969541);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(13,3.998333);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(14,3.498325);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(15,3.920907);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(16,3.723329);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(17,6.149972);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(18,2.637529);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(19,7.309554);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(20,2.718043);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(21,6.45058);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(22,2.178115);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(23,2.410952);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(24,5.157617);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(25,5.498521);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(26,6.588604);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(27,2.065866);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(28,2.234274);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(29,2.07325);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(30,1.578371);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(31,1.79861);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(32,1.648554);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(33,1.663856);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(34,1.80478);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(35,1.958867);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(36,1.230237);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(37,1.372637);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(38,0.9596145);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(39,1.190863);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(40,1.153437);
   VbbHcc_algo_Z_mass_stack_4->SetBinError(41,15.08259);
   VbbHcc_algo_Z_mass_stack_4->SetEntries(8300);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_mass_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_mass_stack_4->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_mass_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_mass_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_mass_stack_5 = new TH1D("VbbHcc_algo_Z_mass_stack_5","",40,0,400);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(4,0.1773601);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(5,11.62741);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(6,33.90493);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(7,29.64479);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(8,55.11865);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(9,57.27049);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(10,51.22946);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(11,29.8757);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(12,36.63785);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(13,45.25881);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(14,39.76828);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(15,32.06843);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(16,22.82206);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(17,28.89284);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(18,21.42688);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(19,21.46648);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(20,24.77035);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(21,21.89182);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(22,13.49313);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(23,18.56112);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(24,13.84301);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(25,6.464103);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(26,10.08354);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(27,13.13495);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(28,8.509903);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(29,5.9471);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(30,6.798745);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(31,4.395405);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(32,4.259414);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(33,8.639536);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(34,7.685093);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(35,2.092771);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(36,2.701144);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(37,4.923779);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(38,3.273319);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(39,3.738785);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(40,1.907711);
   VbbHcc_algo_Z_mass_stack_5->SetBinContent(41,176.9362);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(4,0.1773601);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(5,4.682171);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(6,8.632453);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(7,6.654015);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(8,10.14274);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(9,13.37838);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(10,8.714139);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(11,5.332955);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(12,6.613415);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(13,12.4082);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(14,13.03971);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(15,7.42923);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(16,4.638941);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(17,11.89416);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(18,4.830384);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(19,5.108787);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(20,6.158693);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(21,6.084227);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(22,3.481719);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(23,4.673519);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(24,4.498767);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(25,1.303175);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(26,2.982784);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(27,3.715515);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(28,1.813327);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(29,1.17769);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(30,2.537945);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(31,1.065277);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(32,1.046697);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(33,2.787911);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(34,2.629456);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(35,0.6069393);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(36,0.7554948);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(37,2.35308);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(38,0.7770133);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(39,0.9142353);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(40,0.5592517);
   VbbHcc_algo_Z_mass_stack_5->SetBinError(41,13.4237);
   VbbHcc_algo_Z_mass_stack_5->SetEntries(3417);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_mass_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_mass_stack_5->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_mass_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_mass_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_mass_stack_6 = new TH1D("VbbHcc_algo_Z_mass_stack_6","",40,0,400);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(10,0.179752);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(12,0.4233786);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(16,0.419823);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(20,0.3366028);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(41,0.9145621);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(10,0.179752);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(12,0.4233786);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(16,0.419823);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(20,0.3366028);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(41,0.4731035);
   VbbHcc_algo_Z_mass_stack_6->SetEntries(8);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_mass_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_mass_stack_6->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_mass_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_mass_stack_7 = new TH1D("VbbHcc_algo_Z_mass_stack_7","",40,0,400);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(5,0.1716828);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(6,0.1716828);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(8,0.9636524);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(9,4.772642);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(10,5.489412);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(11,2.883159);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(12,0.6758617);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(13,0.3934755);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(14,0.5990147);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(17,0.2183893);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(22,0.3026994);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(23,0.4531513);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(25,0.3007647);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(26,0.4484702);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(34,0.2352945);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(35,0.05508534);
   VbbHcc_algo_Z_mass_stack_7->SetBinContent(41,2.215036);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(5,0.1716828);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(6,0.1716828);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(8,0.4981518);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(9,1.045156);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(10,1.136115);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(11,0.8404224);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(12,0.3904773);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(13,0.2804763);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(14,0.3525792);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(17,0.2183893);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(22,0.3026994);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(23,0.3236537);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(25,0.3007647);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(26,0.3171163);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(34,0.2352945);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(35,0.05508534);
   VbbHcc_algo_Z_mass_stack_7->SetBinError(41,0.7446314);
   VbbHcc_algo_Z_mass_stack_7->SetEntries(92);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_mass_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_mass_stack_7->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_mass_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_mass_stack_8 = new TH1D("VbbHcc_algo_Z_mass_stack_8","",40,0,400);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(6,0.7161454);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(7,0.5005907);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(8,2.990049);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(9,3.530186);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(10,5.114277);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(11,2.896253);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(12,0.891939);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(13,0.7410411);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(15,0.2087757);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(16,0.4448418);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(19,0.2399952);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(20,0.1428);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(21,0.5389592);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(22,0.3251223);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(25,0.4663094);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(30,0.2170818);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(31,0.7871785);
   VbbHcc_algo_Z_mass_stack_8->SetBinContent(41,2.037534);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(6,0.421226);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(7,0.3562157);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(8,0.8515405);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(9,0.9241333);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(10,1.080108);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(11,0.8159031);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(12,0.4460013);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(13,0.4325534);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(15,0.2087757);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(16,0.3145628);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(19,0.2399952);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(20,0.1428);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(21,0.383376);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(22,0.3251223);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(25,0.3298724);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(30,0.2170818);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(31,0.4574889);
   VbbHcc_algo_Z_mass_stack_8->SetBinError(41,0.6871746);
   VbbHcc_algo_Z_mass_stack_8->SetEntries(99);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_mass_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_mass_stack_8->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_mass_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_mass_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_mass_stack_9 = new TH1D("VbbHcc_algo_Z_mass_stack_9","",40,0,400);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(4,0.001104061);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(5,0.02909792);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(6,0.07175068);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(7,0.1777823);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(8,0.3942823);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(9,0.7196639);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(10,1.148078);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(11,1.390341);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(12,1.67732);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(13,1.647552);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(14,1.024069);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(15,0.4503613);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(16,0.2554877);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(17,0.1484089);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(18,0.1275315);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(19,0.1123485);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(20,0.08246341);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(21,0.08488546);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(22,0.07972536);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(23,0.08887455);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(24,0.07917032);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(25,0.05532176);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(26,0.03916008);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(27,0.04359439);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(28,0.08445993);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(29,0.05913451);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(30,0.05380442);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(31,0.06262599);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(32,0.06471214);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(33,0.04479797);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(34,0.04382002);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(35,0.05912661);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(36,0.05610137);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(37,0.05622232);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(38,0.04453581);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(39,0.04051129);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(40,0.03210642);
   VbbHcc_algo_Z_mass_stack_9->SetBinContent(41,2.501497);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(4,0.001104061);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(5,0.009283308);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(6,0.01405072);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(7,0.02283485);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(8,0.0342023);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(9,0.04630637);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(10,0.05767911);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(11,0.06223388);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(12,0.06978115);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(13,0.06794157);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(14,0.05325247);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(15,0.03500683);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(16,0.02589609);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(17,0.01925003);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(18,0.01836167);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(19,0.01807118);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(20,0.01456082);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(21,0.01516103);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(22,0.01452592);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(23,0.02481262);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(24,0.01440671);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(25,0.01228247);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(26,0.009989897);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(27,0.01048748);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(28,0.04135938);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(29,0.01305816);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(30,0.01207579);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(31,0.01292429);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(32,0.01301005);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(33,0.01105702);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(34,0.01047899);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(35,0.01305197);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(36,0.01176118);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(37,0.01213195);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(38,0.01095387);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(39,0.01078683);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(40,0.009167125);
   VbbHcc_algo_Z_mass_stack_9->SetBinError(41,0.09651178);
   VbbHcc_algo_Z_mass_stack_9->SetEntries(5213);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_mass_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_mass_stack_9->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_mass_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_mass_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_mass_stack_10 = new TH1D("VbbHcc_algo_Z_mass_stack_10","",40,0,400);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(4,0.002714327);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(5,0.0201586);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(6,0.04587739);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(7,0.1155331);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(8,0.2816588);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(9,0.5431976);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(10,0.7840018);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(11,0.9763536);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(12,1.161409);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(13,1.080635);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(14,0.7235691);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(15,0.3936267);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(16,0.2192912);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(17,0.1611088);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(18,0.1220992);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(19,0.1109444);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(20,0.0992386);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(21,0.09627481);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(22,0.09579951);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(23,0.09375238);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(24,0.08909818);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(25,0.08673567);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(26,0.06909032);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(27,0.07762911);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(28,0.06786295);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(29,0.07905306);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(30,0.06786435);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(31,0.05641127);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(32,0.05723435);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(33,0.04651428);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(34,0.04909429);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(35,0.05425115);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(36,0.05592618);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(37,0.04096073);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(38,0.03471128);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(39,0.02407775);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(40,0.0481799);
   VbbHcc_algo_Z_mass_stack_10->SetBinContent(41,1.980506);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(4,0.001359947);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(5,0.003626204);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(6,0.005378566);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(7,0.00863254);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(8,0.01337755);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(9,0.0186583);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(10,0.02239907);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(11,0.02499684);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(12,0.02726456);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(13,0.0262619);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(14,0.02152191);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(15,0.01580992);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(16,0.01183301);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(17,0.01012872);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(18,0.008733821);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(19,0.00840159);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(20,0.007949972);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(21,0.007813996);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(22,0.007745664);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(23,0.007615248);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(24,0.007537758);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(25,0.007404736);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(26,0.006550771);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(27,0.007003898);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(28,0.006561809);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(29,0.007053789);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(30,0.006558222);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(31,0.005966205);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(32,0.006017432);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(33,0.00545627);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(34,0.005566152);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(35,0.005917375);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(36,0.005925318);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(37,0.004976519);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(38,0.004732885);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(39,0.003880063);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(40,0.005525319);
   VbbHcc_algo_Z_mass_stack_10->SetBinError(41,0.03550721);
   VbbHcc_algo_Z_mass_stack_10->SetEntries(16167);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_mass_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_mass_stack_10->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_mass_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_mass_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_mass_stack_11 = new TH1D("VbbHcc_algo_Z_mass_stack_11","",40,0,400);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(5,0.002532203);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(6,0.005725839);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(7,0.02705114);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(8,0.04844031);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(9,0.1459739);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(10,0.136962);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(11,0.05794334);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(12,0.03262383);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(13,0.006033989);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(14,0.0009559662);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(15,0.007414725);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(16,0.002532203);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(17,0.002397148);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(18,0.005423581);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(19,0.002840873);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(21,0.002434505);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(22,0.003272863);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(23,0.004849305);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(24,0.003301341);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(27,0.002434505);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(30,0.002499098);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(34,0.002582708);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(39,0.002452157);
   VbbHcc_algo_Z_mass_stack_11->SetBinContent(41,0.07406851);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(5,0.002532203);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(6,0.004059943);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(7,0.008675037);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(8,0.01183825);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(9,0.01994947);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(10,0.01966622);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(11,0.01321215);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(12,0.009151034);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(13,0.004267481);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(14,0.0009559662);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(15,0.00394879);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(16,0.002532203);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(17,0.002397148);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(18,0.003839393);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(19,0.002840873);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(21,0.002434505);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(22,0.003272863);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(23,0.003429197);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(24,0.003301341);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(27,0.002434505);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(30,0.002499098);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(34,0.002582708);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(39,0.002452157);
   VbbHcc_algo_Z_mass_stack_11->SetBinError(41,0.01465107);
   VbbHcc_algo_Z_mass_stack_11->SetEntries(246);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_mass_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_mass_stack_11->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_mass_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_mass_stack_12 = new TH1D("VbbHcc_algo_Z_mass_stack_12","",40,0,400);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(5,0.0006376664);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(6,0.001737759);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(7,0.007085408);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(8,0.02145497);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(9,0.04597513);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(10,0.05813368);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(11,0.02158778);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(12,0.01000533);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(13,0.004021939);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(14,0.002512404);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(15,0.001713909);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(16,0.0006509907);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(17,0.0005614212);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(18,0.0003400733);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(19,0.001671236);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(20,0.001564695);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(22,0.001591846);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(23,0.001485405);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(24,0.0005700614);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(25,0.0008142771);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(26,0.0006439316);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(27,0.001372445);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(28,0.0003895316);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(30,0.0003334233);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(31,0.0004552464);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(33,0.0003262476);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(34,0.001096698);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(35,0.001036082);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(36,0.0008553948);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(37,0.0004346981);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(39,0.0007710216);
   VbbHcc_algo_Z_mass_stack_12->SetBinContent(41,0.0289103);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(5,0.0004618504);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(6,0.0007225702);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(7,0.002379357);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(8,0.00329806);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(9,0.004051124);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(10,0.004534602);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(11,0.002731355);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(12,0.001875479);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(13,0.001205326);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(14,0.0008946788);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(15,0.0007752476);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(16,0.0004603476);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(17,0.0004039234);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(18,0.0003400733);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(19,0.0007034291);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(20,0.0007888961);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(22,0.0007132818);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(23,0.0007483393);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(24,0.0004064574);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(25,0.0005253006);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(26,0.0004556166);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(27,0.0006976216);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(28,0.0003895316);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(30,0.0003334233);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(31,0.0003425851);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(33,0.0003262476);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(34,0.0006389437);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(35,0.0006224908);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(36,0.0005029541);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(37,0.0004346981);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(39,0.0005489684);
   VbbHcc_algo_Z_mass_stack_12->SetBinError(41,0.003189225);
   VbbHcc_algo_Z_mass_stack_12->SetEntries(653);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_mass_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_mass_stack_12->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_mass_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_mass_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_mass__197 = new TH1D("VbbHcc_algo_Z_mass__197","",40,0,400);
   VbbHcc_algo_Z_mass__197->SetBinContent(3,2);
   VbbHcc_algo_Z_mass__197->SetBinContent(4,268);
   VbbHcc_algo_Z_mass__197->SetBinContent(5,2967);
   VbbHcc_algo_Z_mass__197->SetBinContent(6,8496);
   VbbHcc_algo_Z_mass__197->SetBinContent(7,12764);
   VbbHcc_algo_Z_mass__197->SetBinContent(8,14605);
   VbbHcc_algo_Z_mass__197->SetBinContent(9,14297);
   VbbHcc_algo_Z_mass__197->SetBinContent(10,13915);
   VbbHcc_algo_Z_mass__197->SetBinContent(11,13189);
   VbbHcc_algo_Z_mass__197->SetBinContent(12,12141);
   VbbHcc_algo_Z_mass__197->SetBinContent(13,11396);
   VbbHcc_algo_Z_mass__197->SetBinContent(14,10681);
   VbbHcc_algo_Z_mass__197->SetBinContent(15,10215);
   VbbHcc_algo_Z_mass__197->SetBinContent(16,9394);
   VbbHcc_algo_Z_mass__197->SetBinContent(17,8941);
   VbbHcc_algo_Z_mass__197->SetBinContent(18,8006);
   VbbHcc_algo_Z_mass__197->SetBinContent(19,7423);
   VbbHcc_algo_Z_mass__197->SetBinContent(20,6765);
   VbbHcc_algo_Z_mass__197->SetBinContent(21,6071);
   VbbHcc_algo_Z_mass__197->SetBinContent(22,5675);
   VbbHcc_algo_Z_mass__197->SetBinContent(23,5239);
   VbbHcc_algo_Z_mass__197->SetBinContent(24,4719);
   VbbHcc_algo_Z_mass__197->SetBinContent(25,4281);
   VbbHcc_algo_Z_mass__197->SetBinContent(26,3999);
   VbbHcc_algo_Z_mass__197->SetBinContent(27,3720);
   VbbHcc_algo_Z_mass__197->SetBinContent(28,3391);
   VbbHcc_algo_Z_mass__197->SetBinContent(29,3229);
   VbbHcc_algo_Z_mass__197->SetBinContent(30,2943);
   VbbHcc_algo_Z_mass__197->SetBinContent(31,2746);
   VbbHcc_algo_Z_mass__197->SetBinContent(32,2489);
   VbbHcc_algo_Z_mass__197->SetBinContent(33,2364);
   VbbHcc_algo_Z_mass__197->SetBinContent(34,2229);
   VbbHcc_algo_Z_mass__197->SetBinContent(35,2135);
   VbbHcc_algo_Z_mass__197->SetBinContent(36,2002);
   VbbHcc_algo_Z_mass__197->SetBinContent(37,1907);
   VbbHcc_algo_Z_mass__197->SetBinContent(38,1820);
   VbbHcc_algo_Z_mass__197->SetBinContent(39,1720);
   VbbHcc_algo_Z_mass__197->SetBinContent(40,1646);
   VbbHcc_algo_Z_mass__197->SetBinContent(41,73281);
   VbbHcc_algo_Z_mass__197->SetEntries(303071);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass__197->SetLineColor(ci);
   VbbHcc_algo_Z_mass__197->SetLineWidth(2);
   VbbHcc_algo_Z_mass__197->SetMarkerStyle(20);
   VbbHcc_algo_Z_mass__197->SetMarkerSize(1.2);
   VbbHcc_algo_Z_mass__197->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass__197->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__197->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass__197->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass__197->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__197->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__197->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass__197->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass__197->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_mass__197->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__197->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__197->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass__197->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass__197->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__197->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_mass_fx1197[40] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_mass_fy1197[40] = {
   0,
   0,
   0.1013315,
   94.18238,
   3213.561,
   10553.12,
   8326.775,
   9345.39,
   11156.95,
   10653.79,
   10504.3,
   10651.15,
   10368.06,
   8428.477,
   8049.962,
   6158.953,
   6779.903,
   5223.905,
   4641.168,
   4553.021,
   5876.629,
   4208.009,
   4170.903,
   2960.354,
   3566.696,
   2805.359,
   2679.065,
   2346.213,
   1387.858,
   1859.607,
   2310.935,
   1136.62,
   1494.272,
   1943.31,
   1201.842,
   1471.73,
   1574.502,
   1017.757,
   1255.888,
   1034.592};
   Double_t Graph_from_VbbHcc_algo_Z_mass_fex1197[40] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_mass_fey1197[40] = {
   0,
   0,
   0.07165284,
   52.40452,
   947.416,
   3463.455,
   1197.797,
   1334.991,
   1386.777,
   1251.522,
   1149.255,
   1357.988,
   1333.517,
   1117.046,
   1072.94,
   714.9509,
   1118.94,
   747.9458,
   527.78,
   812.4264,
   1075.945,
   766.6127,
   1777.109,
   453.5626,
   685.8793,
   646.4472,
   597.8836,
   403.1147,
   135.5684,
   429.5822,
   472.6301,
   133.228,
   393.1673,
   682.3761,
   124.2256,
   449.6647,
   452.0707,
   120.8981,
   376.7607,
   336.2618};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_algo_Z_mass_fx1197,Graph_from_VbbHcc_algo_Z_mass_fy1197,Graph_from_VbbHcc_algo_Z_mass_fex1197,Graph_from_VbbHcc_algo_Z_mass_fey1197);
   gre->SetName("Graph_from_VbbHcc_algo_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_mass1197 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_mass1197","",100,0,440);
   Graph_Graph_from_VbbHcc_algo_Z_mass1197->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Z_mass1197->SetMaximum(15418.23);
   Graph_Graph_from_VbbHcc_algo_Z_mass1197->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_mass1197->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_mass1197->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_mass1197->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_mass1197->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_mass1197->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_mass1197->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_mass1197->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_mass1197->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_mass1197->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_mass1197->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_mass1197->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_mass1197->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_mass1197->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_mass1197->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_mass1197->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_mass1197);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_mass","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_mass_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_mass_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_mass_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_mass_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_mass_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_mass_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_mass_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_mass_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_mass_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_mass_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_mass_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_mass_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_mass","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_mass_algo_18->cd();
  
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
   
   TH1D *data_mc_ratio__198 = new TH1D("data_mc_ratio__198","",40,0,400);
   data_mc_ratio__198->SetBinContent(3,19.7372);
   data_mc_ratio__198->SetBinContent(4,2.845543);
   data_mc_ratio__198->SetBinContent(5,0.9232748);
   data_mc_ratio__198->SetBinContent(6,0.80507);
   data_mc_ratio__198->SetBinContent(7,1.532886);
   data_mc_ratio__198->SetBinContent(8,1.562803);
   data_mc_ratio__198->SetBinContent(9,1.281443);
   data_mc_ratio__198->SetBinContent(10,1.306108);
   data_mc_ratio__198->SetBinContent(11,1.255581);
   data_mc_ratio__198->SetBinContent(12,1.139876);
   data_mc_ratio__198->SetBinContent(13,1.099145);
   data_mc_ratio__198->SetBinContent(14,1.267251);
   data_mc_ratio__198->SetBinContent(15,1.26895);
   data_mc_ratio__198->SetBinContent(16,1.525259);
   data_mc_ratio__198->SetBinContent(17,1.31875);
   data_mc_ratio__198->SetBinContent(18,1.53257);
   data_mc_ratio__198->SetBinContent(19,1.599382);
   data_mc_ratio__198->SetBinContent(20,1.485827);
   data_mc_ratio__198->SetBinContent(21,1.033075);
   data_mc_ratio__198->SetBinContent(22,1.348619);
   data_mc_ratio__198->SetBinContent(23,1.256083);
   data_mc_ratio__198->SetBinContent(24,1.594066);
   data_mc_ratio__198->SetBinContent(25,1.200271);
   data_mc_ratio__198->SetBinContent(26,1.425486);
   data_mc_ratio__198->SetBinContent(27,1.388544);
   data_mc_ratio__198->SetBinContent(28,1.445308);
   data_mc_ratio__198->SetBinContent(29,2.326607);
   data_mc_ratio__198->SetBinContent(30,1.582592);
   data_mc_ratio__198->SetBinContent(31,1.188264);
   data_mc_ratio__198->SetBinContent(32,2.189825);
   data_mc_ratio__198->SetBinContent(33,1.582042);
   data_mc_ratio__198->SetBinContent(34,1.147012);
   data_mc_ratio__198->SetBinContent(35,1.77644);
   data_mc_ratio__198->SetBinContent(36,1.360304);
   data_mc_ratio__198->SetBinContent(37,1.211176);
   data_mc_ratio__198->SetBinContent(38,1.788246);
   data_mc_ratio__198->SetBinContent(39,1.369549);
   data_mc_ratio__198->SetBinContent(40,1.590966);
   data_mc_ratio__198->SetBinContent(41,1.367442);
   data_mc_ratio__198->SetBinError(3,13.95631);
   data_mc_ratio__198->SetBinError(4,0.1738192);
   data_mc_ratio__198->SetBinError(5,0.0169501);
   data_mc_ratio__198->SetBinError(6,0.008734266);
   data_mc_ratio__198->SetBinError(7,0.01356802);
   data_mc_ratio__198->SetBinError(8,0.01293163);
   data_mc_ratio__198->SetBinError(9,0.01071709);
   data_mc_ratio__198->SetBinError(10,0.01107229);
   data_mc_ratio__198->SetBinError(11,0.01093298);
   data_mc_ratio__198->SetBinError(12,0.010345);
   data_mc_ratio__198->SetBinError(13,0.01029624);
   data_mc_ratio__198->SetBinError(14,0.01226187);
   data_mc_ratio__198->SetBinError(15,0.01255525);
   data_mc_ratio__198->SetBinError(16,0.01573687);
   data_mc_ratio__198->SetBinError(17,0.01394664);
   data_mc_ratio__198->SetBinError(18,0.01712823);
   data_mc_ratio__198->SetBinError(19,0.01856361);
   data_mc_ratio__198->SetBinError(20,0.01806485);
   data_mc_ratio__198->SetBinError(21,0.01325873);
   data_mc_ratio__198->SetBinError(22,0.01790219);
   data_mc_ratio__198->SetBinError(23,0.01735378);
   data_mc_ratio__198->SetBinError(24,0.02320499);
   data_mc_ratio__198->SetBinError(25,0.01834453);
   data_mc_ratio__198->SetBinError(26,0.02254173);
   data_mc_ratio__198->SetBinError(27,0.02276608);
   data_mc_ratio__198->SetBinError(28,0.0248197);
   data_mc_ratio__198->SetBinError(29,0.04094388);
   data_mc_ratio__198->SetBinError(30,0.02917252);
   data_mc_ratio__198->SetBinError(31,0.0226758);
   data_mc_ratio__198->SetBinError(32,0.04389318);
   data_mc_ratio__198->SetBinError(33,0.03253825);
   data_mc_ratio__198->SetBinError(34,0.02429478);
   data_mc_ratio__198->SetBinError(35,0.03844603);
   data_mc_ratio__198->SetBinError(36,0.03040213);
   data_mc_ratio__198->SetBinError(37,0.02773525);
   data_mc_ratio__198->SetBinError(38,0.04191713);
   data_mc_ratio__198->SetBinError(39,0.03302275);
   data_mc_ratio__198->SetBinError(40,0.03921444);
   data_mc_ratio__198->SetBinError(41,0.09069527);
   data_mc_ratio__198->SetMinimum(0.4);
   data_mc_ratio__198->SetMaximum(1.6);
   data_mc_ratio__198->SetEntries(13.60002);
   data_mc_ratio__198->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__198->SetLineColor(ci);
   data_mc_ratio__198->SetLineWidth(2);
   data_mc_ratio__198->SetMarkerStyle(20);
   data_mc_ratio__198->SetMarkerSize(1.2);
   data_mc_ratio__198->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__198->GetXaxis()->SetRange(1,30);
   data_mc_ratio__198->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__198->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__198->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__198->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__198->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__198->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__198->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__198->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__198->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__198->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__198->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__198->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__198->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__198->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__198->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__198->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__198->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1198[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1198[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1198[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1198[40] = {
   0,
   0,
   0.7071133,
   0.5564153,
   0.2948181,
   0.3281926,
   0.1438488,
   0.1428502,
   0.1242971,
   0.117472,
   0.109408,
   0.1274968,
   0.1286178,
   0.1325323,
   0.1332851,
   0.1160832,
   0.1650378,
   0.1431775,
   0.1137171,
   0.1784368,
   0.1830889,
   0.1821794,
   0.426073,
   0.1532123,
   0.192301,
   0.230433,
   0.2231687,
   0.171815,
   0.09768174,
   0.2310069,
   0.204519,
   0.1172141,
   0.2631164,
   0.3511411,
   0.1033627,
   0.3055348,
   0.2871197,
   0.1187888,
   0.2999954,
   0.3250189};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1198,Graph_from_mc_statistical_error_fy1198,Graph_from_mc_statistical_error_fex1198,Graph_from_mc_statistical_error_fey1198);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1198 = new TH1F("Graph_Graph_from_mc_statistical_error1198","",100,0,440);
   Graph_Graph_from_mc_statistical_error1198->SetMinimum(0.151464);
   Graph_Graph_from_mc_statistical_error1198->SetMaximum(1.848536);
   Graph_Graph_from_mc_statistical_error1198->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1198->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1198->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1198->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1198->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1198->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1198->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1198->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1198->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1198->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1198->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1198->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1198->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1198->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1198->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1198->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1198);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_algo_18->cd();
   Z_mass_algo_18->Modified();
   Z_mass_algo_18->cd();
   Z_mass_algo_18->SetSelected(Z_mass_algo_18);
}
