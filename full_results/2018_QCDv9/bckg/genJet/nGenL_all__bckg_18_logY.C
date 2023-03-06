#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenL_all__bckg_18_logY()
{
//=========Macro generated from canvas: nGenL_all__bckg_18/nGenL_all__bckg_18
//=========  (Mon Mar  6 10:58:23 2023) by ROOT version 6.26/06
   TCanvas *nGenL_all__bckg_18 = new TCanvas("nGenL_all__bckg_18", "nGenL_all__bckg_18",0,0,600,600);
   nGenL_all__bckg_18->SetHighLightColor(2);
   nGenL_all__bckg_18->Range(-3.775293,-0.6011452,17.0745,13.80401);
   nGenL_all__bckg_18->SetFillColor(0);
   nGenL_all__bckg_18->SetFillStyle(4000);
   nGenL_all__bckg_18->SetBorderMode(0);
   nGenL_all__bckg_18->SetBorderSize(2);
   nGenL_all__bckg_18->SetLogy();
   nGenL_all__bckg_18->SetLeftMargin(0.15709);
   nGenL_all__bckg_18->SetRightMargin(0.1234783);
   nGenL_all__bckg_18->SetBottomMargin(0.12);
   nGenL_all__bckg_18->SetFrameFillStyle(1000);
   nGenL_all__bckg_18->SetFrameBorderMode(0);
   nGenL_all__bckg_18->SetFrameFillStyle(1000);
   nGenL_all__bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(80.34711);
   
   TH1F *st_stack_12 = new TH1F("st_stack_12","",15,-0.5,14.5);
   st_stack_12->SetMinimum(13.41138);
   st_stack_12->SetMaximum(2.309379e+12);
   st_stack_12->SetDirectory(0);
   st_stack_12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_12->SetLineColor(ci);
   st_stack_12->GetXaxis()->SetTitle("Gen l-jet multiplicity");
   st_stack_12->GetXaxis()->SetLabelFont(42);
   st_stack_12->GetXaxis()->SetTitleOffset(1);
   st_stack_12->GetXaxis()->SetTitleFont(42);
   st_stack_12->GetYaxis()->SetTitle("Events/1.0");
   st_stack_12->GetYaxis()->SetLabelFont(42);
   st_stack_12->GetYaxis()->SetTitleSize(0.037);
   st_stack_12->GetYaxis()->SetTitleFont(42);
   st_stack_12->GetZaxis()->SetLabelFont(42);
   st_stack_12->GetZaxis()->SetTitleOffset(1);
   st_stack_12->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_12);
   
   
   TH1D *nGenL_all_stack_1 = new TH1D("nGenL_all_stack_1","",15,-0.5,14.5);
   nGenL_all_stack_1->SetBinContent(1,7.087343e+11);
   nGenL_all_stack_1->SetBinContent(2,7.707178e+11);
   nGenL_all_stack_1->SetBinContent(3,3.798115e+11);
   nGenL_all_stack_1->SetBinContent(4,1.336107e+11);
   nGenL_all_stack_1->SetBinContent(5,3.868642e+10);
   nGenL_all_stack_1->SetBinContent(6,1.017826e+10);
   nGenL_all_stack_1->SetBinContent(7,2.571122e+09);
   nGenL_all_stack_1->SetBinContent(8,6.361932e+08);
   nGenL_all_stack_1->SetBinContent(9,1.561635e+08);
   nGenL_all_stack_1->SetBinContent(10,3.660972e+07);
   nGenL_all_stack_1->SetBinContent(11,8544274);
   nGenL_all_stack_1->SetBinContent(12,1867259);
   nGenL_all_stack_1->SetBinContent(13,391713.4);
   nGenL_all_stack_1->SetBinContent(14,80150.82);
   nGenL_all_stack_1->SetBinContent(15,4648.623);
   nGenL_all_stack_1->SetBinContent(16,42.88414);
   nGenL_all_stack_1->SetBinError(1,1.440643e+08);
   nGenL_all_stack_1->SetBinError(2,1.49061e+08);
   nGenL_all_stack_1->SetBinError(3,1.038522e+08);
   nGenL_all_stack_1->SetBinError(4,6.094834e+07);
   nGenL_all_stack_1->SetBinError(5,3.262198e+07);
   nGenL_all_stack_1->SetBinError(6,1.690719e+07);
   nGenL_all_stack_1->SetBinError(7,8282046);
   nGenL_all_stack_1->SetBinError(8,4325405);
   nGenL_all_stack_1->SetBinError(9,2028757);
   nGenL_all_stack_1->SetBinError(10,938658.6);
   nGenL_all_stack_1->SetBinError(11,540987);
   nGenL_all_stack_1->SetBinError(12,200618.9);
   nGenL_all_stack_1->SetBinError(13,96633.6);
   nGenL_all_stack_1->SetBinError(14,39678.76);
   nGenL_all_stack_1->SetBinError(15,2437.254);
   nGenL_all_stack_1->SetBinError(16,32.40697);
   nGenL_all_stack_1->SetEntries(3.035979e+08);

   ci = TColor::GetColor("#ff6600");
   nGenL_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenL_all_stack_1->SetLineColor(ci);
   nGenL_all_stack_1->GetXaxis()->SetRange(1,15);
   nGenL_all_stack_1->GetXaxis()->SetLabelFont(42);
   nGenL_all_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenL_all_stack_1->GetXaxis()->SetTitleFont(42);
   nGenL_all_stack_1->GetYaxis()->SetLabelFont(42);
   nGenL_all_stack_1->GetYaxis()->SetTitleFont(42);
   nGenL_all_stack_1->GetZaxis()->SetLabelFont(42);
   nGenL_all_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenL_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenL_all_stack_1,"");
   
   TH1D *nGenL_all_stack_2 = new TH1D("nGenL_all_stack_2","",15,-0.5,14.5);
   nGenL_all_stack_2->SetBinContent(1,336992.1);
   nGenL_all_stack_2->SetBinContent(2,3827496);
   nGenL_all_stack_2->SetBinContent(3,1.32824e+07);
   nGenL_all_stack_2->SetBinContent(4,1.657589e+07);
   nGenL_all_stack_2->SetBinContent(5,1.138342e+07);
   nGenL_all_stack_2->SetBinContent(6,5377892);
   nGenL_all_stack_2->SetBinContent(7,2019457);
   nGenL_all_stack_2->SetBinContent(8,653613.7);
   nGenL_all_stack_2->SetBinContent(9,191265.3);
   nGenL_all_stack_2->SetBinContent(10,52280.79);
   nGenL_all_stack_2->SetBinContent(11,13567.38);
   nGenL_all_stack_2->SetBinContent(12,3391.648);
   nGenL_all_stack_2->SetBinContent(13,837.7189);
   nGenL_all_stack_2->SetBinContent(14,196.2854);
   nGenL_all_stack_2->SetBinContent(15,45.67764);
   nGenL_all_stack_2->SetBinContent(16,14.16932);
   nGenL_all_stack_2->SetBinError(1,150.964);
   nGenL_all_stack_2->SetBinError(2,515.5266);
   nGenL_all_stack_2->SetBinError(3,981.9923);
   nGenL_all_stack_2->SetBinError(4,1131.173);
   nGenL_all_stack_2->SetBinError(5,959.816);
   nGenL_all_stack_2->SetBinError(6,668.8412);
   nGenL_all_stack_2->SetBinError(7,412.802);
   nGenL_all_stack_2->SetBinError(8,235.8888);
   nGenL_all_stack_2->SetBinError(9,128.6187);
   nGenL_all_stack_2->SetBinError(10,67.59243);
   nGenL_all_stack_2->SetBinError(11,34.48626);
   nGenL_all_stack_2->SetBinError(12,16.67394);
   nGenL_all_stack_2->SetBinError(13,8.458845);
   nGenL_all_stack_2->SetBinError(14,4.34081);
   nGenL_all_stack_2->SetBinError(15,1.860723);
   nGenL_all_stack_2->SetBinError(16,1.04293);
   nGenL_all_stack_2->SetEntries(8.905796e+08);

   ci = TColor::GetColor("#990099");
   nGenL_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenL_all_stack_2->SetLineColor(ci);
   nGenL_all_stack_2->GetXaxis()->SetRange(1,15);
   nGenL_all_stack_2->GetXaxis()->SetLabelFont(42);
   nGenL_all_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenL_all_stack_2->GetXaxis()->SetTitleFont(42);
   nGenL_all_stack_2->GetYaxis()->SetLabelFont(42);
   nGenL_all_stack_2->GetYaxis()->SetTitleFont(42);
   nGenL_all_stack_2->GetZaxis()->SetLabelFont(42);
   nGenL_all_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenL_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenL_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenL_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("nGenL_all_stack_1","QCD","F");

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
   nGenL_all__bckg_18->Modified();
   nGenL_all__bckg_18->cd();
   nGenL_all__bckg_18->SetSelected(nGenL_all__bckg_18);
}
