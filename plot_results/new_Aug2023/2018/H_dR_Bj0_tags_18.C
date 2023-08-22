void H_dR_Bj0_tags_18()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_18/H_dR_Bj0_tags_18
//=========  (Tue Aug 22 09:20:34 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_tags_18 = new TCanvas("H_dR_Bj0_tags_18", "H_dR_Bj0_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_tags_18->SetHighLightColor(2);
   H_dR_Bj0_tags_18->Range(0,0,1,1);
   H_dR_Bj0_tags_18->SetFillColor(0);
   H_dR_Bj0_tags_18->SetFillStyle(4000);
   H_dR_Bj0_tags_18->SetBorderMode(0);
   H_dR_Bj0_tags_18->SetBorderSize(2);
   H_dR_Bj0_tags_18->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-97.33593,6.314516,97248.59);
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
   st->SetMaximum(83346.67);
   
   TH1F *st_stack_43 = new TH1F("st_stack_43","",30,0,6);
   st_stack_43->SetMinimum(0.01);
   st_stack_43->SetMaximum(87514);
   st_stack_43->SetDirectory(0);
   st_stack_43->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_43->SetLineColor(ci);
   st_stack_43->GetXaxis()->SetRange(1,30);
   st_stack_43->GetXaxis()->SetLabelFont(42);
   st_stack_43->GetXaxis()->SetLabelSize(0.035);
   st_stack_43->GetXaxis()->SetTitleSize(0.035);
   st_stack_43->GetXaxis()->SetTitleFont(42);
   st_stack_43->GetYaxis()->SetTitle("Events/0.2");
   st_stack_43->GetYaxis()->SetLabelFont(42);
   st_stack_43->GetYaxis()->SetLabelSize(0.05);
   st_stack_43->GetYaxis()->SetTitleSize(0.057);
   st_stack_43->GetYaxis()->SetTitleOffset(1.2);
   st_stack_43->GetYaxis()->SetTitleFont(42);
   st_stack_43->GetZaxis()->SetLabelFont(42);
   st_stack_43->GetZaxis()->SetLabelSize(0.035);
   st_stack_43->GetZaxis()->SetTitleSize(0.035);
   st_stack_43->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_43);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(1,5338.318);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(2,25078.9);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(3,27774.02);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(4,20579.36);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(5,18307.79);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(6,14789.03);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(7,15801.46);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(8,12108.51);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(9,10058.63);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(10,9619.142);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(11,7674.383);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(12,7445.147);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(13,7663.696);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(14,5424.227);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(15,3493.49);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(16,4956.907);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(17,3363.718);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(18,3217.494);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(19,2010.348);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(20,1536.914);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(21,1617.631);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(22,1171.065);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(23,2682.436);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(24,1107.595);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(25,485.8654);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(26,311.9495);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(27,110.9066);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(28,147.0742);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(29,17.09866);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(30,119.0897);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(31,189.5161);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(1,702.6285);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(2,2021.383);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(3,2304.364);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(4,2026.774);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(5,1881.294);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(6,1749.046);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(7,1896.811);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(8,2197.864);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(9,1340.107);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(10,2122.473);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(11,1213.632);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(12,1101.136);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(13,1263.233);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(14,951.0128);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(15,580.1551);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(16,944.0783);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(17,772.4721);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(18,769.8094);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(19,419.8631);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(20,404.064);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(21,544.2098);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(22,393.9184);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(23,1818.058);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(24,396.0194);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(25,107.7032);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(26,82.95146);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(27,41.47519);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(28,46.02862);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(29,11.9776);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(30,58.93302);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(31,75.66316);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetEntries(9459);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(1,35.11207);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(2,138.7165);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(3,153.243);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(4,126.5482);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(5,115.4133);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(6,94.67919);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(7,82.74093);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(8,68.37746);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(9,62.18984);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(10,52.40044);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(11,45.6206);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(12,48.59112);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(13,43.25713);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(14,38.12323);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(15,31.55617);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(16,25.81558);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(17,23.05531);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(18,19.0633);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(19,15.71288);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(20,11.80501);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(21,10.3931);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(22,8.090481);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(23,8.832918);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(24,4.943642);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(25,5.372394);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(26,2.800656);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(27,2.391429);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(28,2.009499);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(29,1.410063);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(30,0.7614933);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(31,1.285492);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(1,2.476582);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(2,4.781464);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(3,5.004489);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(4,4.584295);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(5,4.367718);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(6,3.91567);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(7,3.758539);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(8,3.370387);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(9,3.211256);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(10,2.9831);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(11,2.602606);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(12,2.916199);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(13,2.693036);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(14,2.489237);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(15,2.250361);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(16,1.979022);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(17,1.809804);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(18,1.723748);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(19,1.55161);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(20,1.332899);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(21,1.280032);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(22,1.12586);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(23,1.197989);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(24,0.799575);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(25,1.036024);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(26,0.5811806);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(27,0.6095941);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(28,0.5894212);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(29,0.5066431);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(30,0.3203801);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(31,0.4407991);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetEntries(14001);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_3 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(1,521.027);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(2,2488.032);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(3,3155.334);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(4,2907.627);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(5,2380.526);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(6,1949.752);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(7,1563.366);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(8,1334.285);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(9,1152.477);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(10,1048.056);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(11,940.4605);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(12,855.6712);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(13,789.2742);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(14,696.8353);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(15,626.2679);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(16,545.4774);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(17,452.4284);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(18,357.4055);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(19,301.4512);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(20,248.2076);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(21,204.3853);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(22,152.7344);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(23,122.8117);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(24,95.98451);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(25,69.55215);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(26,54.72771);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(27,37.49434);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(28,27.08577);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(29,15.12522);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(30,10.32722);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(31,17.48613);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(1,5.918476);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(2,12.96047);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(3,14.64517);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(4,14.08571);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(5,12.73569);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(6,11.52538);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(7,10.31151);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(8,9.521562);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(9,8.857366);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(10,8.442822);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(11,8.006726);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(12,7.637415);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(13,7.331716);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(14,6.897002);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(15,6.526472);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(16,6.088449);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(17,5.542047);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(18,4.923572);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(19,4.518896);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(20,4.105746);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(21,3.718943);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(22,3.204667);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(23,2.869478);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(24,2.530192);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(25,2.164661);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(26,1.918356);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(27,1.586502);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(28,1.33938);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(29,1.002426);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(30,0.8348894);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(31,1.075257);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetEntries(383722);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_4 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(1,100.9626);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(2,385.2806);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(3,442.3887);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(4,340.9468);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(5,267.1095);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(6,240.0079);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(7,185.0331);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(8,180.641);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(9,141.1139);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(10,127.0529);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(11,125.4386);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(12,114.058);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(13,99.8882);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(14,100.4404);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(15,78.14306);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(16,70.34623);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(17,58.3388);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(18,42.50361);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(19,44.57603);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(20,34.61186);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(21,24.09527);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(22,16.22837);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(23,19.67642);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(24,13.10565);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(25,9.673286);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(26,5.490954);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(27,5.389607);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(28,3.371566);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(29,1.124199);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(30,1.86706);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(31,1.781914);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(1,4.441133);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(2,13.33279);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(3,16.73816);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(4,12.78355);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(5,11.92203);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(6,9.472857);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(7,9.960037);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(8,10.68451);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(9,7.492806);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(10,7.186059);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(11,6.121345);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(12,8.774835);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(13,7.628548);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(14,7.721351);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(15,6.076676);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(16,5.908698);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(17,5.54036);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(18,3.438405);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(19,3.698275);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(20,4.914406);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(21,2.724027);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(22,1.976375);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(23,4.527847);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(24,4.298934);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(25,1.488922);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(26,1.169194);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(27,1.158892);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(28,0.7665998);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(29,0.3451014);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(30,0.6470375);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(31,0.758755);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetEntries(17726);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_5 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(1,9.621586);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(2,32.86047);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(3,36.70243);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(4,38.07358);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(5,26.10365);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(6,26.16607);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(7,22.86495);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(8,16.77416);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(9,13.09289);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(10,13.83829);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(11,7.699442);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(12,12.54276);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(13,14.41915);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(14,9.331053);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(15,6.921271);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(16,6.850668);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(17,3.374921);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(18,6.063756);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(19,4.417507);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(20,1.633174);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(21,2.980902);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(22,1.878529);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(23,2.124242);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(24,0.9385532);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(25,1.078793);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(26,1.033146);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(27,0.5283189);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(28,0.2980898);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(29,0.3430468);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(30,0.1265664);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(31,0.3796991);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(1,1.279777);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(2,4.460021);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(3,5.327923);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(4,11.92252);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(5,4.53818);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(6,4.710192);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(7,4.64412);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(8,3.472472);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(9,2.646258);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(10,3.381447);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(11,1.220455);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(12,3.299894);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(13,4.4359);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(14,2.482937);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(15,2.354034);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(16,1.155574);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(17,0.8764717);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(18,2.307914);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(19,2.216721);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(20,0.5906498);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(21,0.8289533);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(22,0.6819179);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(23,0.598184);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(24,0.3968676);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(25,0.4301307);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(26,0.5434988);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(27,0.2540916);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(28,0.1845514);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(29,0.1899483);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(30,0.1265664);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(31,0.2192194);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetEntries(2023);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(1,0.5709342);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(16,0.5709342);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(1,0.5709342);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(16,0.5709342);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetEntries(2);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(1,1.416796);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(2,2.833593);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(3,1.416796);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(4,0.7083982);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(5,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(7,1.062597);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(9,0.7083982);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(12,0.7083982);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(13,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(15,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(17,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(18,0.7083982);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(27,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(1,0.7083982);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(2,1.001826);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(3,0.7083982);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(4,0.5009132);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(5,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(7,0.6134909);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(9,0.5009132);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(12,0.5009132);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(13,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(15,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(17,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(18,0.5009132);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(27,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetEntries(32);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(1,1.117657);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(2,6.985359);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(3,8.941259);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(4,9.500088);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(5,5.308873);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(6,3.073558);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(7,1.117657);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(8,1.397072);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(9,3.073558);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(10,3.632387);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(11,4.191215);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(12,2.794144);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(13,3.073558);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(14,3.073558);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(15,2.235315);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(16,0.8382431);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(17,1.117657);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(18,0.8382431);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(19,0.8382431);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(24,0.5588287);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(26,0.2794144);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(1,0.5588287);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(2,1.397072);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(3,1.580606);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(4,1.629252);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(5,1.217939);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(6,0.9267126);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(7,0.5588287);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(8,0.6247895);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(9,0.9267126);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(10,1.007443);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(11,1.082167);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(12,0.8835858);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(13,0.9267126);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(14,0.9267126);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(15,0.7903031);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(16,0.4839599);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(17,0.5588287);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(18,0.4839599);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(19,0.4839599);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(23,0.2794144);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(24,0.3951516);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(26,0.2794144);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetEntries(230);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_9 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(1,1.61932);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(2,8.042718);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(3,9.114702);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(4,7.495382);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(5,5.575453);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(6,4.188679);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(7,3.35775);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(8,2.779219);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(9,2.552344);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(10,2.765039);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(11,2.623242);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(12,2.464429);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(13,2.3595);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(14,1.936945);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(15,1.443492);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(16,1.023773);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(17,0.7713749);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(18,0.5331562);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(19,0.314789);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(20,0.2609062);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(21,0.2467265);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(22,0.2126953);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(23,0.1332891);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(24,0.1446328);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(25,0.1332891);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(26,0.07373437);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(27,0.05955468);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(28,0.01134375);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(29,0.002835937);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(30,0.01134375);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(31,0.005671875);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(1,0.06776644);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(2,0.1510253);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(3,0.1607754);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(4,0.1457959);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(5,0.1257443);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(6,0.1089901);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(7,0.09758262);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(8,0.08877888);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(9,0.08507812);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(10,0.08855211);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(11,0.08625166);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(12,0.08360004);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(13,0.08180094);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(14,0.07411515);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(15,0.06398166);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(16,0.05388281);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(17,0.04677148);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(18,0.03888441);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(19,0.02987845);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(20,0.02720135);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(21,0.02645186);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(22,0.02455994);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(23,0.01944221);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(24,0.02025264);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(25,0.01944221);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(26,0.0144605);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(27,0.0129959);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(28,0.005671875);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(29,0.002835937);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(30,0.005671875);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(31,0.004010621);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetEntries(21953);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_10 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(1,0.6681175);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(2,3.296753);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(3,4.276659);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(4,3.804381);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(5,2.86124);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(6,2.092021);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(7,1.595705);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(8,1.365222);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(9,1.224529);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(10,1.096561);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(11,1.098682);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(12,0.9905107);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(13,0.8894093);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(14,0.793964);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(15,0.6433724);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(16,0.5182329);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(17,0.4242016);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(18,0.3075462);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(19,0.2467439);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(20,0.1880627);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(21,0.1470566);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(22,0.1201905);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(23,0.09827337);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(24,0.07423528);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(25,0.04595517);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(26,0.02898711);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(27,0.0254521);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(28,0.009898037);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(29,0.008484032);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(30,0.002828011);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(31,0.007070027);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(1,0.02173386);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(2,0.0482785);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(3,0.05498736);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(4,0.05186239);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(5,0.04497671);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(6,0.03845861);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(7,0.03358821);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(8,0.03106792);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(9,0.02942354);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(10,0.0278437);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(11,0.02787062);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(12,0.02646306);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(13,0.02507618);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(14,0.0236925);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(15,0.02132759);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(16,0.01914137);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(17,0.01731796);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(18,0.01474571);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(19,0.0132079);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(20,0.01153086);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(21,0.01019654);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(22,0.009218187);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(23,0.008335438);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(24,0.007244621);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(25,0.005700038);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(26,0.004527026);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(27,0.004242016);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(28,0.002645362);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(29,0.002449129);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(30,0.001414005);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(31,0.002235739);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetEntries(40948);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(1,0.004551524);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(2,0.02503338);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(3,0.0295849);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(4,0.02275762);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(5,0.0182061);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(6,0.009103048);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(7,0.01137881);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(8,0.006827286);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(9,0.002275762);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(10,0.002275762);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(11,0.006827286);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(14,0.004551524);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(15,0.004551524);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(16,0.002275762);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(17,0.004551524);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(19,0.004551524);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(20,0.006827286);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(21,0.002275762);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(22,0.006827286);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(1,0.003218413);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(2,0.007547848);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(3,0.008205376);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(4,0.007196591);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(5,0.006436827);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(6,0.004551524);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(7,0.005088758);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(8,0.003941735);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(9,0.002275762);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(10,0.002275762);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(11,0.003941735);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(14,0.003218413);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(15,0.003218413);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(16,0.002275762);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(17,0.003218413);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(19,0.003218413);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(20,0.003941735);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(21,0.002275762);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(22,0.003941735);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetEntries(77);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(1,0.001797941);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(2,0.01378421);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(3,0.01857872);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(4,0.0110873);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(5,0.009888674);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(6,0.008690047);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(7,0.003296225);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(8,0.005393822);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(9,0.002097598);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(10,0.002996568);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(11,0.002996568);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(12,0.0005993136);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(13,0.0005993136);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(14,0.0008989704);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(15,0.001198627);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(16,0.001198627);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(17,0.0005993136);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(18,0.0008989704);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(19,0.0005993136);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(20,0.0005993136);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(24,0.0002996568);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(25,0.0005993136);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(26,0.0002996568);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(27,0.0002996568);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(1,0.0007340063);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(2,0.002032371);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(3,0.0023595);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(4,0.001822741);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(5,0.001721397);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(6,0.001613701);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(7,0.0009938492);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(8,0.001271336);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(9,0.0007928174);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(10,0.000947598);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(11,0.000947598);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(12,0.0004237787);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(13,0.0004237787);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(14,0.0005190208);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(15,0.0005993136);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(16,0.0005993136);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(17,0.0004237787);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(18,0.0005190208);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(19,0.0004237787);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(20,0.0004237787);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(24,0.0002996568);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(25,0.0004237787);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(26,0.0002996568);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(27,0.0002996568);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetEntries(298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_Bj0__117 = new TH1D("VbbHcc_tags_H_dR_Bj0__117","",30,0,6);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(1,8843);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(2,36801);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(3,37506);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(4,31002);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(5,26454);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(6,21661);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(7,18178);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(8,15912);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(9,13973);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(10,12644);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(11,11519);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(12,10643);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(13,9725);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(14,8745);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(15,8043);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(16,6987);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(17,5669);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(18,4780);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(19,3867);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(20,3214);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(21,2599);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(22,2139);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(23,1753);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(24,1386);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(25,1065);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(26,773);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(27,614);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(28,409);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(29,243);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(30,154);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(31,273);
   VbbHcc_tags_H_dR_Bj0__117->SetEntries(307603);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0__117->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0__117->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj0__117->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj0__117->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj0__117->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0__117->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__117->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__117->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__117->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__117->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__117->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__117->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__117->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0__117->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__117->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__117->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__117->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__117->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__117->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fx1085[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fy1085[30] = {
   6010.441,
   28144.99,
   31585.49,
   24014.1,
   21111.07,
   17109.01,
   17662.61,
   13714.14,
   11435.07,
   10867.99,
   8801.525,
   8482.968,
   8617.212,
   6274.767,
   4241.06,
   5608.352,
   3903.588,
   3644.919,
   2377.911,
   1833.628,
   1859.881,
   1350.337,
   2836.393,
   1223.345,
   571.7219,
   376.3844,
   157.1498,
   179.8603,
   35.11251,
   132.1862};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fex1085[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fey1085[30] = {
   702.6738,
   2021.48,
   2304.483,
   2026.904,
   1881.386,
   1749.121,
   1896.874,
   2197.916,
   1340.164,
   2122.507,
   1213.677,
   1101.207,
   1263.289,
   951.0761,
   580.2334,
   944.1195,
   772.5148,
   769.8385,
   419.9127,
   404.1173,
   544.2315,
   393.9386,
   1818.067,
   396.052,
   107.7411,
   82.98617,
   41.52846,
   46.05863,
   12.03659,
   58.94349};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj0_fx1085,Graph_from_VbbHcc_tags_H_dR_Bj0_fy1085,Graph_from_VbbHcc_tags_H_dR_Bj0_fex1085,Graph_from_VbbHcc_tags_H_dR_Bj0_fey1085);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->SetMinimum(20.76832);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->SetMaximum(37276.66);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_Bj0","MC unc. (stat.)","fl");

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
   H_dR_Bj0_tags_18->cd();
  
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
   
   TH1D *data_mc_ratio__118 = new TH1D("data_mc_ratio__118","",30,0,6);
   data_mc_ratio__118->SetBinContent(1,1.471273);
   data_mc_ratio__118->SetBinContent(2,1.307551);
   data_mc_ratio__118->SetBinContent(3,1.187444);
   data_mc_ratio__118->SetBinContent(4,1.290992);
   data_mc_ratio__118->SetBinContent(5,1.253087);
   data_mc_ratio__118->SetBinContent(6,1.266058);
   data_mc_ratio__118->SetBinContent(7,1.02918);
   data_mc_ratio__118->SetBinContent(8,1.160262);
   data_mc_ratio__118->SetBinContent(9,1.221943);
   data_mc_ratio__118->SetBinContent(10,1.163417);
   data_mc_ratio__118->SetBinContent(11,1.30875);
   data_mc_ratio__118->SetBinContent(12,1.254632);
   data_mc_ratio__118->SetBinContent(13,1.128555);
   data_mc_ratio__118->SetBinContent(14,1.393677);
   data_mc_ratio__118->SetBinContent(15,1.89646);
   data_mc_ratio__118->SetBinContent(16,1.245821);
   data_mc_ratio__118->SetBinContent(17,1.452254);
   data_mc_ratio__118->SetBinContent(18,1.311415);
   data_mc_ratio__118->SetBinContent(19,1.626218);
   data_mc_ratio__118->SetBinContent(20,1.752809);
   data_mc_ratio__118->SetBinContent(21,1.397401);
   data_mc_ratio__118->SetBinContent(22,1.584049);
   data_mc_ratio__118->SetBinContent(23,0.6180386);
   data_mc_ratio__118->SetBinContent(24,1.132959);
   data_mc_ratio__118->SetBinContent(25,1.862794);
   data_mc_ratio__118->SetBinContent(26,2.053751);
   data_mc_ratio__118->SetBinContent(27,3.907099);
   data_mc_ratio__118->SetBinContent(28,2.273987);
   data_mc_ratio__118->SetBinContent(29,6.920611);
   data_mc_ratio__118->SetBinContent(30,1.165023);
   data_mc_ratio__118->SetBinContent(31,1.297146);
   data_mc_ratio__118->SetBinError(1,0.01564565);
   data_mc_ratio__118->SetBinError(2,0.006815986);
   data_mc_ratio__118->SetBinError(3,0.006131444);
   data_mc_ratio__118->SetBinError(4,0.007332104);
   data_mc_ratio__118->SetBinError(5,0.007704341);
   data_mc_ratio__118->SetBinError(6,0.008602296);
   data_mc_ratio__118->SetBinError(7,0.007633403);
   data_mc_ratio__118->SetBinError(8,0.009198006);
   data_mc_ratio__118->SetBinError(9,0.01033728);
   data_mc_ratio__118->SetBinError(10,0.01034649);
   data_mc_ratio__118->SetBinError(11,0.01219409);
   data_mc_ratio__118->SetBinError(12,0.01216142);
   data_mc_ratio__118->SetBinError(13,0.011444);
   data_mc_ratio__118->SetBinError(14,0.01490329);
   data_mc_ratio__118->SetBinError(15,0.02114631);
   data_mc_ratio__118->SetBinError(16,0.01490425);
   data_mc_ratio__118->SetBinError(17,0.01928809);
   data_mc_ratio__118->SetBinError(18,0.0189682);
   data_mc_ratio__118->SetBinError(19,0.0261512);
   data_mc_ratio__118->SetBinError(20,0.03091803);
   data_mc_ratio__118->SetBinError(21,0.02741056);
   data_mc_ratio__118->SetBinError(22,0.03425021);
   data_mc_ratio__118->SetBinError(23,0.0147613);
   data_mc_ratio__118->SetBinError(24,0.03043214);
   data_mc_ratio__118->SetBinError(25,0.05708079);
   data_mc_ratio__118->SetBinError(26,0.0738683);
   data_mc_ratio__118->SetBinError(27,0.1576777);
   data_mc_ratio__118->SetBinError(28,0.1124414);
   data_mc_ratio__118->SetBinError(29,0.4439574);
   data_mc_ratio__118->SetBinError(30,0.09388026);
   data_mc_ratio__118->SetBinError(31,0.4729779);
   data_mc_ratio__118->SetMinimum(0.4);
   data_mc_ratio__118->SetMaximum(1.6);
   data_mc_ratio__118->SetEntries(262.0352);
   data_mc_ratio__118->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__118->SetLineColor(ci);
   data_mc_ratio__118->SetLineWidth(2);
   data_mc_ratio__118->SetMarkerStyle(20);
   data_mc_ratio__118->SetMarkerSize(1.2);
   data_mc_ratio__118->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__118->GetXaxis()->SetRange(1,30);
   data_mc_ratio__118->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__118->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__118->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__118->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__118->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__118->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__118->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__118->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__118->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__118->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__118->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__118->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__118->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__118->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__118->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__118->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__118->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1086[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1086[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1086[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1086[30] = {
   0.1169089,
   0.0718238,
   0.0729602,
   0.08440474,
   0.08911848,
   0.1022339,
   0.1073949,
   0.1602664,
   0.1171977,
   0.195299,
   0.137894,
   0.1298139,
   0.1466006,
   0.1515715,
   0.1368133,
   0.1683417,
   0.1978986,
   0.2112087,
   0.176589,
   0.2203923,
   0.2926162,
   0.2917336,
   0.6409784,
   0.323745,
   0.1884501,
   0.2204825,
   0.2642603,
   0.25608,
   0.3428007,
   0.4459127};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1086,Graph_from_mc_statistical_error_fy1086,Graph_from_mc_statistical_error_fex1086,Graph_from_mc_statistical_error_fey1086);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1086 = new TH1F("Graph_Graph_from_mc_statistical_error1086","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1086->SetMinimum(0.2308259);
   Graph_Graph_from_mc_statistical_error1086->SetMaximum(1.769174);
   Graph_Graph_from_mc_statistical_error1086->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1086->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1086->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1086->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1086->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1086->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1086->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1086->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1086->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1086->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1086->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1086->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1086->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1086->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1086->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1086->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1086);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_tags_18->cd();
   H_dR_Bj0_tags_18->Modified();
   H_dR_Bj0_tags_18->cd();
   H_dR_Bj0_tags_18->SetSelected(H_dR_Bj0_tags_18);
}
