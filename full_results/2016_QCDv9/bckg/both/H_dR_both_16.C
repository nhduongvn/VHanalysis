#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_16()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Tue Feb 14 16:10:11 2023) by ROOT version 6.26/06
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.353788,-680063.9,7.264125,4987135);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetFillStyle(4000);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLeftMargin(0.15709);
   H_dR_both_16->SetRightMargin(0.1234783);
   H_dR_both_16->SetBottomMargin(0.12);
   H_dR_both_16->SetFrameFillStyle(1000);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameFillStyle(1000);
   H_dR_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4420415);
   
   TH1F *st_stack_149 = new TH1F("st_stack_149","",30,0,6);
   st_stack_149->SetMinimum(0);
   st_stack_149->SetMaximum(4420415);
   st_stack_149->SetDirectory(0);
   st_stack_149->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_149->SetLineColor(ci);
   st_stack_149->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_149->GetXaxis()->SetRange(1,31);
   st_stack_149->GetXaxis()->SetLabelFont(42);
   st_stack_149->GetXaxis()->SetTitleOffset(1);
   st_stack_149->GetXaxis()->SetTitleFont(42);
   st_stack_149->GetYaxis()->SetTitle("Events/0.2");
   st_stack_149->GetYaxis()->SetLabelFont(42);
   st_stack_149->GetYaxis()->SetTitleSize(0.037);
   st_stack_149->GetYaxis()->SetTitleFont(42);
   st_stack_149->GetZaxis()->SetLabelFont(42);
   st_stack_149->GetZaxis()->SetTitleOffset(1);
   st_stack_149->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_149);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,524.5806);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,1359486);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,1566082);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,1214982);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,1154386);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,1272945);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,1164557);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,1326142);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,1395526);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,1653613);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,2024912);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,2025405);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,2372974);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,2657118);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,2762407);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,1921639);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,1331974);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,1123135);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,978239.8);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,706312.8);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,554394.8);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,444927.1);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,295027);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,222428.5);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,96848.58);
   VbbHcc_both_H_dR_stack_1->SetBinContent(27,80113.25);
   VbbHcc_both_H_dR_stack_1->SetBinContent(28,9758.581);
   VbbHcc_both_H_dR_stack_1->SetBinContent(29,902.9121);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,357.8928);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,70261.55);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,76903.25);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,76515.14);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,67230.2);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,87872.43);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,63501.09);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,79966.85);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,79568.71);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,97307.37);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,113969.1);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,97821.35);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,112243);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,118301.2);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,114327.6);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,100042);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,72787.89);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,70444.88);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,80541.61);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,64272.32);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,55487.83);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,55851.08);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,35949.25);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,44515);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,24151.05);
   VbbHcc_both_H_dR_stack_1->SetBinError(27,24617.15);
   VbbHcc_both_H_dR_stack_1->SetBinError(28,3111.633);
   VbbHcc_both_H_dR_stack_1->SetBinError(29,488.4726);
   VbbHcc_both_H_dR_stack_1->SetEntries(471796);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_stack_2 = new TH1D("VbbHcc_both_H_dR_stack_2","",30,0,6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(2,40.68193);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,45401.82);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,79789.4);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,96727.18);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,115806.5);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,125874.6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,129309.1);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,130586.5);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,133182.3);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,139266.5);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,148531.8);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,160231.3);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,173664.3);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,186326);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,184536.2);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,106958.5);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,69444.34);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,47440.93);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,32744.65);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,22414.22);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,15116.76);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,9823.348);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,6131.905);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,3362.787);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,1700.615);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,722.153);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,210.0096);
   VbbHcc_both_H_dR_stack_2->SetBinContent(29,15.93319);
   VbbHcc_both_H_dR_stack_2->SetBinError(2,1.670897);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,56.40775);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,74.86585);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,82.44703);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,90.17468);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,93.99622);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,95.30155);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,95.83779);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,96.87316);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,99.14582);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,102.477);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,106.548);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,111.0203);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,115.092);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,114.5727);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,87.02439);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,69.89706);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,57.57615);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,47.63122);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,39.2586);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,32.10075);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,25.74929);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,20.25511);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,14.93598);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,10.56927);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,6.855881);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,3.643858);
   VbbHcc_both_H_dR_stack_2->SetBinError(29,1.004013);
   VbbHcc_both_H_dR_stack_2->SetEntries(3.245983e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","QCD","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_16->Modified();
   H_dR_both_16->cd();
   H_dR_both_16->SetSelected(H_dR_both_16);
}
