#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HMass_PU()
{
//=========Macro generated from canvas: c1/
//=========  (Fri Nov  1 11:45:57 2024) by ROOT version 6.30/03
   TCanvas *c1 = new TCanvas("c1", "",0,0,600,600);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.15);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_v1
   TPad *pad1_v1__130 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__130->Draw();
   pad1_v1__130->cd();
   pad1_v1__130->Range(-37.5,-3.44355,337.5,30.99195);
   pad1_v1__130->SetFillColor(0);
   pad1_v1__130->SetBorderMode(0);
   pad1_v1__130->SetBorderSize(2);
   pad1_v1__130->SetFrameBorderMode(0);
   pad1_v1__130->SetFrameBorderMode(0);
   
   TH1D *ZccHcc_boosted_PN_med_HMass__326 = new TH1D("ZccHcc_boosted_PN_med_HMass__326","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__326->SetBinContent(10,0.9864676);
   ZccHcc_boosted_PN_med_HMass__326->SetBinContent(11,3.05885);
   ZccHcc_boosted_PN_med_HMass__326->SetBinContent(12,11.88625);
   ZccHcc_boosted_PN_med_HMass__326->SetBinContent(13,18.33894);
   ZccHcc_boosted_PN_med_HMass__326->SetBinContent(14,25.5484);
   ZccHcc_boosted_PN_med_HMass__326->SetBinContent(15,7.596712);
   ZccHcc_boosted_PN_med_HMass__326->SetBinContent(16,1.286846);
   ZccHcc_boosted_PN_med_HMass__326->SetBinError(10,0.9864676);
   ZccHcc_boosted_PN_med_HMass__326->SetBinError(11,1.807795);
   ZccHcc_boosted_PN_med_HMass__326->SetBinError(12,3.621745);
   ZccHcc_boosted_PN_med_HMass__326->SetBinError(13,5.005503);
   ZccHcc_boosted_PN_med_HMass__326->SetBinError(14,5.290937);
   ZccHcc_boosted_PN_med_HMass__326->SetBinError(15,2.931758);
   ZccHcc_boosted_PN_med_HMass__326->SetBinError(16,1.991872);
   ZccHcc_boosted_PN_med_HMass__326->SetMaximum(27.5484);
   ZccHcc_boosted_PN_med_HMass__326->SetEntries(75);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   ZccHcc_boosted_PN_med_HMass__326->SetFillColor(ci);
   ZccHcc_boosted_PN_med_HMass__326->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__326->GetXaxis()->SetTitle("M_{H} [GeV]");
   ZccHcc_boosted_PN_med_HMass__326->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_HMass__326->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__326->GetXaxis()->SetTitleOffset(1.15);
   ZccHcc_boosted_PN_med_HMass__326->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__326->GetYaxis()->SetTitle("Events/10.0 GeV");
   ZccHcc_boosted_PN_med_HMass__326->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__326->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__326->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__326->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__326->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__326->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__327 = new TH1D("ZccHcc_boosted_PN_med_HMass__327","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__327->SetBinContent(10,0.9864676);
   ZccHcc_boosted_PN_med_HMass__327->SetBinContent(11,3.05885);
   ZccHcc_boosted_PN_med_HMass__327->SetBinContent(12,11.88625);
   ZccHcc_boosted_PN_med_HMass__327->SetBinContent(13,18.33894);
   ZccHcc_boosted_PN_med_HMass__327->SetBinContent(14,25.5484);
   ZccHcc_boosted_PN_med_HMass__327->SetBinContent(15,7.596712);
   ZccHcc_boosted_PN_med_HMass__327->SetBinContent(16,1.286846);
   ZccHcc_boosted_PN_med_HMass__327->SetBinError(10,0.9864676);
   ZccHcc_boosted_PN_med_HMass__327->SetBinError(11,1.807795);
   ZccHcc_boosted_PN_med_HMass__327->SetBinError(12,3.621745);
   ZccHcc_boosted_PN_med_HMass__327->SetBinError(13,5.005503);
   ZccHcc_boosted_PN_med_HMass__327->SetBinError(14,5.290937);
   ZccHcc_boosted_PN_med_HMass__327->SetBinError(15,2.931758);
   ZccHcc_boosted_PN_med_HMass__327->SetBinError(16,1.991872);
   ZccHcc_boosted_PN_med_HMass__327->SetEntries(75);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_HMass__327->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__327->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__327->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_HMass__327->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__327->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__327->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__327->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__327->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__327->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__327->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__327->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__327->Draw("same hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__328 = new TH1D("ZccHcc_boosted_PN_med_HMass__328","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__328->SetBinContent(10,0.9864676);
   ZccHcc_boosted_PN_med_HMass__328->SetBinContent(11,3.05885);
   ZccHcc_boosted_PN_med_HMass__328->SetBinContent(12,11.88625);
   ZccHcc_boosted_PN_med_HMass__328->SetBinContent(13,18.33894);
   ZccHcc_boosted_PN_med_HMass__328->SetBinContent(14,25.5484);
   ZccHcc_boosted_PN_med_HMass__328->SetBinContent(15,7.596712);
   ZccHcc_boosted_PN_med_HMass__328->SetBinContent(16,1.286846);
   ZccHcc_boosted_PN_med_HMass__328->SetBinError(10,0.9864676);
   ZccHcc_boosted_PN_med_HMass__328->SetBinError(11,1.807795);
   ZccHcc_boosted_PN_med_HMass__328->SetBinError(12,3.621745);
   ZccHcc_boosted_PN_med_HMass__328->SetBinError(13,5.005503);
   ZccHcc_boosted_PN_med_HMass__328->SetBinError(14,5.290937);
   ZccHcc_boosted_PN_med_HMass__328->SetBinError(15,2.931758);
   ZccHcc_boosted_PN_med_HMass__328->SetBinError(16,1.991872);
   ZccHcc_boosted_PN_med_HMass__328->SetEntries(75);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_HMass__328->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__328->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__328->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_HMass__328->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__328->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__328->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__328->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__328->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__328->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__328->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__328->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__328->Draw("same hist");
   
   TLegend *leg = new TLegend(0.53,0.7,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ZccHcc_boosted_PN_med_HMass","Nominal","F");

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
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_HMass","PU Up","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_HMass","PU Down","F");
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
   pad1_v1__130->Modified();
   c1->cd();
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__131 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__131->Draw();
   pad1_v2__131->cd();
   pad1_v2__131->Range(-37.5,0.75,337.5,1.25);
   pad1_v2__131->SetFillColor(0);
   pad1_v2__131->SetBorderMode(0);
   pad1_v2__131->SetBorderSize(2);
   pad1_v2__131->SetFrameBorderMode(0);
   pad1_v2__131->SetFrameBorderMode(0);
   
   TH1D *ZccHcc_boosted_PN_med_HMass__329 = new TH1D("ZccHcc_boosted_PN_med_HMass__329","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__329->SetBinContent(10,1);
   ZccHcc_boosted_PN_med_HMass__329->SetBinContent(11,1);
   ZccHcc_boosted_PN_med_HMass__329->SetBinContent(12,1);
   ZccHcc_boosted_PN_med_HMass__329->SetBinContent(13,1);
   ZccHcc_boosted_PN_med_HMass__329->SetBinContent(14,1);
   ZccHcc_boosted_PN_med_HMass__329->SetBinContent(15,1);
   ZccHcc_boosted_PN_med_HMass__329->SetBinContent(16,1);
   ZccHcc_boosted_PN_med_HMass__329->SetBinError(10,1.414214);
   ZccHcc_boosted_PN_med_HMass__329->SetBinError(11,0.8358073);
   ZccHcc_boosted_PN_med_HMass__329->SetBinError(12,0.4309113);
   ZccHcc_boosted_PN_med_HMass__329->SetBinError(13,0.3860011);
   ZccHcc_boosted_PN_med_HMass__329->SetBinError(14,0.2928761);
   ZccHcc_boosted_PN_med_HMass__329->SetBinError(15,0.5457797);
   ZccHcc_boosted_PN_med_HMass__329->SetBinError(16,2.18902);
   ZccHcc_boosted_PN_med_HMass__329->SetMinimum(0.8);
   ZccHcc_boosted_PN_med_HMass__329->SetMaximum(1.2);
   ZccHcc_boosted_PN_med_HMass__329->SetEntries(5.969266);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_HMass__329->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__329->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__329->GetXaxis()->SetTitle("M_{H} [GeV]");
   ZccHcc_boosted_PN_med_HMass__329->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_HMass__329->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__329->GetXaxis()->SetLabelSize(0.1);
   ZccHcc_boosted_PN_med_HMass__329->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_HMass__329->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__329->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__329->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   ZccHcc_boosted_PN_med_HMass__329->GetYaxis()->CenterTitle(true);
   ZccHcc_boosted_PN_med_HMass__329->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__329->GetYaxis()->SetLabelSize(0.09);
   ZccHcc_boosted_PN_med_HMass__329->GetYaxis()->SetTitleSize(0.12);
   ZccHcc_boosted_PN_med_HMass__329->GetYaxis()->SetTitleOffset(0.35);
   ZccHcc_boosted_PN_med_HMass__329->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__329->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__329->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__329->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__329->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__330 = new TH1D("ZccHcc_boosted_PN_med_HMass__330","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__330->SetBinContent(10,1);
   ZccHcc_boosted_PN_med_HMass__330->SetBinContent(11,1);
   ZccHcc_boosted_PN_med_HMass__330->SetBinContent(12,1);
   ZccHcc_boosted_PN_med_HMass__330->SetBinContent(13,1);
   ZccHcc_boosted_PN_med_HMass__330->SetBinContent(14,1);
   ZccHcc_boosted_PN_med_HMass__330->SetBinContent(15,1);
   ZccHcc_boosted_PN_med_HMass__330->SetBinContent(16,1);
   ZccHcc_boosted_PN_med_HMass__330->SetBinError(10,1.414214);
   ZccHcc_boosted_PN_med_HMass__330->SetBinError(11,0.8358073);
   ZccHcc_boosted_PN_med_HMass__330->SetBinError(12,0.4309113);
   ZccHcc_boosted_PN_med_HMass__330->SetBinError(13,0.3860011);
   ZccHcc_boosted_PN_med_HMass__330->SetBinError(14,0.2928761);
   ZccHcc_boosted_PN_med_HMass__330->SetBinError(15,0.5457797);
   ZccHcc_boosted_PN_med_HMass__330->SetBinError(16,2.18902);
   ZccHcc_boosted_PN_med_HMass__330->SetEntries(5.969266);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_HMass__330->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__330->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__330->GetXaxis()->SetTitle("M_{H} [GeV]");
   ZccHcc_boosted_PN_med_HMass__330->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_HMass__330->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__330->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_HMass__330->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__330->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__330->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__330->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__330->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__330->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__330->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__330->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__131->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
