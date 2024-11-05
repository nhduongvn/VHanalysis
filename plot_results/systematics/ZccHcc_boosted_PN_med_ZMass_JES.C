#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ZccHcc_boosted_PN_med_ZMass_JES()
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
   TPad *pad1_v1__30 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__30->Draw();
   pad1_v1__30->cd();
   pad1_v1__30->Range(-38.75,-4.002812,348.75,36.0253);
   pad1_v1__30->SetBorderSize(2);
   pad1_v1__30->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__76 = new TH1D("ZccHcc_boosted_PN_med_ZMass__76","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__76->SetBinContent(8,4.854131);
   ZccHcc_boosted_PN_med_ZMass__76->SetBinContent(9,15.34577);
   ZccHcc_boosted_PN_med_ZMass__76->SetBinContent(10,30.02249);
   ZccHcc_boosted_PN_med_ZMass__76->SetBinContent(11,6.938672);
   ZccHcc_boosted_PN_med_ZMass__76->SetBinContent(12,4.26416);
   ZccHcc_boosted_PN_med_ZMass__76->SetBinError(8,2.532705);
   ZccHcc_boosted_PN_med_ZMass__76->SetBinError(9,5.08006);
   ZccHcc_boosted_PN_med_ZMass__76->SetBinError(10,6.429797);
   ZccHcc_boosted_PN_med_ZMass__76->SetBinError(11,2.893516);
   ZccHcc_boosted_PN_med_ZMass__76->SetBinError(12,2.469172);
   ZccHcc_boosted_PN_med_ZMass__76->SetMaximum(32.02249);
   ZccHcc_boosted_PN_med_ZMass__76->SetEntries(49);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   ZccHcc_boosted_PN_med_ZMass__76->SetFillColor(ci);
   ZccHcc_boosted_PN_med_ZMass__76->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__76->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_ZMass__76->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__76->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__76->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__76->GetYaxis()->SetTitle("Events/10.000000");
   ZccHcc_boosted_PN_med_ZMass__76->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__76->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__76->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__76->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__76->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__76->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__77 = new TH1D("ZccHcc_boosted_PN_med_ZMass__77","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__77->SetBinContent(8,4.713744);
   ZccHcc_boosted_PN_med_ZMass__77->SetBinContent(9,16.65108);
   ZccHcc_boosted_PN_med_ZMass__77->SetBinContent(10,30.02249);
   ZccHcc_boosted_PN_med_ZMass__77->SetBinContent(11,6.813745);
   ZccHcc_boosted_PN_med_ZMass__77->SetBinContent(12,4.26416);
   ZccHcc_boosted_PN_med_ZMass__77->SetBinError(8,2.444237);
   ZccHcc_boosted_PN_med_ZMass__77->SetBinError(9,5.245078);
   ZccHcc_boosted_PN_med_ZMass__77->SetBinError(10,6.429797);
   ZccHcc_boosted_PN_med_ZMass__77->SetBinError(11,2.843749);
   ZccHcc_boosted_PN_med_ZMass__77->SetBinError(12,2.469172);
   ZccHcc_boosted_PN_med_ZMass__77->SetEntries(50);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_ZMass__77->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__77->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__77->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__77->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__77->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__77->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__77->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__77->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__77->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__77->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__77->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__77->Draw("same hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__78 = new TH1D("ZccHcc_boosted_PN_med_ZMass__78","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__78->SetBinContent(8,4.854131);
   ZccHcc_boosted_PN_med_ZMass__78->SetBinContent(9,15.34577);
   ZccHcc_boosted_PN_med_ZMass__78->SetBinContent(10,28.69288);
   ZccHcc_boosted_PN_med_ZMass__78->SetBinContent(11,7.023993);
   ZccHcc_boosted_PN_med_ZMass__78->SetBinContent(12,4.26416);
   ZccHcc_boosted_PN_med_ZMass__78->SetBinError(8,2.532705);
   ZccHcc_boosted_PN_med_ZMass__78->SetBinError(9,5.08006);
   ZccHcc_boosted_PN_med_ZMass__78->SetBinError(10,6.29082);
   ZccHcc_boosted_PN_med_ZMass__78->SetBinError(11,2.916439);
   ZccHcc_boosted_PN_med_ZMass__78->SetBinError(12,2.469172);
   ZccHcc_boosted_PN_med_ZMass__78->SetEntries(48);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_ZMass__78->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__78->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__78->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__78->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__78->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__78->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__78->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__78->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__78->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__78->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__78->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__78->Draw("same hist");
   
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

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_ZMass","JES Down","F");
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
   pad1_v1__30->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__31 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__31->Draw();
   pad1_v2__31->cd();
   pad1_v2__31->Range(-38.75,0.75,348.75,1.25);
   pad1_v2__31->SetBorderSize(2);
   pad1_v2__31->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__79 = new TH1D("ZccHcc_boosted_PN_med_ZMass__79","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__79->SetBinContent(8,0.971079);
   ZccHcc_boosted_PN_med_ZMass__79->SetBinContent(9,1.08506);
   ZccHcc_boosted_PN_med_ZMass__79->SetBinContent(10,1);
   ZccHcc_boosted_PN_med_ZMass__79->SetBinContent(11,0.9819955);
   ZccHcc_boosted_PN_med_ZMass__79->SetBinContent(12,1);
   ZccHcc_boosted_PN_med_ZMass__79->SetBinError(8,0.7143302);
   ZccHcc_boosted_PN_med_ZMass__79->SetBinError(9,0.4958283);
   ZccHcc_boosted_PN_med_ZMass__79->SetBinError(10,0.3028764);
   ZccHcc_boosted_PN_med_ZMass__79->SetBinError(11,0.5793647);
   ZccHcc_boosted_PN_med_ZMass__79->SetBinError(12,0.8189038);
   ZccHcc_boosted_PN_med_ZMass__79->SetMinimum(0.8);
   ZccHcc_boosted_PN_med_ZMass__79->SetMaximum(1.2);
   ZccHcc_boosted_PN_med_ZMass__79->SetEntries(13.68999);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_ZMass__79->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__79->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__79->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_ZMass__79->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__79->GetXaxis()->SetLabelSize(0.1);
   ZccHcc_boosted_PN_med_ZMass__79->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_ZMass__79->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__79->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__79->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   ZccHcc_boosted_PN_med_ZMass__79->GetYaxis()->CenterTitle(true);
   ZccHcc_boosted_PN_med_ZMass__79->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__79->GetYaxis()->SetLabelSize(0.09);
   ZccHcc_boosted_PN_med_ZMass__79->GetYaxis()->SetTitleSize(0.12);
   ZccHcc_boosted_PN_med_ZMass__79->GetYaxis()->SetTitleOffset(0.35);
   ZccHcc_boosted_PN_med_ZMass__79->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__79->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__79->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__79->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__79->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__80 = new TH1D("ZccHcc_boosted_PN_med_ZMass__80","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__80->SetBinContent(8,1);
   ZccHcc_boosted_PN_med_ZMass__80->SetBinContent(9,1);
   ZccHcc_boosted_PN_med_ZMass__80->SetBinContent(10,0.9557128);
   ZccHcc_boosted_PN_med_ZMass__80->SetBinContent(11,1.012296);
   ZccHcc_boosted_PN_med_ZMass__80->SetBinContent(12,1);
   ZccHcc_boosted_PN_med_ZMass__80->SetBinError(8,0.7378841);
   ZccHcc_boosted_PN_med_ZMass__80->SetBinError(9,0.4681609);
   ZccHcc_boosted_PN_med_ZMass__80->SetBinError(10,0.2929165);
   ZccHcc_boosted_PN_med_ZMass__80->SetBinError(11,0.5957086);
   ZccHcc_boosted_PN_med_ZMass__80->SetBinError(12,0.8189038);
   ZccHcc_boosted_PN_med_ZMass__80->SetEntries(13.16382);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_ZMass__80->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__80->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__80->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__80->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__80->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__80->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__80->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__80->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__80->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__80->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__80->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__80->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__31->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
