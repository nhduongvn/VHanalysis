#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ZccHcc_boosted_PN_med_ZMass_JETPUID()
{
//=========Macro generated from canvas: c1/
//=========  (Mon Oct 21 12:54:54 2024) by ROOT version 6.30/03
   TCanvas *c1 = new TCanvas("c1", "",0,0,600,600);
   gStyle->SetOptStat(0);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.15);
  
// ------------>Primitives in pad: pad1_v1
   TPad *pad1_v1__38 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__38->Draw();
   pad1_v1__38->cd();
   pad1_v1__38->Range(-38.75,-6.673415,348.75,60.06073);
   pad1_v1__38->SetBorderSize(2);
   pad1_v1__38->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__96 = new TH1D("ZccHcc_boosted_PN_med_ZMass__96","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__96->SetBinContent(8,4.854131);
   ZccHcc_boosted_PN_med_ZMass__96->SetBinContent(9,15.34577);
   ZccHcc_boosted_PN_med_ZMass__96->SetBinContent(10,30.02249);
   ZccHcc_boosted_PN_med_ZMass__96->SetBinContent(11,6.938672);
   ZccHcc_boosted_PN_med_ZMass__96->SetBinContent(12,4.26416);
   ZccHcc_boosted_PN_med_ZMass__96->SetBinError(8,2.532705);
   ZccHcc_boosted_PN_med_ZMass__96->SetBinError(9,5.08006);
   ZccHcc_boosted_PN_med_ZMass__96->SetBinError(10,6.429797);
   ZccHcc_boosted_PN_med_ZMass__96->SetBinError(11,2.893516);
   ZccHcc_boosted_PN_med_ZMass__96->SetBinError(12,2.469172);
   ZccHcc_boosted_PN_med_ZMass__96->SetMaximum(53.38732);
   ZccHcc_boosted_PN_med_ZMass__96->SetEntries(49);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   ZccHcc_boosted_PN_med_ZMass__96->SetFillColor(ci);
   ZccHcc_boosted_PN_med_ZMass__96->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__96->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_ZMass__96->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__96->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__96->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__96->GetYaxis()->SetTitle("Events/10.000000");
   ZccHcc_boosted_PN_med_ZMass__96->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__96->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__96->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__96->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__96->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__96->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__97 = new TH1D("ZccHcc_boosted_PN_med_ZMass__97","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__97->SetBinContent(8,4.854131);
   ZccHcc_boosted_PN_med_ZMass__97->SetBinContent(9,15.34577);
   ZccHcc_boosted_PN_med_ZMass__97->SetBinContent(10,30.02249);
   ZccHcc_boosted_PN_med_ZMass__97->SetBinContent(11,6.938672);
   ZccHcc_boosted_PN_med_ZMass__97->SetBinContent(12,4.26416);
   ZccHcc_boosted_PN_med_ZMass__97->SetBinError(8,2.532705);
   ZccHcc_boosted_PN_med_ZMass__97->SetBinError(9,5.08006);
   ZccHcc_boosted_PN_med_ZMass__97->SetBinError(10,6.429797);
   ZccHcc_boosted_PN_med_ZMass__97->SetBinError(11,2.893516);
   ZccHcc_boosted_PN_med_ZMass__97->SetBinError(12,2.469172);
   ZccHcc_boosted_PN_med_ZMass__97->SetEntries(49);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_ZMass__97->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__97->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__97->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__97->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__97->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__97->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__97->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__97->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__97->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__97->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__97->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__97->Draw("same hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__98 = new TH1D("ZccHcc_boosted_PN_med_ZMass__98","",3,0,300);
   ZccHcc_boosted_PN_med_ZMass__98->SetBinContent(1,51.38732);
   ZccHcc_boosted_PN_med_ZMass__98->SetBinContent(2,11.07791);
   ZccHcc_boosted_PN_med_ZMass__98->SetBinError(1,8.650285);
   ZccHcc_boosted_PN_med_ZMass__98->SetBinError(2,3.766128);
   ZccHcc_boosted_PN_med_ZMass__98->SetEntries(50);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_ZMass__98->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__98->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__98->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_ZMass__98->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__98->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__98->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__98->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__98->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__98->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__98->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__98->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__98->Draw("same hist");
   
   TLegend *leg = new TLegend(0.53,0.7,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ZccHcc_boosted_PN_med_ZMass","Nominal","F");

   ci = TColor::GetColor("#cccccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_ZMass","JETPUID Up","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_ZMass","JETPUID Down","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   pad1_v1__38->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__39 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__39->Draw();
   pad1_v2__39->cd();
   pad1_v2__39->Range(-38.75,0.75,348.75,1.25);
   pad1_v2__39->SetBorderSize(2);
   pad1_v2__39->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__99 = new TH1D("ZccHcc_boosted_PN_med_ZMass__99","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__99->SetBinContent(8,1);
   ZccHcc_boosted_PN_med_ZMass__99->SetBinContent(9,1);
   ZccHcc_boosted_PN_med_ZMass__99->SetBinContent(10,1);
   ZccHcc_boosted_PN_med_ZMass__99->SetBinContent(11,1);
   ZccHcc_boosted_PN_med_ZMass__99->SetBinContent(12,1);
   ZccHcc_boosted_PN_med_ZMass__99->SetBinError(8,0.7378841);
   ZccHcc_boosted_PN_med_ZMass__99->SetBinError(9,0.4681609);
   ZccHcc_boosted_PN_med_ZMass__99->SetBinError(10,0.3028764);
   ZccHcc_boosted_PN_med_ZMass__99->SetBinError(11,0.5897453);
   ZccHcc_boosted_PN_med_ZMass__99->SetBinError(12,0.8189038);
   ZccHcc_boosted_PN_med_ZMass__99->SetMinimum(0.8);
   ZccHcc_boosted_PN_med_ZMass__99->SetMaximum(1.2);
   ZccHcc_boosted_PN_med_ZMass__99->SetEntries(13.34198);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_ZMass__99->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__99->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__99->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_ZMass__99->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__99->GetXaxis()->SetLabelSize(0.1);
   ZccHcc_boosted_PN_med_ZMass__99->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_ZMass__99->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__99->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__99->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   ZccHcc_boosted_PN_med_ZMass__99->GetYaxis()->CenterTitle(true);
   ZccHcc_boosted_PN_med_ZMass__99->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__99->GetYaxis()->SetLabelSize(0.09);
   ZccHcc_boosted_PN_med_ZMass__99->GetYaxis()->SetTitleSize(0.12);
   ZccHcc_boosted_PN_med_ZMass__99->GetYaxis()->SetTitleOffset(0.35);
   ZccHcc_boosted_PN_med_ZMass__99->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__99->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__99->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__99->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__99->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__100 = new TH1D("ZccHcc_boosted_PN_med_ZMass__100","",3,0,300);
   ZccHcc_boosted_PN_med_ZMass__100->SetBinContent(1,51.38732);
   ZccHcc_boosted_PN_med_ZMass__100->SetBinContent(2,11.07791);
   ZccHcc_boosted_PN_med_ZMass__100->SetBinError(1,8.650285);
   ZccHcc_boosted_PN_med_ZMass__100->SetBinError(2,3.766128);
   ZccHcc_boosted_PN_med_ZMass__100->SetEntries(50);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_ZMass__100->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__100->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__100->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_ZMass__100->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__100->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__100->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__100->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__100->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__100->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__100->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__100->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__100->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__39->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
