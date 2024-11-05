#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ZccHcc_boosted_PN_med_ZMass_JER()
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
   TPad *pad1_v1__32 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__32->Draw();
   pad1_v1__32->cd();
   pad1_v1__32->Range(-38.75,-4.002812,348.75,36.0253);
   pad1_v1__32->SetBorderSize(2);
   pad1_v1__32->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__81 = new TH1D("ZccHcc_boosted_PN_med_ZMass__81","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__81->SetBinContent(8,4.854131);
   ZccHcc_boosted_PN_med_ZMass__81->SetBinContent(9,15.34577);
   ZccHcc_boosted_PN_med_ZMass__81->SetBinContent(10,30.02249);
   ZccHcc_boosted_PN_med_ZMass__81->SetBinContent(11,6.938672);
   ZccHcc_boosted_PN_med_ZMass__81->SetBinContent(12,4.26416);
   ZccHcc_boosted_PN_med_ZMass__81->SetBinError(8,2.532705);
   ZccHcc_boosted_PN_med_ZMass__81->SetBinError(9,5.08006);
   ZccHcc_boosted_PN_med_ZMass__81->SetBinError(10,6.429797);
   ZccHcc_boosted_PN_med_ZMass__81->SetBinError(11,2.893516);
   ZccHcc_boosted_PN_med_ZMass__81->SetBinError(12,2.469172);
   ZccHcc_boosted_PN_med_ZMass__81->SetMaximum(32.02249);
   ZccHcc_boosted_PN_med_ZMass__81->SetEntries(49);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   ZccHcc_boosted_PN_med_ZMass__81->SetFillColor(ci);
   ZccHcc_boosted_PN_med_ZMass__81->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__81->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_ZMass__81->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__81->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__81->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__81->GetYaxis()->SetTitle("Events/10.000000");
   ZccHcc_boosted_PN_med_ZMass__81->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__81->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__81->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__81->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__81->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__81->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__82 = new TH1D("ZccHcc_boosted_PN_med_ZMass__82","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__82->SetBinContent(8,4.854131);
   ZccHcc_boosted_PN_med_ZMass__82->SetBinContent(9,15.34577);
   ZccHcc_boosted_PN_med_ZMass__82->SetBinContent(10,30.02249);
   ZccHcc_boosted_PN_med_ZMass__82->SetBinContent(11,6.938672);
   ZccHcc_boosted_PN_med_ZMass__82->SetBinContent(12,4.26416);
   ZccHcc_boosted_PN_med_ZMass__82->SetBinError(8,2.532705);
   ZccHcc_boosted_PN_med_ZMass__82->SetBinError(9,5.08006);
   ZccHcc_boosted_PN_med_ZMass__82->SetBinError(10,6.429797);
   ZccHcc_boosted_PN_med_ZMass__82->SetBinError(11,2.893516);
   ZccHcc_boosted_PN_med_ZMass__82->SetBinError(12,2.469172);
   ZccHcc_boosted_PN_med_ZMass__82->SetEntries(49);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_ZMass__82->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__82->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__82->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__82->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__82->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__82->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__82->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__82->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__82->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__82->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__82->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__82->Draw("same hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__83 = new TH1D("ZccHcc_boosted_PN_med_ZMass__83","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__83->SetBinContent(8,4.854131);
   ZccHcc_boosted_PN_med_ZMass__83->SetBinContent(9,16.65108);
   ZccHcc_boosted_PN_med_ZMass__83->SetBinContent(10,30.02249);
   ZccHcc_boosted_PN_med_ZMass__83->SetBinContent(11,6.938672);
   ZccHcc_boosted_PN_med_ZMass__83->SetBinContent(12,4.26416);
   ZccHcc_boosted_PN_med_ZMass__83->SetBinError(8,2.532705);
   ZccHcc_boosted_PN_med_ZMass__83->SetBinError(9,5.245078);
   ZccHcc_boosted_PN_med_ZMass__83->SetBinError(10,6.429797);
   ZccHcc_boosted_PN_med_ZMass__83->SetBinError(11,2.893516);
   ZccHcc_boosted_PN_med_ZMass__83->SetBinError(12,2.469172);
   ZccHcc_boosted_PN_med_ZMass__83->SetEntries(50);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_ZMass__83->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__83->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__83->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__83->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__83->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__83->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__83->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__83->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__83->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__83->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__83->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__83->Draw("same hist");
   
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
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_ZMass","JER Up","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_ZMass","JER Down","F");
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
   pad1_v1__32->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__33 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__33->Draw();
   pad1_v2__33->cd();
   pad1_v2__33->Range(-38.75,0.75,348.75,1.25);
   pad1_v2__33->SetBorderSize(2);
   pad1_v2__33->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__84 = new TH1D("ZccHcc_boosted_PN_med_ZMass__84","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__84->SetBinContent(8,1);
   ZccHcc_boosted_PN_med_ZMass__84->SetBinContent(9,1);
   ZccHcc_boosted_PN_med_ZMass__84->SetBinContent(10,1);
   ZccHcc_boosted_PN_med_ZMass__84->SetBinContent(11,1);
   ZccHcc_boosted_PN_med_ZMass__84->SetBinContent(12,1);
   ZccHcc_boosted_PN_med_ZMass__84->SetBinError(8,0.7378841);
   ZccHcc_boosted_PN_med_ZMass__84->SetBinError(9,0.4681609);
   ZccHcc_boosted_PN_med_ZMass__84->SetBinError(10,0.3028764);
   ZccHcc_boosted_PN_med_ZMass__84->SetBinError(11,0.5897453);
   ZccHcc_boosted_PN_med_ZMass__84->SetBinError(12,0.8189038);
   ZccHcc_boosted_PN_med_ZMass__84->SetMinimum(0.8);
   ZccHcc_boosted_PN_med_ZMass__84->SetMaximum(1.2);
   ZccHcc_boosted_PN_med_ZMass__84->SetEntries(13.34198);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_ZMass__84->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__84->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__84->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_ZMass__84->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__84->GetXaxis()->SetLabelSize(0.1);
   ZccHcc_boosted_PN_med_ZMass__84->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_ZMass__84->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__84->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__84->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   ZccHcc_boosted_PN_med_ZMass__84->GetYaxis()->CenterTitle(true);
   ZccHcc_boosted_PN_med_ZMass__84->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__84->GetYaxis()->SetLabelSize(0.09);
   ZccHcc_boosted_PN_med_ZMass__84->GetYaxis()->SetTitleSize(0.12);
   ZccHcc_boosted_PN_med_ZMass__84->GetYaxis()->SetTitleOffset(0.35);
   ZccHcc_boosted_PN_med_ZMass__84->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__84->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__84->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__84->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__84->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__85 = new TH1D("ZccHcc_boosted_PN_med_ZMass__85","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__85->SetBinContent(8,1);
   ZccHcc_boosted_PN_med_ZMass__85->SetBinContent(9,1.08506);
   ZccHcc_boosted_PN_med_ZMass__85->SetBinContent(10,1);
   ZccHcc_boosted_PN_med_ZMass__85->SetBinContent(11,1);
   ZccHcc_boosted_PN_med_ZMass__85->SetBinContent(12,1);
   ZccHcc_boosted_PN_med_ZMass__85->SetBinError(8,0.7378841);
   ZccHcc_boosted_PN_med_ZMass__85->SetBinError(9,0.4958283);
   ZccHcc_boosted_PN_med_ZMass__85->SetBinError(10,0.3028764);
   ZccHcc_boosted_PN_med_ZMass__85->SetBinError(11,0.5897453);
   ZccHcc_boosted_PN_med_ZMass__85->SetBinError(12,0.8189038);
   ZccHcc_boosted_PN_med_ZMass__85->SetEntries(13.60612);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_ZMass__85->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__85->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__85->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__85->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__85->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__85->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__85->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__85->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__85->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__85->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__85->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__85->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__33->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
