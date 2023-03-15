#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_all_bckg_18_logY()
{
//=========Macro generated from canvas: nC_medium_jets_all_bckg_18/nC_medium_jets_all_bckg_18
//=========  (Wed Mar  1 14:06:43 2023) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_all_bckg_18 = new TCanvas("nC_medium_jets_all_bckg_18", "nC_medium_jets_all_bckg_18",0,0,600,600);
   nC_medium_jets_all_bckg_18->SetHighLightColor(2);
   nC_medium_jets_all_bckg_18->Range(-2.683529,2.777748,11.21633,15.59973);
   nC_medium_jets_all_bckg_18->SetFillColor(0);
   nC_medium_jets_all_bckg_18->SetFillStyle(4000);
   nC_medium_jets_all_bckg_18->SetBorderMode(0);
   nC_medium_jets_all_bckg_18->SetBorderSize(2);
   nC_medium_jets_all_bckg_18->SetLogy();
   nC_medium_jets_all_bckg_18->SetLeftMargin(0.15709);
   nC_medium_jets_all_bckg_18->SetRightMargin(0.1234783);
   nC_medium_jets_all_bckg_18->SetBottomMargin(0.12);
   nC_medium_jets_all_bckg_18->SetFrameFillStyle(1000);
   nC_medium_jets_all_bckg_18->SetFrameBorderMode(0);
   nC_medium_jets_all_bckg_18->SetFrameFillStyle(1000);
   nC_medium_jets_all_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(112156.2);
   st->SetMaximum(7.512867e+13);
   
   TH1F *st_stack_192 = new TH1F("st_stack_192","",10,-0.5,9.5);
   st_stack_192->SetMinimum(20719.82);
   st_stack_192->SetMaximum(2.077455e+14);
   st_stack_192->SetDirectory(0);
   st_stack_192->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_192->SetLineColor(ci);
   st_stack_192->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_192->GetXaxis()->SetRange(1,10);
   st_stack_192->GetXaxis()->SetLabelFont(42);
   st_stack_192->GetXaxis()->SetTitleOffset(1);
   st_stack_192->GetXaxis()->SetTitleFont(42);
   st_stack_192->GetYaxis()->SetTitle("Events/1.0");
   st_stack_192->GetYaxis()->SetLabelFont(42);
   st_stack_192->GetYaxis()->SetTitleSize(0.037);
   st_stack_192->GetYaxis()->SetTitleFont(42);
   st_stack_192->GetZaxis()->SetLabelFont(42);
   st_stack_192->GetZaxis()->SetTitleOffset(1);
   st_stack_192->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_192);
   
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_1 = new TH1D("VbbHcc_jets_all_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(1,6.664907e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(2,7.51274e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(3,4.121894e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(4,1.541373e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(5,4.586567e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(6,1.176998e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(7,2.715593e+09);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(8,5.683859e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(9,1.120899e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(10,2.116039e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(11,4672061);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(1,1.448208e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(2,1.474343e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(3,1.040669e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(4,6.076356e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(5,3.197477e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(6,1.577026e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(7,7390054);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(8,3322232);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(9,1443843);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(10,616087.1);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(11,284746.3);
   VbbHcc_jets_all_nC_medium_stack_1->SetEntries(3.038349e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_nC_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_2 = new TH1D("VbbHcc_jets_all_nC_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(1,5124847);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(2,1.276826e+07);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(3,1.500341e+07);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(4,1.11613e+07);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(5,5974672);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(6,2490787);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(7,856185.7);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(8,252964.9);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(9,66239.75);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(10,15818.43);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(11,4389.841);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(1,665.9913);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(2,1056.162);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(3,1143.113);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(4,979.0756);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(5,708.4366);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(6,450.9535);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(7,260.9327);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(8,139.906);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(9,70.55337);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(10,33.94445);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(11,17.64556);
   VbbHcc_jets_all_nC_medium_stack_2->SetEntries(7.957776e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_nC_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_1","QCD","F");

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
   nC_medium_jets_all_bckg_18->Modified();
   nC_medium_jets_all_bckg_18->cd();
   nC_medium_jets_all_bckg_18->SetSelected(nC_medium_jets_all_bckg_18);
}
