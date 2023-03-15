#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_all_bckg_18()
{
//=========Macro generated from canvas: CSV_jets_all_bckg_18/CSV_jets_all_bckg_18
//=========  (Thu Mar  9 13:30:52 2023) by ROOT version 6.26/06
   TCanvas *CSV_jets_all_bckg_18 = new TCanvas("CSV_jets_all_bckg_18", "CSV_jets_all_bckg_18",0,0,600,600);
   CSV_jets_all_bckg_18->SetHighLightColor(2);
   CSV_jets_all_bckg_18->Range(-0.2183529,-1.159131e+12,1.171633,8.500297e+12);
   CSV_jets_all_bckg_18->SetFillColor(0);
   CSV_jets_all_bckg_18->SetFillStyle(4000);
   CSV_jets_all_bckg_18->SetBorderMode(0);
   CSV_jets_all_bckg_18->SetBorderSize(2);
   CSV_jets_all_bckg_18->SetLeftMargin(0.15709);
   CSV_jets_all_bckg_18->SetRightMargin(0.1234783);
   CSV_jets_all_bckg_18->SetBottomMargin(0.12);
   CSV_jets_all_bckg_18->SetFrameFillStyle(1000);
   CSV_jets_all_bckg_18->SetFrameBorderMode(0);
   CSV_jets_all_bckg_18->SetFrameFillStyle(1000);
   CSV_jets_all_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(7.534354e+12);
   
   TH1F *st_stack_168 = new TH1F("st_stack_168","",20,0,1);
   st_stack_168->SetMinimum(0);
   st_stack_168->SetMaximum(7.534354e+12);
   st_stack_168->SetDirectory(0);
   st_stack_168->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_168->SetLineColor(ci);
   st_stack_168->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_168->GetXaxis()->SetRange(1,20);
   st_stack_168->GetXaxis()->SetLabelFont(42);
   st_stack_168->GetXaxis()->SetTitleOffset(1);
   st_stack_168->GetXaxis()->SetTitleFont(42);
   st_stack_168->GetYaxis()->SetTitle("Event/0.05");
   st_stack_168->GetYaxis()->SetLabelFont(42);
   st_stack_168->GetYaxis()->SetTitleSize(0.037);
   st_stack_168->GetYaxis()->SetTitleFont(42);
   st_stack_168->GetZaxis()->SetLabelFont(42);
   st_stack_168->GetZaxis()->SetTitleOffset(1);
   st_stack_168->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_168);
   
   
   TH1D *VbbHcc_jets_all_CSV_stack_1 = new TH1D("VbbHcc_jets_all_CSV_stack_1","",20,0,1);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(1,6.25328e+12);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(2,2.763111e+12);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(3,3.879094e+11);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(4,1.674379e+11);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(5,1.011555e+11);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(6,6.403832e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(7,4.676533e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(8,3.538623e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(9,2.68962e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(10,2.184595e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(11,1.854174e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(12,1.556434e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(13,1.319797e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(14,1.155672e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(15,1.043773e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(16,1.000931e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(17,9.420013e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(18,9.799939e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(19,1.240765e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(20,5.054444e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(1,4.089274e+08);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(2,2.603991e+08);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(3,9.906364e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(4,6.543565e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(5,5.117681e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(6,4.079332e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(7,3.49518e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(8,3.052023e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(9,2.65272e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(10,2.392275e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(11,2.208763e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(12,2.010039e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(13,1.859304e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(14,1.751663e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(15,1.667844e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(16,1.649309e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(17,1.565398e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(18,1.615468e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(19,1.850107e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(20,3.720538e+07);
   VbbHcc_jets_all_CSV_stack_1->SetEntries(1.875775e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_CSV_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CSV_stack_2 = new TH1D("VbbHcc_jets_all_CSV_stack_2","",20,0,1);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(1,2.339409e+08);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(2,8.284025e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(3,1.708158e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(4,9093571);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(5,6440079);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(6,4995022);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(7,4231295);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(8,3733439);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(9,3304899);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(10,3085474);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(11,2982218);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(12,2883556);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(13,2776755);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(14,2830441);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(15,2960403);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(16,3320293);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(17,3636044);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(18,4311970);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(19,6479352);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(20,4.001832e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(1,4290.031);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(2,2410.167);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(3,1125.197);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(4,830.8332);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(5,701.8118);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(6,621.2879);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(7,571.6309);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(8,536.6332);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(9,505.1572);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(10,488.248);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(11,480.8729);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(12,473.3471);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(13,464.9089);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(14,469.8319);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(15,480.7109);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(16,508.2006);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(17,532.8083);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(18,579.953);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(19,711.2194);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(20,1774.419);
   VbbHcc_jets_all_CSV_stack_2->SetEntries(7.277891e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_CSV_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_1","QCD","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_jets_all_bckg_18->Modified();
   CSV_jets_all_bckg_18->cd();
   CSV_jets_all_bckg_18->SetSelected(CSV_jets_all_bckg_18);
}
