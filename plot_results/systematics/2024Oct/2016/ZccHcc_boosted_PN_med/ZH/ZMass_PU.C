#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ZMass_PU()
{
//=========Macro generated from canvas: c1_n8/
//=========  (Fri Nov  1 13:56:20 2024) by ROOT version 6.30/03
   TCanvas *c1_n8 = new TCanvas("c1_n8", "",0,0,600,600);
   gStyle->SetOptStat(0);
   c1_n8->SetHighLightColor(2);
   c1_n8->Range(0,0,1,1);
   c1_n8->SetFillColor(0);
   c1_n8->SetBorderMode(0);
   c1_n8->SetBorderSize(2);
   c1_n8->SetLeftMargin(0.15);
   c1_n8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_v1
   TPad *pad1_v1__14 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__14->Draw();
   pad1_v1__14->cd();
   pad1_v1__14->Range(-37.5,-4.246084,337.5,38.21475);
   pad1_v1__14->SetFillColor(0);
   pad1_v1__14->SetBorderMode(0);
   pad1_v1__14->SetBorderSize(2);
   pad1_v1__14->SetFrameBorderMode(0);
   pad1_v1__14->SetFrameBorderMode(0);
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__36 = new TH1D("ZccHcc_boosted_PN_med_ZMass__36","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__36->SetBinContent(8,4.854131);
   ZccHcc_boosted_PN_med_ZMass__36->SetBinContent(9,15.34577);
   ZccHcc_boosted_PN_med_ZMass__36->SetBinContent(10,30.02249);
   ZccHcc_boosted_PN_med_ZMass__36->SetBinContent(11,6.938672);
   ZccHcc_boosted_PN_med_ZMass__36->SetBinContent(12,4.26416);
   ZccHcc_boosted_PN_med_ZMass__36->SetBinError(8,2.532705);
   ZccHcc_boosted_PN_med_ZMass__36->SetBinError(9,5.08006);
   ZccHcc_boosted_PN_med_ZMass__36->SetBinError(10,6.429797);
   ZccHcc_boosted_PN_med_ZMass__36->SetBinError(11,2.893516);
   ZccHcc_boosted_PN_med_ZMass__36->SetBinError(12,2.469172);
   ZccHcc_boosted_PN_med_ZMass__36->SetMaximum(33.96867);
   ZccHcc_boosted_PN_med_ZMass__36->SetEntries(49);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   ZccHcc_boosted_PN_med_ZMass__36->SetFillColor(ci);
   ZccHcc_boosted_PN_med_ZMass__36->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__36->GetXaxis()->SetTitle("M_{Z} [GeV]");
   ZccHcc_boosted_PN_med_ZMass__36->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_ZMass__36->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__36->GetXaxis()->SetTitleOffset(1.15);
   ZccHcc_boosted_PN_med_ZMass__36->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__36->GetYaxis()->SetTitle("Events/10.0 GeV");
   ZccHcc_boosted_PN_med_ZMass__36->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__36->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__36->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__36->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__36->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__36->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__37 = new TH1D("ZccHcc_boosted_PN_med_ZMass__37","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__37->SetBinContent(8,4.751745);
   ZccHcc_boosted_PN_med_ZMass__37->SetBinContent(9,14.83927);
   ZccHcc_boosted_PN_med_ZMass__37->SetBinContent(10,28.26445);
   ZccHcc_boosted_PN_med_ZMass__37->SetBinContent(11,7.798647);
   ZccHcc_boosted_PN_med_ZMass__37->SetBinContent(12,3.74231);
   ZccHcc_boosted_PN_med_ZMass__37->SetBinError(8,2.519242);
   ZccHcc_boosted_PN_med_ZMass__37->SetBinError(9,4.711203);
   ZccHcc_boosted_PN_med_ZMass__37->SetBinError(10,6.099919);
   ZccHcc_boosted_PN_med_ZMass__37->SetBinError(11,3.091428);
   ZccHcc_boosted_PN_med_ZMass__37->SetBinError(12,2.172786);
   ZccHcc_boosted_PN_med_ZMass__37->SetEntries(49);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_ZMass__37->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__37->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__37->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__37->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__37->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__37->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__37->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__37->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__37->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__37->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__37->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__37->Draw("same hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__38 = new TH1D("ZccHcc_boosted_PN_med_ZMass__38","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__38->SetBinContent(8,5.158803);
   ZccHcc_boosted_PN_med_ZMass__38->SetBinContent(9,15.84208);
   ZccHcc_boosted_PN_med_ZMass__38->SetBinContent(10,31.96867);
   ZccHcc_boosted_PN_med_ZMass__38->SetBinContent(11,6.232059);
   ZccHcc_boosted_PN_med_ZMass__38->SetBinContent(12,4.833032);
   ZccHcc_boosted_PN_med_ZMass__38->SetBinError(8,2.730681);
   ZccHcc_boosted_PN_med_ZMass__38->SetBinError(9,5.688544);
   ZccHcc_boosted_PN_med_ZMass__38->SetBinError(10,6.979225);
   ZccHcc_boosted_PN_med_ZMass__38->SetBinError(11,2.811003);
   ZccHcc_boosted_PN_med_ZMass__38->SetBinError(12,2.813379);
   ZccHcc_boosted_PN_med_ZMass__38->SetEntries(49);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_ZMass__38->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__38->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__38->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__38->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__38->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__38->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__38->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__38->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__38->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__38->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__38->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__38->Draw("same hist");
   
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
   pad1_v1__14->Modified();
   c1_n8->cd();
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__15 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__15->Draw();
   pad1_v2__15->cd();
   pad1_v2__15->Range(-37.5,0.75,337.5,1.25);
   pad1_v2__15->SetFillColor(0);
   pad1_v2__15->SetBorderMode(0);
   pad1_v2__15->SetBorderSize(2);
   pad1_v2__15->SetFrameBorderMode(0);
   pad1_v2__15->SetFrameBorderMode(0);
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__39 = new TH1D("ZccHcc_boosted_PN_med_ZMass__39","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__39->SetBinContent(8,0.9789076);
   ZccHcc_boosted_PN_med_ZMass__39->SetBinContent(9,0.9669943);
   ZccHcc_boosted_PN_med_ZMass__39->SetBinContent(10,0.9414425);
   ZccHcc_boosted_PN_med_ZMass__39->SetBinContent(11,1.123939);
   ZccHcc_boosted_PN_med_ZMass__39->SetBinContent(12,0.8776196);
   ZccHcc_boosted_PN_med_ZMass__39->SetBinError(8,0.7281643);
   ZccHcc_boosted_PN_med_ZMass__39->SetBinError(9,0.4435355);
   ZccHcc_boosted_PN_med_ZMass__39->SetBinError(10,0.2862412);
   ZccHcc_boosted_PN_med_ZMass__39->SetBinError(11,0.6466678);
   ZccHcc_boosted_PN_med_ZMass__39->SetBinError(12,0.7196471);
   ZccHcc_boosted_PN_med_ZMass__39->SetMinimum(0.8);
   ZccHcc_boosted_PN_med_ZMass__39->SetMaximum(1.2);
   ZccHcc_boosted_PN_med_ZMass__39->SetEntries(13.69744);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_ZMass__39->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__39->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__39->GetXaxis()->SetTitle("M_{Z} [GeV]");
   ZccHcc_boosted_PN_med_ZMass__39->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_ZMass__39->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__39->GetXaxis()->SetLabelSize(0.1);
   ZccHcc_boosted_PN_med_ZMass__39->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_ZMass__39->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__39->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__39->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   ZccHcc_boosted_PN_med_ZMass__39->GetYaxis()->CenterTitle(true);
   ZccHcc_boosted_PN_med_ZMass__39->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__39->GetYaxis()->SetLabelSize(0.09);
   ZccHcc_boosted_PN_med_ZMass__39->GetYaxis()->SetTitleSize(0.12);
   ZccHcc_boosted_PN_med_ZMass__39->GetYaxis()->SetTitleOffset(0.35);
   ZccHcc_boosted_PN_med_ZMass__39->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__39->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__39->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__39->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__39->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_ZMass__40 = new TH1D("ZccHcc_boosted_PN_med_ZMass__40","",30,0,300);
   ZccHcc_boosted_PN_med_ZMass__40->SetBinContent(8,1.062766);
   ZccHcc_boosted_PN_med_ZMass__40->SetBinContent(9,1.032342);
   ZccHcc_boosted_PN_med_ZMass__40->SetBinContent(10,1.064824);
   ZccHcc_boosted_PN_med_ZMass__40->SetBinContent(11,0.898163);
   ZccHcc_boosted_PN_med_ZMass__40->SetBinContent(12,1.133408);
   ZccHcc_boosted_PN_med_ZMass__40->SetBinError(8,0.7899008);
   ZccHcc_boosted_PN_med_ZMass__40->SetBinError(9,0.5041851);
   ZccHcc_boosted_PN_med_ZMass__40->SetBinError(10,0.3256487);
   ZccHcc_boosted_PN_med_ZMass__40->SetBinError(11,0.5517314);
   ZccHcc_boosted_PN_med_ZMass__40->SetBinError(12,0.9306095);
   ZccHcc_boosted_PN_med_ZMass__40->SetEntries(12.50871);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_ZMass__40->SetLineColor(ci);
   ZccHcc_boosted_PN_med_ZMass__40->SetLineWidth(2);
   ZccHcc_boosted_PN_med_ZMass__40->GetXaxis()->SetTitle("M_{Z} [GeV]");
   ZccHcc_boosted_PN_med_ZMass__40->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_ZMass__40->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__40->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_ZMass__40->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__40->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__40->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__40->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__40->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_ZMass__40->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_ZMass__40->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_ZMass__40->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__15->Modified();
   c1_n8->cd();
   c1_n8->Modified();
   c1_n8->SetSelected(c1_n8);
}
