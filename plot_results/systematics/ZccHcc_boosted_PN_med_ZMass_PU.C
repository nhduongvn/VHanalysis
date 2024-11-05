#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ZccHcc_boosted_PN_med_ZMass_PU()
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
   TPad *pad1_v1__36 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__36->Draw();
   pad1_v1__36->cd();
   pad1_v1__36->Range(-38.75,-4.246084,348.75,38.21475);
   pad1_v1__36->SetBorderSize(2);
   pad1_v1__36->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__91 = new TH1D("ZccHcc_boosted_PN_med_ZMass__91","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__91->SetBinContent(8,4.854131);
   ZccHcc_boosted_PN_med_ZMass__91->SetBinContent(9,15.34577);
   ZccHcc_boosted_PN_med_ZMass__91->SetBinContent(10,30.02249);
   ZccHcc_boosted_PN_med_ZMass__91->SetBinContent(11,6.938672);
   ZccHcc_boosted_PN_med_ZMass__91->SetBinContent(12,4.26416);
   ZccHcc_boosted_PN_med_ZMass__91->SetBinError(8,2.532705);
   ZccHcc_boosted_PN_med_ZMass__91->SetBinError(9,5.08006);
   ZccHcc_boosted_PN_med_ZMass__91->SetBinError(10,6.429797);
   ZccHcc_boosted_PN_med_ZMass__91->SetBinError(11,2.893516);
   ZccHcc_boosted_PN_med_ZMass__91->SetBinError(12,2.469172);
   ZccHcc_boosted_PN_med_ZMass__91->SetMaximum(33.96867);
   ZccHcc_boosted_PN_med_ZMass__91->SetEntries(49);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   ZccHcc_boosted_PN_med_ZMass__91->SetFillColor(ci);
   ZccHcc_boosted_PN_med_ZMass__91->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__91->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_ZMass__91->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__91->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__91->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__91->GetYaxis()->SetTitle("Events/10.000000");
   ZccHcc_boosted_PN_med_ZMass__91->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__91->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__91->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__91->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__91->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__91->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__92 = new TH1D("ZccHcc_boosted_PN_med_ZMass__92","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__92->SetBinContent(8,4.751745);
   ZccHcc_boosted_PN_med_ZMass__92->SetBinContent(9,14.83927);
   ZccHcc_boosted_PN_med_ZMass__92->SetBinContent(10,28.26445);
   ZccHcc_boosted_PN_med_ZMass__92->SetBinContent(11,7.798647);
   ZccHcc_boosted_PN_med_ZMass__92->SetBinContent(12,3.74231);
   ZccHcc_boosted_PN_med_ZMass__92->SetBinError(8,2.519242);
   ZccHcc_boosted_PN_med_ZMass__92->SetBinError(9,4.711203);
   ZccHcc_boosted_PN_med_ZMass__92->SetBinError(10,6.099919);
   ZccHcc_boosted_PN_med_ZMass__92->SetBinError(11,3.091428);
   ZccHcc_boosted_PN_med_ZMass__92->SetBinError(12,2.172786);
   ZccHcc_boosted_PN_med_ZMass__92->SetEntries(49);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_ZMass__92->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__92->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__92->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__92->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__92->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__92->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__92->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__92->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__92->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__92->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__92->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__92->Draw("same hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__93 = new TH1D("ZccHcc_boosted_PN_med_ZMass__93","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__93->SetBinContent(8,5.158803);
   ZccHcc_boosted_PN_med_ZMass__93->SetBinContent(9,15.84208);
   ZccHcc_boosted_PN_med_ZMass__93->SetBinContent(10,31.96867);
   ZccHcc_boosted_PN_med_ZMass__93->SetBinContent(11,6.232059);
   ZccHcc_boosted_PN_med_ZMass__93->SetBinContent(12,4.833032);
   ZccHcc_boosted_PN_med_ZMass__93->SetBinError(8,2.730681);
   ZccHcc_boosted_PN_med_ZMass__93->SetBinError(9,5.688544);
   ZccHcc_boosted_PN_med_ZMass__93->SetBinError(10,6.979225);
   ZccHcc_boosted_PN_med_ZMass__93->SetBinError(11,2.811003);
   ZccHcc_boosted_PN_med_ZMass__93->SetBinError(12,2.813379);
   ZccHcc_boosted_PN_med_ZMass__93->SetEntries(49);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_ZMass__93->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__93->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__93->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__93->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__93->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__93->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__93->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__93->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__93->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__93->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__93->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__93->Draw("same hist");
   
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

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_ZMass","PU Down","F");
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
   pad1_v1__36->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__37 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__37->Draw();
   pad1_v2__37->cd();
   pad1_v2__37->Range(-38.75,0.75,348.75,1.25);
   pad1_v2__37->SetBorderSize(2);
   pad1_v2__37->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__94 = new TH1D("ZccHcc_boosted_PN_med_ZMass__94","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__94->SetBinContent(8,0.9789076);
   ZccHcc_boosted_PN_med_ZMass__94->SetBinContent(9,0.9669943);
   ZccHcc_boosted_PN_med_ZMass__94->SetBinContent(10,0.9414425);
   ZccHcc_boosted_PN_med_ZMass__94->SetBinContent(11,1.123939);
   ZccHcc_boosted_PN_med_ZMass__94->SetBinContent(12,0.8776196);
   ZccHcc_boosted_PN_med_ZMass__94->SetBinError(8,0.7281643);
   ZccHcc_boosted_PN_med_ZMass__94->SetBinError(9,0.4435355);
   ZccHcc_boosted_PN_med_ZMass__94->SetBinError(10,0.2862412);
   ZccHcc_boosted_PN_med_ZMass__94->SetBinError(11,0.6466678);
   ZccHcc_boosted_PN_med_ZMass__94->SetBinError(12,0.7196471);
   ZccHcc_boosted_PN_med_ZMass__94->SetMinimum(0.8);
   ZccHcc_boosted_PN_med_ZMass__94->SetMaximum(1.2);
   ZccHcc_boosted_PN_med_ZMass__94->SetEntries(13.69744);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_ZMass__94->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__94->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__94->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_ZMass__94->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__94->GetXaxis()->SetLabelSize(0.1);
   ZccHcc_boosted_PN_med_ZMass__94->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_ZMass__94->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__94->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__94->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   ZccHcc_boosted_PN_med_ZMass__94->GetYaxis()->CenterTitle(true);
   ZccHcc_boosted_PN_med_ZMass__94->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__94->GetYaxis()->SetLabelSize(0.09);
   ZccHcc_boosted_PN_med_ZMass__94->GetYaxis()->SetTitleSize(0.12);
   ZccHcc_boosted_PN_med_ZMass__94->GetYaxis()->SetTitleOffset(0.35);
   ZccHcc_boosted_PN_med_ZMass__94->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__94->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__94->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__94->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__94->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__95 = new TH1D("ZccHcc_boosted_PN_med_ZMass__95","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__95->SetBinContent(8,1.062766);
   ZccHcc_boosted_PN_med_ZMass__95->SetBinContent(9,1.032342);
   ZccHcc_boosted_PN_med_ZMass__95->SetBinContent(10,1.064824);
   ZccHcc_boosted_PN_med_ZMass__95->SetBinContent(11,0.898163);
   ZccHcc_boosted_PN_med_ZMass__95->SetBinContent(12,1.133408);
   ZccHcc_boosted_PN_med_ZMass__95->SetBinError(8,0.7899008);
   ZccHcc_boosted_PN_med_ZMass__95->SetBinError(9,0.5041851);
   ZccHcc_boosted_PN_med_ZMass__95->SetBinError(10,0.3256487);
   ZccHcc_boosted_PN_med_ZMass__95->SetBinError(11,0.5517314);
   ZccHcc_boosted_PN_med_ZMass__95->SetBinError(12,0.9306095);
   ZccHcc_boosted_PN_med_ZMass__95->SetEntries(12.50871);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_ZMass__95->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__95->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__95->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__95->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__95->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__95->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__95->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__95->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__95->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__95->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__95->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__95->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__37->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
