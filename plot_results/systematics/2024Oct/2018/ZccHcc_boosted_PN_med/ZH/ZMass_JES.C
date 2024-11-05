#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ZMass_JES()
{
//=========Macro generated from canvas: c1_n6/
//=========  (Fri Nov  1 11:45:57 2024) by ROOT version 6.30/03
   TCanvas *c1_n6 = new TCanvas("c1_n6", "",0,0,600,600);
   gStyle->SetOptStat(0);
   c1_n6->SetHighLightColor(2);
   c1_n6->Range(0,0,1,1);
   c1_n6->SetFillColor(0);
   c1_n6->SetBorderMode(0);
   c1_n6->SetBorderSize(2);
   c1_n6->SetLeftMargin(0.15);
   c1_n6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_v1
   TPad *pad1_v1__136 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__136->Draw();
   pad1_v1__136->cd();
   pad1_v1__136->Range(-37.5,-3.555833,337.5,32.00249);
   pad1_v1__136->SetFillColor(0);
   pad1_v1__136->SetBorderMode(0);
   pad1_v1__136->SetBorderSize(2);
   pad1_v1__136->SetFrameBorderMode(0);
   pad1_v1__136->SetFrameBorderMode(0);
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__341 = new TH1D("ZccHcc_boosted_PN_med_ZMass__341","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__341->SetBinContent(8,4.115596);
   ZccHcc_boosted_PN_med_ZMass__341->SetBinContent(9,22.0949);
   ZccHcc_boosted_PN_med_ZMass__341->SetBinContent(10,26.44666);
   ZccHcc_boosted_PN_med_ZMass__341->SetBinContent(11,12.75271);
   ZccHcc_boosted_PN_med_ZMass__341->SetBinContent(12,2.127059);
   ZccHcc_boosted_PN_med_ZMass__341->SetBinContent(13,1.165541);
   ZccHcc_boosted_PN_med_ZMass__341->SetBinError(8,2.092185);
   ZccHcc_boosted_PN_med_ZMass__341->SetBinError(9,4.796023);
   ZccHcc_boosted_PN_med_ZMass__341->SetBinError(10,6.057786);
   ZccHcc_boosted_PN_med_ZMass__341->SetBinError(11,3.907322);
   ZccHcc_boosted_PN_med_ZMass__341->SetBinError(12,1.506193);
   ZccHcc_boosted_PN_med_ZMass__341->SetBinError(13,1.165541);
   ZccHcc_boosted_PN_med_ZMass__341->SetMaximum(28.44666);
   ZccHcc_boosted_PN_med_ZMass__341->SetEntries(75);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   ZccHcc_boosted_PN_med_ZMass__341->SetFillColor(ci);
   ZccHcc_boosted_PN_med_ZMass__341->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__341->GetXaxis()->SetTitle("M_{Z} [GeV]");
   ZccHcc_boosted_PN_med_ZMass__341->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_ZMass__341->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__341->GetXaxis()->SetTitleOffset(1.15);
   ZccHcc_boosted_PN_med_ZMass__341->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__341->GetYaxis()->SetTitle("Events/10.0 GeV");
   ZccHcc_boosted_PN_med_ZMass__341->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__341->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__341->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__341->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__341->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__341->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__342 = new TH1D("ZccHcc_boosted_PN_med_ZMass__342","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__342->SetBinContent(8,4.115596);
   ZccHcc_boosted_PN_med_ZMass__342->SetBinContent(9,22.0949);
   ZccHcc_boosted_PN_med_ZMass__342->SetBinContent(10,26.44666);
   ZccHcc_boosted_PN_med_ZMass__342->SetBinContent(11,12.75271);
   ZccHcc_boosted_PN_med_ZMass__342->SetBinContent(12,2.127059);
   ZccHcc_boosted_PN_med_ZMass__342->SetBinContent(13,1.165541);
   ZccHcc_boosted_PN_med_ZMass__342->SetBinError(8,2.092185);
   ZccHcc_boosted_PN_med_ZMass__342->SetBinError(9,4.796023);
   ZccHcc_boosted_PN_med_ZMass__342->SetBinError(10,6.057786);
   ZccHcc_boosted_PN_med_ZMass__342->SetBinError(11,3.907322);
   ZccHcc_boosted_PN_med_ZMass__342->SetBinError(12,1.506193);
   ZccHcc_boosted_PN_med_ZMass__342->SetBinError(13,1.165541);
   ZccHcc_boosted_PN_med_ZMass__342->SetEntries(75);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_ZMass__342->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__342->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__342->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__342->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__342->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__342->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__342->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__342->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__342->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__342->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__342->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__342->Draw("same hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__343 = new TH1D("ZccHcc_boosted_PN_med_ZMass__343","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__343->SetBinContent(8,4.115596);
   ZccHcc_boosted_PN_med_ZMass__343->SetBinContent(9,22.0949);
   ZccHcc_boosted_PN_med_ZMass__343->SetBinContent(10,26.44666);
   ZccHcc_boosted_PN_med_ZMass__343->SetBinContent(11,12.75271);
   ZccHcc_boosted_PN_med_ZMass__343->SetBinContent(12,2.127059);
   ZccHcc_boosted_PN_med_ZMass__343->SetBinContent(13,1.165541);
   ZccHcc_boosted_PN_med_ZMass__343->SetBinError(8,2.092185);
   ZccHcc_boosted_PN_med_ZMass__343->SetBinError(9,4.796023);
   ZccHcc_boosted_PN_med_ZMass__343->SetBinError(10,6.057786);
   ZccHcc_boosted_PN_med_ZMass__343->SetBinError(11,3.907322);
   ZccHcc_boosted_PN_med_ZMass__343->SetBinError(12,1.506193);
   ZccHcc_boosted_PN_med_ZMass__343->SetBinError(13,1.165541);
   ZccHcc_boosted_PN_med_ZMass__343->SetEntries(75);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_ZMass__343->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__343->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__343->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__343->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__343->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__343->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__343->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__343->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__343->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__343->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__343->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__343->Draw("same hist");
   
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
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_ZMass","JES Up","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_ZMass","JES Down","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   pad1_v1__136->Modified();
   c1_n6->cd();
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__137 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__137->Draw();
   pad1_v2__137->cd();
   pad1_v2__137->Range(-37.5,0.75,337.5,1.25);
   pad1_v2__137->SetFillColor(0);
   pad1_v2__137->SetBorderMode(0);
   pad1_v2__137->SetBorderSize(2);
   pad1_v2__137->SetFrameBorderMode(0);
   pad1_v2__137->SetFrameBorderMode(0);
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__344 = new TH1D("ZccHcc_boosted_PN_med_ZMass__344","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__344->SetBinContent(8,1);
   ZccHcc_boosted_PN_med_ZMass__344->SetBinContent(9,1);
   ZccHcc_boosted_PN_med_ZMass__344->SetBinContent(10,1);
   ZccHcc_boosted_PN_med_ZMass__344->SetBinContent(11,1);
   ZccHcc_boosted_PN_med_ZMass__344->SetBinContent(12,1);
   ZccHcc_boosted_PN_med_ZMass__344->SetBinContent(13,1);
   ZccHcc_boosted_PN_med_ZMass__344->SetBinError(8,0.718923);
   ZccHcc_boosted_PN_med_ZMass__344->SetBinError(9,0.3069759);
   ZccHcc_boosted_PN_med_ZMass__344->SetBinError(10,0.3239352);
   ZccHcc_boosted_PN_med_ZMass__344->SetBinError(11,0.433303);
   ZccHcc_boosted_PN_med_ZMass__344->SetBinError(12,1.001419);
   ZccHcc_boosted_PN_med_ZMass__344->SetBinError(13,1.414214);
   ZccHcc_boosted_PN_med_ZMass__344->SetMinimum(0.8);
   ZccHcc_boosted_PN_med_ZMass__344->SetMaximum(1.2);
   ZccHcc_boosted_PN_med_ZMass__344->SetEntries(9.21515);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_ZMass__344->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__344->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__344->GetXaxis()->SetTitle("M_{Z} [GeV]");
   ZccHcc_boosted_PN_med_ZMass__344->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_ZMass__344->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__344->GetXaxis()->SetLabelSize(0.1);
   ZccHcc_boosted_PN_med_ZMass__344->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_ZMass__344->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__344->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__344->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   ZccHcc_boosted_PN_med_ZMass__344->GetYaxis()->CenterTitle(true);
   ZccHcc_boosted_PN_med_ZMass__344->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__344->GetYaxis()->SetLabelSize(0.09);
   ZccHcc_boosted_PN_med_ZMass__344->GetYaxis()->SetTitleSize(0.12);
   ZccHcc_boosted_PN_med_ZMass__344->GetYaxis()->SetTitleOffset(0.35);
   ZccHcc_boosted_PN_med_ZMass__344->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__344->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__344->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__344->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__344->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__345 = new TH1D("ZccHcc_boosted_PN_med_ZMass__345","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__345->SetBinContent(8,1);
   ZccHcc_boosted_PN_med_ZMass__345->SetBinContent(9,1);
   ZccHcc_boosted_PN_med_ZMass__345->SetBinContent(10,1);
   ZccHcc_boosted_PN_med_ZMass__345->SetBinContent(11,1);
   ZccHcc_boosted_PN_med_ZMass__345->SetBinContent(12,1);
   ZccHcc_boosted_PN_med_ZMass__345->SetBinContent(13,1);
   ZccHcc_boosted_PN_med_ZMass__345->SetBinError(8,0.718923);
   ZccHcc_boosted_PN_med_ZMass__345->SetBinError(9,0.3069759);
   ZccHcc_boosted_PN_med_ZMass__345->SetBinError(10,0.3239352);
   ZccHcc_boosted_PN_med_ZMass__345->SetBinError(11,0.433303);
   ZccHcc_boosted_PN_med_ZMass__345->SetBinError(12,1.001419);
   ZccHcc_boosted_PN_med_ZMass__345->SetBinError(13,1.414214);
   ZccHcc_boosted_PN_med_ZMass__345->SetEntries(9.21515);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_ZMass__345->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__345->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__345->GetXaxis()->SetTitle("M_{Z} [GeV]");
   ZccHcc_boosted_PN_med_ZMass__345->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__345->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__345->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_ZMass__345->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__345->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__345->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__345->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__345->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__345->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__345->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__345->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__137->Modified();
   c1_n6->cd();
   c1_n6->Modified();
   c1_n6->SetSelected(c1_n6);
}
