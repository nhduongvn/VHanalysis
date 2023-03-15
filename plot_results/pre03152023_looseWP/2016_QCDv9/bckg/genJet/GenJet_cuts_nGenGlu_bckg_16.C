#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenGlu_bckg_16()
{
//=========Macro generated from canvas: GenJet_cuts_nGenGlu_bckg_16/GenJet_cuts_nGenGlu_bckg_16
//=========  (Fri Mar 10 12:49:29 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenGlu_bckg_16 = new TCanvas("GenJet_cuts_nGenGlu_bckg_16", "GenJet_cuts_nGenGlu_bckg_16",0,0,600,600);
   GenJet_cuts_nGenGlu_bckg_16->SetHighLightColor(2);
   GenJet_cuts_nGenGlu_bckg_16->Range(-4.867058,-1.266327e+11,22.93266,9.286399e+11);
   GenJet_cuts_nGenGlu_bckg_16->SetFillColor(0);
   GenJet_cuts_nGenGlu_bckg_16->SetFillStyle(4000);
   GenJet_cuts_nGenGlu_bckg_16->SetBorderMode(0);
   GenJet_cuts_nGenGlu_bckg_16->SetBorderSize(2);
   GenJet_cuts_nGenGlu_bckg_16->SetLeftMargin(0.15709);
   GenJet_cuts_nGenGlu_bckg_16->SetRightMargin(0.1234783);
   GenJet_cuts_nGenGlu_bckg_16->SetBottomMargin(0.12);
   GenJet_cuts_nGenGlu_bckg_16->SetFrameFillStyle(1000);
   GenJet_cuts_nGenGlu_bckg_16->SetFrameBorderMode(0);
   GenJet_cuts_nGenGlu_bckg_16->SetFrameFillStyle(1000);
   GenJet_cuts_nGenGlu_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(8.231127e+11);
   
   TH1F *st_stack_98 = new TH1F("st_stack_98","",20,-0.5,19.5);
   st_stack_98->SetMinimum(0);
   st_stack_98->SetMaximum(8.231127e+11);
   st_stack_98->SetDirectory(0);
   st_stack_98->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_98->SetLineColor(ci);
   st_stack_98->GetXaxis()->SetTitle("Gen gluon jet multiplicity");
   st_stack_98->GetXaxis()->SetLabelFont(42);
   st_stack_98->GetXaxis()->SetTitleOffset(1);
   st_stack_98->GetXaxis()->SetTitleFont(42);
   st_stack_98->GetYaxis()->SetTitle("Event/1.0");
   st_stack_98->GetYaxis()->SetLabelFont(42);
   st_stack_98->GetYaxis()->SetTitleSize(0.037);
   st_stack_98->GetYaxis()->SetTitleFont(42);
   st_stack_98->GetZaxis()->SetLabelFont(42);
   st_stack_98->GetZaxis()->SetTitleOffset(1);
   st_stack_98->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_98);
   
   
   TH1D *GenJet_cuts_nGenGlu_stack_1 = new TH1D("GenJet_cuts_nGenGlu_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(1,6.831613e+11);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(2,3.680911e+11);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(3,9.487802e+10);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(4,5.735411e+09);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(5,6.455445e+08);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(6,6.145484e+07);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(7,6550313);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(8,722613.9);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(9,79883.14);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(10,8384.195);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(11,1118.816);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(12,84.47742);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(13,4.118041);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(14,3.26328);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(15,3.518808);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(1,1.221416e+08);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(2,8.656382e+07);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(3,4.017007e+07);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(4,4517422);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(5,815894.9);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(6,146544.2);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(7,32375.77);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(8,7437.504);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(9,1787.159);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(10,486.9924);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(11,101.0566);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(12,19.03564);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(13,1.166221);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(14,3.26328);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(15,3.518808);
   GenJet_cuts_nGenGlu_stack_1->SetEntries(2.416594e+08);

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
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(1,2.222889e+07);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(2,6193182);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(3,1209318);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(4,200793.7);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(5,30100.1);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(6,4169.836);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(7,550.614);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(8,71.6877);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(9,9.829018);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(10,0.823395);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(11,0.2125189);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(1,1175.002);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(2,617.3888);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(3,271.7265);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(4,110.4584);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(5,42.67862);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(6,15.82765);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(7,5.748112);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(8,2.069527);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(9,0.7631659);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(10,0.2204907);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(11,0.124821);
   GenJet_cuts_nGenGlu_stack_2->SetEntries(5.194289e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_cuts_nGenGlu_bckg_16->Modified();
   GenJet_cuts_nGenGlu_bckg_16->cd();
   GenJet_cuts_nGenGlu_bckg_16->SetSelected(GenJet_cuts_nGenGlu_bckg_16);
}
