#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ZMass_PU()
{
//=========Macro generated from canvas: c1_n9/
//=========  (Fri Nov  1 11:45:57 2024) by ROOT version 6.30/03
   TCanvas *c1_n9 = new TCanvas("c1_n9", "",0,0,600,600);
   gStyle->SetOptStat(0);
   c1_n9->SetHighLightColor(2);
   c1_n9->Range(0,0,1,1);
   c1_n9->SetFillColor(0);
   c1_n9->SetBorderMode(0);
   c1_n9->SetBorderSize(2);
   c1_n9->SetLeftMargin(0.15);
   c1_n9->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_v1
   TPad *pad1_v1__142 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__142->Draw();
   pad1_v1__142->cd();
   pad1_v1__142->Range(-37.5,-3.555833,337.5,32.00249);
   pad1_v1__142->SetFillColor(0);
   pad1_v1__142->SetBorderMode(0);
   pad1_v1__142->SetBorderSize(2);
   pad1_v1__142->SetFrameBorderMode(0);
   pad1_v1__142->SetFrameBorderMode(0);
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__356 = new TH1D("ZccHcc_boosted_PN_med_ZMass__356","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__356->SetBinContent(8,4.115596);
   ZccHcc_boosted_PN_med_ZMass__356->SetBinContent(9,22.0949);
   ZccHcc_boosted_PN_med_ZMass__356->SetBinContent(10,26.44666);
   ZccHcc_boosted_PN_med_ZMass__356->SetBinContent(11,12.75271);
   ZccHcc_boosted_PN_med_ZMass__356->SetBinContent(12,2.127059);
   ZccHcc_boosted_PN_med_ZMass__356->SetBinContent(13,1.165541);
   ZccHcc_boosted_PN_med_ZMass__356->SetBinError(8,2.092185);
   ZccHcc_boosted_PN_med_ZMass__356->SetBinError(9,4.796023);
   ZccHcc_boosted_PN_med_ZMass__356->SetBinError(10,6.057786);
   ZccHcc_boosted_PN_med_ZMass__356->SetBinError(11,3.907322);
   ZccHcc_boosted_PN_med_ZMass__356->SetBinError(12,1.506193);
   ZccHcc_boosted_PN_med_ZMass__356->SetBinError(13,1.165541);
   ZccHcc_boosted_PN_med_ZMass__356->SetMaximum(28.44666);
   ZccHcc_boosted_PN_med_ZMass__356->SetEntries(75);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   ZccHcc_boosted_PN_med_ZMass__356->SetFillColor(ci);
   ZccHcc_boosted_PN_med_ZMass__356->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__356->GetXaxis()->SetTitle("M_{Z} [GeV]");
   ZccHcc_boosted_PN_med_ZMass__356->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_ZMass__356->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__356->GetXaxis()->SetTitleOffset(1.15);
   ZccHcc_boosted_PN_med_ZMass__356->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__356->GetYaxis()->SetTitle("Events/10.0 GeV");
   ZccHcc_boosted_PN_med_ZMass__356->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__356->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__356->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__356->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__356->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__356->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__357 = new TH1D("ZccHcc_boosted_PN_med_ZMass__357","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__357->SetBinContent(8,4.115596);
   ZccHcc_boosted_PN_med_ZMass__357->SetBinContent(9,22.0949);
   ZccHcc_boosted_PN_med_ZMass__357->SetBinContent(10,26.44666);
   ZccHcc_boosted_PN_med_ZMass__357->SetBinContent(11,12.75271);
   ZccHcc_boosted_PN_med_ZMass__357->SetBinContent(12,2.127059);
   ZccHcc_boosted_PN_med_ZMass__357->SetBinContent(13,1.165541);
   ZccHcc_boosted_PN_med_ZMass__357->SetBinError(8,2.092185);
   ZccHcc_boosted_PN_med_ZMass__357->SetBinError(9,4.796023);
   ZccHcc_boosted_PN_med_ZMass__357->SetBinError(10,6.057786);
   ZccHcc_boosted_PN_med_ZMass__357->SetBinError(11,3.907322);
   ZccHcc_boosted_PN_med_ZMass__357->SetBinError(12,1.506193);
   ZccHcc_boosted_PN_med_ZMass__357->SetBinError(13,1.165541);
   ZccHcc_boosted_PN_med_ZMass__357->SetEntries(75);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_ZMass__357->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__357->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__357->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__357->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__357->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__357->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__357->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__357->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__357->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__357->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__357->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__357->Draw("same hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__358 = new TH1D("ZccHcc_boosted_PN_med_ZMass__358","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__358->SetBinContent(8,4.115596);
   ZccHcc_boosted_PN_med_ZMass__358->SetBinContent(9,22.0949);
   ZccHcc_boosted_PN_med_ZMass__358->SetBinContent(10,26.44666);
   ZccHcc_boosted_PN_med_ZMass__358->SetBinContent(11,12.75271);
   ZccHcc_boosted_PN_med_ZMass__358->SetBinContent(12,2.127059);
   ZccHcc_boosted_PN_med_ZMass__358->SetBinContent(13,1.165541);
   ZccHcc_boosted_PN_med_ZMass__358->SetBinError(8,2.092185);
   ZccHcc_boosted_PN_med_ZMass__358->SetBinError(9,4.796023);
   ZccHcc_boosted_PN_med_ZMass__358->SetBinError(10,6.057786);
   ZccHcc_boosted_PN_med_ZMass__358->SetBinError(11,3.907322);
   ZccHcc_boosted_PN_med_ZMass__358->SetBinError(12,1.506193);
   ZccHcc_boosted_PN_med_ZMass__358->SetBinError(13,1.165541);
   ZccHcc_boosted_PN_med_ZMass__358->SetEntries(75);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_ZMass__358->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__358->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__358->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__358->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__358->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__358->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__358->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__358->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__358->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__358->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__358->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__358->Draw("same hist");
   
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
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_ZMass","PU Up","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_ZMass","PU Down","F");
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
   pad1_v1__142->Modified();
   c1_n9->cd();
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__143 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__143->Draw();
   pad1_v2__143->cd();
   pad1_v2__143->Range(-37.5,0.75,337.5,1.25);
   pad1_v2__143->SetFillColor(0);
   pad1_v2__143->SetBorderMode(0);
   pad1_v2__143->SetBorderSize(2);
   pad1_v2__143->SetFrameBorderMode(0);
   pad1_v2__143->SetFrameBorderMode(0);
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__359 = new TH1D("ZccHcc_boosted_PN_med_ZMass__359","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__359->SetBinContent(8,1);
   ZccHcc_boosted_PN_med_ZMass__359->SetBinContent(9,1);
   ZccHcc_boosted_PN_med_ZMass__359->SetBinContent(10,1);
   ZccHcc_boosted_PN_med_ZMass__359->SetBinContent(11,1);
   ZccHcc_boosted_PN_med_ZMass__359->SetBinContent(12,1);
   ZccHcc_boosted_PN_med_ZMass__359->SetBinContent(13,1);
   ZccHcc_boosted_PN_med_ZMass__359->SetBinError(8,0.718923);
   ZccHcc_boosted_PN_med_ZMass__359->SetBinError(9,0.3069759);
   ZccHcc_boosted_PN_med_ZMass__359->SetBinError(10,0.3239352);
   ZccHcc_boosted_PN_med_ZMass__359->SetBinError(11,0.433303);
   ZccHcc_boosted_PN_med_ZMass__359->SetBinError(12,1.001419);
   ZccHcc_boosted_PN_med_ZMass__359->SetBinError(13,1.414214);
   ZccHcc_boosted_PN_med_ZMass__359->SetMinimum(0.8);
   ZccHcc_boosted_PN_med_ZMass__359->SetMaximum(1.2);
   ZccHcc_boosted_PN_med_ZMass__359->SetEntries(9.21515);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_ZMass__359->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__359->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__359->GetXaxis()->SetTitle("M_{Z} [GeV]");
   ZccHcc_boosted_PN_med_ZMass__359->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_ZMass__359->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__359->GetXaxis()->SetLabelSize(0.1);
   ZccHcc_boosted_PN_med_ZMass__359->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_ZMass__359->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__359->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__359->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   ZccHcc_boosted_PN_med_ZMass__359->GetYaxis()->CenterTitle(true);
   ZccHcc_boosted_PN_med_ZMass__359->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__359->GetYaxis()->SetLabelSize(0.09);
   ZccHcc_boosted_PN_med_ZMass__359->GetYaxis()->SetTitleSize(0.12);
   ZccHcc_boosted_PN_med_ZMass__359->GetYaxis()->SetTitleOffset(0.35);
   ZccHcc_boosted_PN_med_ZMass__359->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__359->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__359->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__359->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__359->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__360 = new TH1D("ZccHcc_boosted_PN_med_ZMass__360","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__360->SetBinContent(8,1);
   ZccHcc_boosted_PN_med_ZMass__360->SetBinContent(9,1);
   ZccHcc_boosted_PN_med_ZMass__360->SetBinContent(10,1);
   ZccHcc_boosted_PN_med_ZMass__360->SetBinContent(11,1);
   ZccHcc_boosted_PN_med_ZMass__360->SetBinContent(12,1);
   ZccHcc_boosted_PN_med_ZMass__360->SetBinContent(13,1);
   ZccHcc_boosted_PN_med_ZMass__360->SetBinError(8,0.718923);
   ZccHcc_boosted_PN_med_ZMass__360->SetBinError(9,0.3069759);
   ZccHcc_boosted_PN_med_ZMass__360->SetBinError(10,0.3239352);
   ZccHcc_boosted_PN_med_ZMass__360->SetBinError(11,0.433303);
   ZccHcc_boosted_PN_med_ZMass__360->SetBinError(12,1.001419);
   ZccHcc_boosted_PN_med_ZMass__360->SetBinError(13,1.414214);
   ZccHcc_boosted_PN_med_ZMass__360->SetEntries(9.21515);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_ZMass__360->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__360->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__360->GetXaxis()->SetTitle("M_{Z} [GeV]");
   ZccHcc_boosted_PN_med_ZMass__360->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__360->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__360->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_ZMass__360->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__360->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__360->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__360->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__360->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__360->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__360->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__360->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__143->Modified();
   c1_n9->cd();
   c1_n9->Modified();
   c1_n9->SetSelected(c1_n9);
}
