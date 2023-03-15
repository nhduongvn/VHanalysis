#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_bckg_16()
{
//=========Macro generated from canvas: nB_medium_jets_bckg_16/nB_medium_jets_bckg_16
//=========  (Wed Mar  1 14:06:11 2023) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_bckg_16 = new TCanvas("nB_medium_jets_bckg_16", "nB_medium_jets_bckg_16",0,0,600,600);
   nB_medium_jets_bckg_16->SetHighLightColor(2);
   nB_medium_jets_bckg_16->Range(-2.683529,-2.595711e+11,11.21633,1.903521e+12);
   nB_medium_jets_bckg_16->SetFillColor(0);
   nB_medium_jets_bckg_16->SetFillStyle(4000);
   nB_medium_jets_bckg_16->SetBorderMode(0);
   nB_medium_jets_bckg_16->SetBorderSize(2);
   nB_medium_jets_bckg_16->SetLeftMargin(0.15709);
   nB_medium_jets_bckg_16->SetRightMargin(0.1234783);
   nB_medium_jets_bckg_16->SetBottomMargin(0.12);
   nB_medium_jets_bckg_16->SetFrameFillStyle(1000);
   nB_medium_jets_bckg_16->SetFrameBorderMode(0);
   nB_medium_jets_bckg_16->SetFrameFillStyle(1000);
   nB_medium_jets_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.687212e+12);
   
   TH1F *st_stack_26 = new TH1F("st_stack_26","",10,-0.5,9.5);
   st_stack_26->SetMinimum(0);
   st_stack_26->SetMaximum(1.687212e+12);
   st_stack_26->SetDirectory(0);
   st_stack_26->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_26->SetLineColor(ci);
   st_stack_26->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_26->GetXaxis()->SetRange(1,10);
   st_stack_26->GetXaxis()->SetLabelFont(42);
   st_stack_26->GetXaxis()->SetTitleOffset(1);
   st_stack_26->GetXaxis()->SetTitleFont(42);
   st_stack_26->GetYaxis()->SetTitle("Events/1.0");
   st_stack_26->GetYaxis()->SetLabelFont(42);
   st_stack_26->GetYaxis()->SetTitleSize(0.037);
   st_stack_26->GetYaxis()->SetTitleFont(42);
   st_stack_26->GetZaxis()->SetLabelFont(42);
   st_stack_26->GetZaxis()->SetTitleOffset(1);
   st_stack_26->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_26);
   
   
   TH1D *VbbHcc_jets_nB_medium_stack_1 = new TH1D("VbbHcc_jets_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(1,1.1248e+12);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(2,2.673803e+10);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(3,1.034194e+09);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(4,1.115104e+07);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(5,237469.3);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(6,3381.922);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(7,86.59548);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(8,9.801079);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(1,1.531481e+08);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(2,2.179226e+07);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(3,3724388);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(4,195634.7);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(5,10357.66);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(6,683.0713);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(7,37.01396);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(8,9.084208);
   VbbHcc_jets_nB_medium_stack_1->SetEntries(2.421249e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nB_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_nB_medium_stack_2 = new TH1D("VbbHcc_jets_nB_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(1,8532081);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(2,1.416026e+07);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(3,6707033);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(4,449301.9);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(5,17081.99);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(6,595.3684);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(7,22.11525);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(8,0.8388529);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(1,728.6488);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(2,944.4924);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(3,654.1759);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(4,174.4091);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(5,34.36797);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(6,6.434446);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(7,1.248883);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(8,0.2447964);
   VbbHcc_jets_nB_medium_stack_2->SetEntries(5.130375e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_nB_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_1","QCD","F");

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
   nB_medium_jets_bckg_16->Modified();
   nB_medium_jets_bckg_16->cd();
   nB_medium_jets_bckg_16->SetSelected(nB_medium_jets_bckg_16);
}
