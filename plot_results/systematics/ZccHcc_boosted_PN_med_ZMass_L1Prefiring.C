#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ZccHcc_boosted_PN_med_ZMass_L1Prefiring()
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
   TPad *pad1_v1__34 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__34->Draw();
   pad1_v1__34->cd();
   pad1_v1__34->Range(-38.75,-4.008729,348.75,36.07856);
   pad1_v1__34->SetBorderSize(2);
   pad1_v1__34->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__86 = new TH1D("ZccHcc_boosted_PN_med_ZMass__86","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__86->SetBinContent(8,4.854131);
   ZccHcc_boosted_PN_med_ZMass__86->SetBinContent(9,15.34577);
   ZccHcc_boosted_PN_med_ZMass__86->SetBinContent(10,30.02249);
   ZccHcc_boosted_PN_med_ZMass__86->SetBinContent(11,6.938672);
   ZccHcc_boosted_PN_med_ZMass__86->SetBinContent(12,4.26416);
   ZccHcc_boosted_PN_med_ZMass__86->SetBinError(8,2.532705);
   ZccHcc_boosted_PN_med_ZMass__86->SetBinError(9,5.08006);
   ZccHcc_boosted_PN_med_ZMass__86->SetBinError(10,6.429797);
   ZccHcc_boosted_PN_med_ZMass__86->SetBinError(11,2.893516);
   ZccHcc_boosted_PN_med_ZMass__86->SetBinError(12,2.469172);
   ZccHcc_boosted_PN_med_ZMass__86->SetMaximum(32.06983);
   ZccHcc_boosted_PN_med_ZMass__86->SetEntries(49);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   ZccHcc_boosted_PN_med_ZMass__86->SetFillColor(ci);
   ZccHcc_boosted_PN_med_ZMass__86->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__86->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_ZMass__86->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__86->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__86->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__86->GetYaxis()->SetTitle("Events/10.000000");
   ZccHcc_boosted_PN_med_ZMass__86->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__86->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__86->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__86->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__86->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__86->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__87 = new TH1D("ZccHcc_boosted_PN_med_ZMass__87","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__87->SetBinContent(8,4.853363);
   ZccHcc_boosted_PN_med_ZMass__87->SetBinContent(9,15.32842);
   ZccHcc_boosted_PN_med_ZMass__87->SetBinContent(10,29.97302);
   ZccHcc_boosted_PN_med_ZMass__87->SetBinContent(11,6.92161);
   ZccHcc_boosted_PN_med_ZMass__87->SetBinContent(12,4.253064);
   ZccHcc_boosted_PN_med_ZMass__87->SetBinError(8,2.532209);
   ZccHcc_boosted_PN_med_ZMass__87->SetBinError(9,5.075638);
   ZccHcc_boosted_PN_med_ZMass__87->SetBinError(10,6.420366);
   ZccHcc_boosted_PN_med_ZMass__87->SetBinError(11,2.887426);
   ZccHcc_boosted_PN_med_ZMass__87->SetBinError(12,2.463109);
   ZccHcc_boosted_PN_med_ZMass__87->SetEntries(49);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_ZMass__87->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__87->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__87->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__87->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__87->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__87->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__87->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__87->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__87->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__87->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__87->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__87->Draw("same hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__88 = new TH1D("ZccHcc_boosted_PN_med_ZMass__88","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__88->SetBinContent(8,4.854898);
   ZccHcc_boosted_PN_med_ZMass__88->SetBinContent(9,15.35577);
   ZccHcc_boosted_PN_med_ZMass__88->SetBinContent(10,30.06983);
   ZccHcc_boosted_PN_med_ZMass__88->SetBinContent(11,6.95451);
   ZccHcc_boosted_PN_med_ZMass__88->SetBinContent(12,4.275255);
   ZccHcc_boosted_PN_med_ZMass__88->SetBinError(8,2.533201);
   ZccHcc_boosted_PN_med_ZMass__88->SetBinError(9,5.082539);
   ZccHcc_boosted_PN_med_ZMass__88->SetBinError(10,6.438903);
   ZccHcc_boosted_PN_med_ZMass__88->SetBinError(11,2.899304);
   ZccHcc_boosted_PN_med_ZMass__88->SetBinError(12,2.475245);
   ZccHcc_boosted_PN_med_ZMass__88->SetEntries(49);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_ZMass__88->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__88->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__88->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__88->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__88->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__88->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__88->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__88->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__88->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__88->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__88->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__88->Draw("same hist");
   
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
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_ZMass","L1Prefiring Up","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_ZMass","L1Prefiring Down","F");
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
   pad1_v1__34->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__35 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__35->Draw();
   pad1_v2__35->cd();
   pad1_v2__35->Range(-38.75,0.75,348.75,1.25);
   pad1_v2__35->SetBorderSize(2);
   pad1_v2__35->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__89 = new TH1D("ZccHcc_boosted_PN_med_ZMass__89","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__89->SetBinContent(8,0.999842);
   ZccHcc_boosted_PN_med_ZMass__89->SetBinContent(9,0.9988696);
   ZccHcc_boosted_PN_med_ZMass__89->SetBinContent(10,0.9983522);
   ZccHcc_boosted_PN_med_ZMass__89->SetBinContent(11,0.997541);
   ZccHcc_boosted_PN_med_ZMass__89->SetBinContent(12,0.997398);
   ZccHcc_boosted_PN_med_ZMass__89->SetBinError(8,0.7377536);
   ZccHcc_boosted_PN_med_ZMass__89->SetBinError(9,0.4676926);
   ZccHcc_boosted_PN_med_ZMass__89->SetBinError(10,0.3024048);
   ZccHcc_boosted_PN_med_ZMass__89->SetBinError(11,0.5883996);
   ZccHcc_boosted_PN_med_ZMass__89->SetBinError(12,0.816833);
   ZccHcc_boosted_PN_med_ZMass__89->SetMinimum(0.8);
   ZccHcc_boosted_PN_med_ZMass__89->SetMaximum(1.2);
   ZccHcc_boosted_PN_med_ZMass__89->SetEntries(13.34127);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_ZMass__89->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__89->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__89->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_ZMass__89->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__89->GetXaxis()->SetLabelSize(0.1);
   ZccHcc_boosted_PN_med_ZMass__89->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_ZMass__89->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__89->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__89->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   ZccHcc_boosted_PN_med_ZMass__89->GetYaxis()->CenterTitle(true);
   ZccHcc_boosted_PN_med_ZMass__89->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__89->GetYaxis()->SetLabelSize(0.09);
   ZccHcc_boosted_PN_med_ZMass__89->GetYaxis()->SetTitleSize(0.12);
   ZccHcc_boosted_PN_med_ZMass__89->GetYaxis()->SetTitleOffset(0.35);
   ZccHcc_boosted_PN_med_ZMass__89->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__89->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__89->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__89->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__89->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__90 = new TH1D("ZccHcc_boosted_PN_med_ZMass__90","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__90->SetBinContent(8,1.000158);
   ZccHcc_boosted_PN_med_ZMass__90->SetBinContent(9,1.000651);
   ZccHcc_boosted_PN_med_ZMass__90->SetBinContent(10,1.001577);
   ZccHcc_boosted_PN_med_ZMass__90->SetBinContent(11,1.002282);
   ZccHcc_boosted_PN_med_ZMass__90->SetBinContent(12,1.002602);
   ZccHcc_boosted_PN_med_ZMass__90->SetBinError(8,0.7380147);
   ZccHcc_boosted_PN_med_ZMass__90->SetBinError(9,0.4684277);
   ZccHcc_boosted_PN_med_ZMass__90->SetBinError(10,0.3033297);
   ZccHcc_boosted_PN_med_ZMass__90->SetBinError(11,0.5910082);
   ZccHcc_boosted_PN_med_ZMass__90->SetBinError(12,0.8209763);
   ZccHcc_boosted_PN_med_ZMass__90->SetEntries(13.34089);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_ZMass__90->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__90->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__90->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__90->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__90->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__90->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__90->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__90->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__90->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__90->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__90->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__90->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__35->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
