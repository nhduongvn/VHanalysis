#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ZMass_JES()
{
//=========Macro generated from canvas: c1_n7/
//=========  (Fri Nov  1 13:56:20 2024) by ROOT version 6.30/03
   TCanvas *c1_n7 = new TCanvas("c1_n7", "",0,0,600,600);
   gStyle->SetOptStat(0);
   c1_n7->SetHighLightColor(2);
   c1_n7->Range(0,0,1,1);
   c1_n7->SetFillColor(0);
   c1_n7->SetBorderMode(0);
   c1_n7->SetBorderSize(2);
   c1_n7->SetLeftMargin(0.15);
   c1_n7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_v1
   TPad *pad1_v1__12 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__12->Draw();
   pad1_v1__12->cd();
   pad1_v1__12->Range(-37.5,-4.002812,337.5,36.02531);
   pad1_v1__12->SetFillColor(0);
   pad1_v1__12->SetBorderMode(0);
   pad1_v1__12->SetBorderSize(2);
   pad1_v1__12->SetFrameBorderMode(0);
   pad1_v1__12->SetFrameBorderMode(0);
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__31 = new TH1D("ZccHcc_boosted_PN_med_ZMass__31","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__31->SetBinContent(8,4.854131);
   ZccHcc_boosted_PN_med_ZMass__31->SetBinContent(9,15.34577);
   ZccHcc_boosted_PN_med_ZMass__31->SetBinContent(10,30.02249);
   ZccHcc_boosted_PN_med_ZMass__31->SetBinContent(11,6.938672);
   ZccHcc_boosted_PN_med_ZMass__31->SetBinContent(12,4.26416);
   ZccHcc_boosted_PN_med_ZMass__31->SetBinError(8,2.532705);
   ZccHcc_boosted_PN_med_ZMass__31->SetBinError(9,5.08006);
   ZccHcc_boosted_PN_med_ZMass__31->SetBinError(10,6.429797);
   ZccHcc_boosted_PN_med_ZMass__31->SetBinError(11,2.893516);
   ZccHcc_boosted_PN_med_ZMass__31->SetBinError(12,2.469172);
   ZccHcc_boosted_PN_med_ZMass__31->SetMaximum(32.02249);
   ZccHcc_boosted_PN_med_ZMass__31->SetEntries(49);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   ZccHcc_boosted_PN_med_ZMass__31->SetFillColor(ci);
   ZccHcc_boosted_PN_med_ZMass__31->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__31->GetXaxis()->SetTitle("M_{Z} [GeV]");
   ZccHcc_boosted_PN_med_ZMass__31->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_ZMass__31->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__31->GetXaxis()->SetTitleOffset(1.15);
   ZccHcc_boosted_PN_med_ZMass__31->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__31->GetYaxis()->SetTitle("Events/10.0 GeV");
   ZccHcc_boosted_PN_med_ZMass__31->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__31->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__31->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__31->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__31->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__31->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__32 = new TH1D("ZccHcc_boosted_PN_med_ZMass__32","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__32->SetBinContent(8,4.713744);
   ZccHcc_boosted_PN_med_ZMass__32->SetBinContent(9,16.65108);
   ZccHcc_boosted_PN_med_ZMass__32->SetBinContent(10,30.02249);
   ZccHcc_boosted_PN_med_ZMass__32->SetBinContent(11,6.813745);
   ZccHcc_boosted_PN_med_ZMass__32->SetBinContent(12,4.26416);
   ZccHcc_boosted_PN_med_ZMass__32->SetBinError(8,2.444237);
   ZccHcc_boosted_PN_med_ZMass__32->SetBinError(9,5.245078);
   ZccHcc_boosted_PN_med_ZMass__32->SetBinError(10,6.429797);
   ZccHcc_boosted_PN_med_ZMass__32->SetBinError(11,2.843749);
   ZccHcc_boosted_PN_med_ZMass__32->SetBinError(12,2.469172);
   ZccHcc_boosted_PN_med_ZMass__32->SetEntries(50);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_ZMass__32->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__32->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__32->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__32->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__32->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__32->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__32->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__32->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__32->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__32->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__32->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__32->Draw("same hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__33 = new TH1D("ZccHcc_boosted_PN_med_ZMass__33","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__33->SetBinContent(8,4.854131);
   ZccHcc_boosted_PN_med_ZMass__33->SetBinContent(9,15.34577);
   ZccHcc_boosted_PN_med_ZMass__33->SetBinContent(10,28.69288);
   ZccHcc_boosted_PN_med_ZMass__33->SetBinContent(11,7.023993);
   ZccHcc_boosted_PN_med_ZMass__33->SetBinContent(12,4.26416);
   ZccHcc_boosted_PN_med_ZMass__33->SetBinError(8,2.532705);
   ZccHcc_boosted_PN_med_ZMass__33->SetBinError(9,5.08006);
   ZccHcc_boosted_PN_med_ZMass__33->SetBinError(10,6.29082);
   ZccHcc_boosted_PN_med_ZMass__33->SetBinError(11,2.916439);
   ZccHcc_boosted_PN_med_ZMass__33->SetBinError(12,2.469172);
   ZccHcc_boosted_PN_med_ZMass__33->SetEntries(48);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_ZMass__33->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__33->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__33->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__33->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__33->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__33->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__33->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__33->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__33->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__33->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__33->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__33->Draw("same hist");
   
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
   pad1_v1__12->Modified();
   c1_n7->cd();
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__13 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__13->Draw();
   pad1_v2__13->cd();
   pad1_v2__13->Range(-37.5,0.75,337.5,1.25);
   pad1_v2__13->SetFillColor(0);
   pad1_v2__13->SetBorderMode(0);
   pad1_v2__13->SetBorderSize(2);
   pad1_v2__13->SetFrameBorderMode(0);
   pad1_v2__13->SetFrameBorderMode(0);
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__34 = new TH1D("ZccHcc_boosted_PN_med_ZMass__34","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__34->SetBinContent(8,0.971079);
   ZccHcc_boosted_PN_med_ZMass__34->SetBinContent(9,1.08506);
   ZccHcc_boosted_PN_med_ZMass__34->SetBinContent(10,1);
   ZccHcc_boosted_PN_med_ZMass__34->SetBinContent(11,0.9819955);
   ZccHcc_boosted_PN_med_ZMass__34->SetBinContent(12,1);
   ZccHcc_boosted_PN_med_ZMass__34->SetBinError(8,0.7143302);
   ZccHcc_boosted_PN_med_ZMass__34->SetBinError(9,0.4958283);
   ZccHcc_boosted_PN_med_ZMass__34->SetBinError(10,0.3028764);
   ZccHcc_boosted_PN_med_ZMass__34->SetBinError(11,0.5793647);
   ZccHcc_boosted_PN_med_ZMass__34->SetBinError(12,0.8189038);
   ZccHcc_boosted_PN_med_ZMass__34->SetMinimum(0.8);
   ZccHcc_boosted_PN_med_ZMass__34->SetMaximum(1.2);
   ZccHcc_boosted_PN_med_ZMass__34->SetEntries(13.68999);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_ZMass__34->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__34->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__34->GetXaxis()->SetTitle("M_{Z} [GeV]");
   ZccHcc_boosted_PN_med_ZMass__34->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_ZMass__34->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__34->GetXaxis()->SetLabelSize(0.1);
   ZccHcc_boosted_PN_med_ZMass__34->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_ZMass__34->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__34->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__34->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   ZccHcc_boosted_PN_med_ZMass__34->GetYaxis()->CenterTitle(true);
   ZccHcc_boosted_PN_med_ZMass__34->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__34->GetYaxis()->SetLabelSize(0.09);
   ZccHcc_boosted_PN_med_ZMass__34->GetYaxis()->SetTitleSize(0.12);
   ZccHcc_boosted_PN_med_ZMass__34->GetYaxis()->SetTitleOffset(0.35);
   ZccHcc_boosted_PN_med_ZMass__34->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__34->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__34->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__34->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__34->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__35 = new TH1D("ZccHcc_boosted_PN_med_ZMass__35","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__35->SetBinContent(8,1);
   ZccHcc_boosted_PN_med_ZMass__35->SetBinContent(9,1);
   ZccHcc_boosted_PN_med_ZMass__35->SetBinContent(10,0.9557128);
   ZccHcc_boosted_PN_med_ZMass__35->SetBinContent(11,1.012296);
   ZccHcc_boosted_PN_med_ZMass__35->SetBinContent(12,1);
   ZccHcc_boosted_PN_med_ZMass__35->SetBinError(8,0.7378841);
   ZccHcc_boosted_PN_med_ZMass__35->SetBinError(9,0.4681609);
   ZccHcc_boosted_PN_med_ZMass__35->SetBinError(10,0.2929165);
   ZccHcc_boosted_PN_med_ZMass__35->SetBinError(11,0.5957086);
   ZccHcc_boosted_PN_med_ZMass__35->SetBinError(12,0.8189038);
   ZccHcc_boosted_PN_med_ZMass__35->SetEntries(13.16382);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_ZMass__35->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__35->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__35->GetXaxis()->SetTitle("M_{Z} [GeV]");
   ZccHcc_boosted_PN_med_ZMass__35->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__35->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__35->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_ZMass__35->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__35->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__35->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__35->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__35->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__35->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__35->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__35->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__13->Modified();
   c1_n7->cd();
   c1_n7->Modified();
   c1_n7->SetSelected(c1_n7);
}
