#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenGlu_bckg_17()
{
//=========Macro generated from canvas: GenJet_cuts_nGenGlu_bckg_17/GenJet_cuts_nGenGlu_bckg_17
//=========  (Fri Mar 10 12:49:29 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenGlu_bckg_17 = new TCanvas("GenJet_cuts_nGenGlu_bckg_17", "GenJet_cuts_nGenGlu_bckg_17",0,0,600,600);
   GenJet_cuts_nGenGlu_bckg_17->SetHighLightColor(2);
   GenJet_cuts_nGenGlu_bckg_17->Range(-4.867058,-1.551269e+11,22.93266,1.137598e+12);
   GenJet_cuts_nGenGlu_bckg_17->SetFillColor(0);
   GenJet_cuts_nGenGlu_bckg_17->SetFillStyle(4000);
   GenJet_cuts_nGenGlu_bckg_17->SetBorderMode(0);
   GenJet_cuts_nGenGlu_bckg_17->SetBorderSize(2);
   GenJet_cuts_nGenGlu_bckg_17->SetLeftMargin(0.15709);
   GenJet_cuts_nGenGlu_bckg_17->SetRightMargin(0.1234783);
   GenJet_cuts_nGenGlu_bckg_17->SetBottomMargin(0.12);
   GenJet_cuts_nGenGlu_bckg_17->SetFrameFillStyle(1000);
   GenJet_cuts_nGenGlu_bckg_17->SetFrameBorderMode(0);
   GenJet_cuts_nGenGlu_bckg_17->SetFrameFillStyle(1000);
   GenJet_cuts_nGenGlu_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.008325e+12);
   
   TH1F *st_stack_100 = new TH1F("st_stack_100","",20,-0.5,19.5);
   st_stack_100->SetMinimum(0);
   st_stack_100->SetMaximum(1.008325e+12);
   st_stack_100->SetDirectory(0);
   st_stack_100->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_100->SetLineColor(ci);
   st_stack_100->GetXaxis()->SetTitle("Gen gluon jet multiplicity");
   st_stack_100->GetXaxis()->SetLabelFont(42);
   st_stack_100->GetXaxis()->SetTitleOffset(1);
   st_stack_100->GetXaxis()->SetTitleFont(42);
   st_stack_100->GetYaxis()->SetTitle("Event/1.0");
   st_stack_100->GetYaxis()->SetLabelFont(42);
   st_stack_100->GetYaxis()->SetTitleSize(0.037);
   st_stack_100->GetYaxis()->SetTitleFont(42);
   st_stack_100->GetZaxis()->SetLabelFont(42);
   st_stack_100->GetZaxis()->SetTitleOffset(1);
   st_stack_100->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_100);
   
   
   TH1D *GenJet_cuts_nGenGlu_stack_1 = new TH1D("GenJet_cuts_nGenGlu_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(1,8.368828e+11);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(2,4.495392e+11);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(3,1.159915e+11);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(4,6.89218e+09);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(5,7.593278e+08);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(6,7.045563e+07);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(7,7459119);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(8,796480.1);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(9,90847.27);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(10,9489.801);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(11,1092.406);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(12,93.74656);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(13,3.874483);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(14,4.025485);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(15,4.340696);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(1,1.18446e+08);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(2,8.389234e+07);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(3,3.90725e+07);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(4,4525198);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(5,842572.3);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(6,153411.7);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(7,35641.26);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(8,7920.534);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(9,1965.247);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(10,458.052);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(11,92.77896);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(12,21.45149);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(13,1.103884);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(14,4.025485);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(15,4.340696);
   GenJet_cuts_nGenGlu_stack_1->SetEntries(3.028331e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_cuts_nGenGlu_stack_1->SetFillColor(ci);
   GenJet_cuts_nGenGlu_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenGlu_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenGlu_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenGlu_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenGlu_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenGlu_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenGlu_stack_1,"");
   
   TH1D *GenJet_cuts_nGenGlu_stack_2 = new TH1D("GenJet_cuts_nGenGlu_stack_2","",20,-0.5,19.5);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(1,2.700514e+07);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(2,7515328);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(3,1464624);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(4,242947);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(5,36314.76);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(6,5016.43);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(7,657.2526);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(8,84.55188);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(9,11.48035);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(10,1.676553);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(11,0.06427005);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(1,1331.312);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(2,698.3219);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(3,306.7032);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(4,124.5244);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(5,48.00994);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(6,17.78697);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(7,6.42491);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(8,2.281521);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(9,0.8542129);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(10,0.3355682);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(11,0.06427005);
   GenJet_cuts_nGenGlu_stack_2->SetEntries(6.292104e+08);

   ci = TColor::GetColor("#990099");
   GenJet_cuts_nGenGlu_stack_2->SetFillColor(ci);
   GenJet_cuts_nGenGlu_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenGlu_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenGlu_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenGlu_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenGlu_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenGlu_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenGlu_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_cuts_nGenGlu_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GenJet_cuts_nGenGlu_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_cuts_nGenGlu_bckg_17->Modified();
   GenJet_cuts_nGenGlu_bckg_17->cd();
   GenJet_cuts_nGenGlu_bckg_17->SetSelected(GenJet_cuts_nGenGlu_bckg_17);
}
