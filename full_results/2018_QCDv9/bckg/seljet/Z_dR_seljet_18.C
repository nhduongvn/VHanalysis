#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_seljet_18()
{
//=========Macro generated from canvas: Z_dR_seljet_18/Z_dR_seljet_18
//=========  (Thu Feb 16 10:35:37 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_seljet_18 = new TCanvas("Z_dR_seljet_18", "Z_dR_seljet_18",0,0,600,600);
   Z_dR_seljet_18->SetHighLightColor(2);
   Z_dR_seljet_18->Range(-1.310117,-8.97146e+07,7.029799,6.57907e+08);
   Z_dR_seljet_18->SetFillColor(0);
   Z_dR_seljet_18->SetFillStyle(4000);
   Z_dR_seljet_18->SetBorderMode(0);
   Z_dR_seljet_18->SetBorderSize(2);
   Z_dR_seljet_18->SetLeftMargin(0.15709);
   Z_dR_seljet_18->SetRightMargin(0.1234783);
   Z_dR_seljet_18->SetBottomMargin(0.12);
   Z_dR_seljet_18->SetFrameFillStyle(1000);
   Z_dR_seljet_18->SetFrameBorderMode(0);
   Z_dR_seljet_18->SetFrameFillStyle(1000);
   Z_dR_seljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(5.831449e+08);
   
   TH1F *st_stack_275 = new TH1F("st_stack_275","",30,0,6);
   st_stack_275->SetMinimum(0);
   st_stack_275->SetMaximum(5.831449e+08);
   st_stack_275->SetDirectory(0);
   st_stack_275->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_275->SetLineColor(ci);
   st_stack_275->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_275->GetXaxis()->SetRange(1,30);
   st_stack_275->GetXaxis()->SetLabelFont(42);
   st_stack_275->GetXaxis()->SetTitleOffset(1);
   st_stack_275->GetXaxis()->SetTitleFont(42);
   st_stack_275->GetYaxis()->SetTitle("Events/0.2");
   st_stack_275->GetYaxis()->SetLabelFont(42);
   st_stack_275->GetYaxis()->SetTitleSize(0.037);
   st_stack_275->GetYaxis()->SetTitleFont(42);
   st_stack_275->GetZaxis()->SetLabelFont(42);
   st_stack_275->GetZaxis()->SetTitleOffset(1);
   st_stack_275->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_275);
   
   
   TH1D *VbbHcc_seljet_Z_dR_stack_1 = new TH1D("VbbHcc_seljet_Z_dR_stack_1","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(2,188052.5);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(3,1.440037e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(4,2.092243e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(5,1.720328e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(6,1.667029e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(7,1.708724e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(8,1.781988e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(9,1.906343e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(10,2.084704e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(11,2.302624e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(12,2.62324e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(13,2.952368e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(14,3.372488e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(15,3.717484e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(16,3.873258e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(17,2.475343e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(18,1.741842e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(19,1.283823e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(20,9.45131e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(21,6.883596e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(22,4.808445e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(23,3.31711e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(24,2.03803e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(25,1.198692e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(26,6114576);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(27,2661854);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(28,719873.5);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(29,37474.3);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(2,11743.52);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(3,488341.5);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(4,656180.1);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(5,606493.6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(6,591172.8);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(7,612677.7);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(8,632386.1);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(9,678361);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(10,729845.1);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(11,783378.3);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(12,804343);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(13,860466.5);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(14,949010.1);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(15,977221.3);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(16,1062039);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(17,893844);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(18,736258.4);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(19,624516.8);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(20,533548.1);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(21,488346.6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(22,389353.6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(23,348135.2);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(24,256286.9);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(25,236154.7);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(26,149006.6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(27,110701.6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(28,52247.42);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(29,6468.722);
   VbbHcc_seljet_Z_dR_stack_1->SetEntries(4.358765e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_seljet_Z_dR_stack_2 = new TH1D("VbbHcc_seljet_Z_dR_stack_2","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(2,330.3844);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(3,306905);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(4,603412);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(5,785573.4);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(6,965289.8);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(7,1072838);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(8,1109355);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(9,1117737);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(10,1135413);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(11,1176077);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(12,1237026);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(13,1313133);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(14,1394772);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(15,1474940);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(16,1437462);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(17,777093.2);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(18,472674.3);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(19,305532);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(20,199941.5);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(21,129233.2);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(22,81594.37);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(23,49672);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(24,28343.49);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(25,14708.6);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(26,6808.726);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(27,2637.359);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(28,666.9096);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(29,39.33158);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(2,5.880626);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(3,168.0616);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(4,236.0967);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(5,269.3159);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(6,298.737);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(7,314.4792);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(8,319.5702);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(9,321.263);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(10,323.9676);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(11,329.7528);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(12,339.0559);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(13,349.2974);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(14,360.554);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(15,371.4613);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(16,366.8226);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(17,269.7101);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(18,209.5657);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(19,168.3182);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(20,136.4138);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(21,110.1221);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(22,86.60214);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(23,67.69921);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(24,51.43439);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(25,36.23725);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(26,25.04225);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(27,15.43979);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(28,7.722211);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(29,1.785388);
   VbbHcc_seljet_Z_dR_stack_2->SetEntries(2.308027e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_seljet_18->Modified();
   Z_dR_seljet_18->cd();
   Z_dR_seljet_18->SetSelected(Z_dR_seljet_18);
}
