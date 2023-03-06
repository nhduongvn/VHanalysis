#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenC_all__bckg_18_logY()
{
//=========Macro generated from canvas: nGenC_all__bckg_18/nGenC_all__bckg_18
//=========  (Mon Mar  6 10:58:23 2023) by ROOT version 6.26/06
   TCanvas *nGenC_all__bckg_18 = new TCanvas("nGenC_all__bckg_18", "nGenC_all__bckg_18",0,0,600,600);
   nGenC_all__bckg_18->SetHighLightColor(2);
   nGenC_all__bckg_18->Range(-3.775293,-1.748666,17.0745,14.32537);
   nGenC_all__bckg_18->SetFillColor(0);
   nGenC_all__bckg_18->SetFillStyle(4000);
   nGenC_all__bckg_18->SetBorderMode(0);
   nGenC_all__bckg_18->SetBorderSize(2);
   nGenC_all__bckg_18->SetLogy();
   nGenC_all__bckg_18->SetLeftMargin(0.15709);
   nGenC_all__bckg_18->SetRightMargin(0.1234783);
   nGenC_all__bckg_18->SetBottomMargin(0.12);
   nGenC_all__bckg_18->SetFrameFillStyle(1000);
   nGenC_all__bckg_18->SetFrameBorderMode(0);
   nGenC_all__bckg_18->SetFrameFillStyle(1000);
   nGenC_all__bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_24 = new TH1F("st_stack_24","",15,-0.5,14.5);
   st_stack_24->SetMinimum(1.514322);
   st_stack_24->SetMaximum(5.223559e+12);
   st_stack_24->SetDirectory(0);
   st_stack_24->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_24->SetLineColor(ci);
   st_stack_24->GetXaxis()->SetTitle("Gen c-jet multiplicity");
   st_stack_24->GetXaxis()->SetLabelFont(42);
   st_stack_24->GetXaxis()->SetTitleOffset(1);
   st_stack_24->GetXaxis()->SetTitleFont(42);
   st_stack_24->GetYaxis()->SetTitle("Events/1.0");
   st_stack_24->GetYaxis()->SetLabelFont(42);
   st_stack_24->GetYaxis()->SetTitleSize(0.037);
   st_stack_24->GetYaxis()->SetTitleFont(42);
   st_stack_24->GetZaxis()->SetLabelFont(42);
   st_stack_24->GetZaxis()->SetTitleOffset(1);
   st_stack_24->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_24);
   
   
   TH1D *nGenC_all_stack_1 = new TH1D("nGenC_all_stack_1","",15,-0.5,14.5);
   nGenC_all_stack_1->SetBinContent(1,1.61147e+12);
   nGenC_all_stack_1->SetBinContent(2,3.120994e+11);
   nGenC_all_stack_1->SetBinContent(3,1.039762e+11);
   nGenC_all_stack_1->SetBinContent(4,1.491855e+10);
   nGenC_all_stack_1->SetBinContent(5,2.362362e+09);
   nGenC_all_stack_1->SetBinContent(6,2.859302e+08);
   nGenC_all_stack_1->SetBinContent(7,3.310539e+07);
   nGenC_all_stack_1->SetBinContent(8,3953898);
   nGenC_all_stack_1->SetBinContent(9,540070.3);
   nGenC_all_stack_1->SetBinContent(10,22125.45);
   nGenC_all_stack_1->SetBinContent(11,540.488);
   nGenC_all_stack_1->SetBinContent(12,0.6848008);
   nGenC_all_stack_1->SetBinError(1,2.158407e+08);
   nGenC_all_stack_1->SetBinError(2,9.444252e+07);
   nGenC_all_stack_1->SetBinError(3,5.405491e+07);
   nGenC_all_stack_1->SetBinError(4,2.034996e+07);
   nGenC_all_stack_1->SetBinError(5,8066402);
   nGenC_all_stack_1->SetBinError(6,2808507);
   nGenC_all_stack_1->SetBinError(7,840851);
   nGenC_all_stack_1->SetBinError(8,281839.7);
   nGenC_all_stack_1->SetBinError(9,107826.9);
   nGenC_all_stack_1->SetBinError(10,6680.655);
   nGenC_all_stack_1->SetBinError(11,432.1424);
   nGenC_all_stack_1->SetBinError(12,0.6848008);
   nGenC_all_stack_1->SetEntries(3.035979e+08);

   ci = TColor::GetColor("#ff6600");
   nGenC_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenC_all_stack_1->SetLineColor(ci);
   nGenC_all_stack_1->GetXaxis()->SetRange(1,15);
   nGenC_all_stack_1->GetXaxis()->SetLabelFont(42);
   nGenC_all_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenC_all_stack_1->GetXaxis()->SetTitleFont(42);
   nGenC_all_stack_1->GetYaxis()->SetLabelFont(42);
   nGenC_all_stack_1->GetYaxis()->SetTitleFont(42);
   nGenC_all_stack_1->GetZaxis()->SetLabelFont(42);
   nGenC_all_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenC_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenC_all_stack_1,"");
   
   TH1D *nGenC_all_stack_2 = new TH1D("nGenC_all_stack_2","",15,-0.5,14.5);
   nGenC_all_stack_2->SetBinContent(1,2.079756e+07);
   nGenC_all_stack_2->SetBinContent(2,2.229732e+07);
   nGenC_all_stack_2->SetBinContent(3,8472286);
   nGenC_all_stack_2->SetBinContent(4,1748484);
   nGenC_all_stack_2->SetBinContent(5,338082.4);
   nGenC_all_stack_2->SetBinContent(6,55098.67);
   nGenC_all_stack_2->SetBinContent(7,8490.851);
   nGenC_all_stack_2->SetBinContent(8,1237.923);
   nGenC_all_stack_2->SetBinContent(9,168.1458);
   nGenC_all_stack_2->SetBinContent(10,20.61669);
   nGenC_all_stack_2->SetBinContent(11,3.039561);
   nGenC_all_stack_2->SetBinContent(12,0.4461531);
   nGenC_all_stack_2->SetBinError(1,1207.14);
   nGenC_all_stack_2->SetBinError(2,1329.145);
   nGenC_all_stack_2->SetBinError(3,859.1395);
   nGenC_all_stack_2->SetBinError(4,390.093);
   nGenC_all_stack_2->SetBinError(5,172.842);
   nGenC_all_stack_2->SetBinError(6,69.88198);
   nGenC_all_stack_2->SetBinError(7,27.40593);
   nGenC_all_stack_2->SetBinError(8,10.20134);
   nGenC_all_stack_2->SetBinError(9,3.826588);
   nGenC_all_stack_2->SetBinError(10,1.274263);
   nGenC_all_stack_2->SetBinError(11,0.4914061);
   nGenC_all_stack_2->SetBinError(12,0.2005347);
   nGenC_all_stack_2->SetEntries(8.905796e+08);

   ci = TColor::GetColor("#990099");
   nGenC_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenC_all_stack_2->SetLineColor(ci);
   nGenC_all_stack_2->GetXaxis()->SetRange(1,15);
   nGenC_all_stack_2->GetXaxis()->SetLabelFont(42);
   nGenC_all_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenC_all_stack_2->GetXaxis()->SetTitleFont(42);
   nGenC_all_stack_2->GetYaxis()->SetLabelFont(42);
   nGenC_all_stack_2->GetYaxis()->SetTitleFont(42);
   nGenC_all_stack_2->GetZaxis()->SetLabelFont(42);
   nGenC_all_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenC_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenC_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenC_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("nGenC_all_stack_1","QCD","F");

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
   nGenC_all__bckg_18->Modified();
   nGenC_all__bckg_18->cd();
   nGenC_all__bckg_18->SetSelected(nGenC_all__bckg_18);
}
