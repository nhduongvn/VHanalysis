#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HMass_JES()
{
//=========Macro generated from canvas: c1_n54/
//=========  (Fri Nov  1 11:45:57 2024) by ROOT version 6.30/03
   TCanvas *c1_n54 = new TCanvas("c1_n54", "",0,0,600,600);
   gStyle->SetOptStat(0);
   c1_n54->SetHighLightColor(2);
   c1_n54->Range(0,0,1,1);
   c1_n54->SetFillColor(0);
   c1_n54->SetBorderMode(0);
   c1_n54->SetBorderSize(2);
   c1_n54->SetLeftMargin(0.15);
   c1_n54->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_v1
   TPad *pad1_v1__124 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__124->Draw();
   pad1_v1__124->cd();
   pad1_v1__124->Range(-37.5,-3.44355,337.5,30.99195);
   pad1_v1__124->SetFillColor(0);
   pad1_v1__124->SetBorderMode(0);
   pad1_v1__124->SetBorderSize(2);
   pad1_v1__124->SetFrameBorderMode(0);
   pad1_v1__124->SetFrameBorderMode(0);
   
   TH1D *ZccHcc_boosted_PN_med_HMass__311 = new TH1D("ZccHcc_boosted_PN_med_HMass__311","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__311->SetBinContent(10,0.9864676);
   ZccHcc_boosted_PN_med_HMass__311->SetBinContent(11,3.05885);
   ZccHcc_boosted_PN_med_HMass__311->SetBinContent(12,11.88625);
   ZccHcc_boosted_PN_med_HMass__311->SetBinContent(13,18.33894);
   ZccHcc_boosted_PN_med_HMass__311->SetBinContent(14,25.5484);
   ZccHcc_boosted_PN_med_HMass__311->SetBinContent(15,7.596712);
   ZccHcc_boosted_PN_med_HMass__311->SetBinContent(16,1.286846);
   ZccHcc_boosted_PN_med_HMass__311->SetBinError(10,0.9864676);
   ZccHcc_boosted_PN_med_HMass__311->SetBinError(11,1.807795);
   ZccHcc_boosted_PN_med_HMass__311->SetBinError(12,3.621745);
   ZccHcc_boosted_PN_med_HMass__311->SetBinError(13,5.005503);
   ZccHcc_boosted_PN_med_HMass__311->SetBinError(14,5.290937);
   ZccHcc_boosted_PN_med_HMass__311->SetBinError(15,2.931758);
   ZccHcc_boosted_PN_med_HMass__311->SetBinError(16,1.991872);
   ZccHcc_boosted_PN_med_HMass__311->SetMaximum(27.5484);
   ZccHcc_boosted_PN_med_HMass__311->SetEntries(75);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   ZccHcc_boosted_PN_med_HMass__311->SetFillColor(ci);
   ZccHcc_boosted_PN_med_HMass__311->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__311->GetXaxis()->SetTitle("M_{H} [GeV]");
   ZccHcc_boosted_PN_med_HMass__311->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_HMass__311->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__311->GetXaxis()->SetTitleOffset(1.15);
   ZccHcc_boosted_PN_med_HMass__311->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__311->GetYaxis()->SetTitle("Events/10.0 GeV");
   ZccHcc_boosted_PN_med_HMass__311->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__311->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__311->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__311->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__311->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__311->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__312 = new TH1D("ZccHcc_boosted_PN_med_HMass__312","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__312->SetBinContent(10,0.9864676);
   ZccHcc_boosted_PN_med_HMass__312->SetBinContent(11,3.05885);
   ZccHcc_boosted_PN_med_HMass__312->SetBinContent(12,11.88625);
   ZccHcc_boosted_PN_med_HMass__312->SetBinContent(13,18.33894);
   ZccHcc_boosted_PN_med_HMass__312->SetBinContent(14,25.5484);
   ZccHcc_boosted_PN_med_HMass__312->SetBinContent(15,7.596712);
   ZccHcc_boosted_PN_med_HMass__312->SetBinContent(16,1.286846);
   ZccHcc_boosted_PN_med_HMass__312->SetBinError(10,0.9864676);
   ZccHcc_boosted_PN_med_HMass__312->SetBinError(11,1.807795);
   ZccHcc_boosted_PN_med_HMass__312->SetBinError(12,3.621745);
   ZccHcc_boosted_PN_med_HMass__312->SetBinError(13,5.005503);
   ZccHcc_boosted_PN_med_HMass__312->SetBinError(14,5.290937);
   ZccHcc_boosted_PN_med_HMass__312->SetBinError(15,2.931758);
   ZccHcc_boosted_PN_med_HMass__312->SetBinError(16,1.991872);
   ZccHcc_boosted_PN_med_HMass__312->SetEntries(75);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_HMass__312->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__312->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__312->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_HMass__312->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__312->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__312->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__312->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__312->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__312->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__312->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__312->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__312->Draw("same hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__313 = new TH1D("ZccHcc_boosted_PN_med_HMass__313","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__313->SetBinContent(10,0.9864676);
   ZccHcc_boosted_PN_med_HMass__313->SetBinContent(11,3.05885);
   ZccHcc_boosted_PN_med_HMass__313->SetBinContent(12,11.88625);
   ZccHcc_boosted_PN_med_HMass__313->SetBinContent(13,18.33894);
   ZccHcc_boosted_PN_med_HMass__313->SetBinContent(14,25.5484);
   ZccHcc_boosted_PN_med_HMass__313->SetBinContent(15,7.596712);
   ZccHcc_boosted_PN_med_HMass__313->SetBinContent(16,1.286846);
   ZccHcc_boosted_PN_med_HMass__313->SetBinError(10,0.9864676);
   ZccHcc_boosted_PN_med_HMass__313->SetBinError(11,1.807795);
   ZccHcc_boosted_PN_med_HMass__313->SetBinError(12,3.621745);
   ZccHcc_boosted_PN_med_HMass__313->SetBinError(13,5.005503);
   ZccHcc_boosted_PN_med_HMass__313->SetBinError(14,5.290937);
   ZccHcc_boosted_PN_med_HMass__313->SetBinError(15,2.931758);
   ZccHcc_boosted_PN_med_HMass__313->SetBinError(16,1.991872);
   ZccHcc_boosted_PN_med_HMass__313->SetEntries(75);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_HMass__313->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__313->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__313->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_HMass__313->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__313->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__313->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__313->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__313->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__313->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__313->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__313->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__313->Draw("same hist");
   
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
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_HMass","JES Up","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_HMass","JES Down","F");
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
   pad1_v1__124->Modified();
   c1_n54->cd();
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__125 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__125->Draw();
   pad1_v2__125->cd();
   pad1_v2__125->Range(-37.5,0.75,337.5,1.25);
   pad1_v2__125->SetFillColor(0);
   pad1_v2__125->SetBorderMode(0);
   pad1_v2__125->SetBorderSize(2);
   pad1_v2__125->SetFrameBorderMode(0);
   pad1_v2__125->SetFrameBorderMode(0);
   
   TH1D *ZccHcc_boosted_PN_med_HMass__314 = new TH1D("ZccHcc_boosted_PN_med_HMass__314","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__314->SetBinContent(10,1);
   ZccHcc_boosted_PN_med_HMass__314->SetBinContent(11,1);
   ZccHcc_boosted_PN_med_HMass__314->SetBinContent(12,1);
   ZccHcc_boosted_PN_med_HMass__314->SetBinContent(13,1);
   ZccHcc_boosted_PN_med_HMass__314->SetBinContent(14,1);
   ZccHcc_boosted_PN_med_HMass__314->SetBinContent(15,1);
   ZccHcc_boosted_PN_med_HMass__314->SetBinContent(16,1);
   ZccHcc_boosted_PN_med_HMass__314->SetBinError(10,1.414214);
   ZccHcc_boosted_PN_med_HMass__314->SetBinError(11,0.8358073);
   ZccHcc_boosted_PN_med_HMass__314->SetBinError(12,0.4309113);
   ZccHcc_boosted_PN_med_HMass__314->SetBinError(13,0.3860011);
   ZccHcc_boosted_PN_med_HMass__314->SetBinError(14,0.2928761);
   ZccHcc_boosted_PN_med_HMass__314->SetBinError(15,0.5457797);
   ZccHcc_boosted_PN_med_HMass__314->SetBinError(16,2.18902);
   ZccHcc_boosted_PN_med_HMass__314->SetMinimum(0.8);
   ZccHcc_boosted_PN_med_HMass__314->SetMaximum(1.2);
   ZccHcc_boosted_PN_med_HMass__314->SetEntries(5.969266);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_HMass__314->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__314->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__314->GetXaxis()->SetTitle("M_{H} [GeV]");
   ZccHcc_boosted_PN_med_HMass__314->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_HMass__314->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__314->GetXaxis()->SetLabelSize(0.1);
   ZccHcc_boosted_PN_med_HMass__314->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_HMass__314->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__314->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__314->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   ZccHcc_boosted_PN_med_HMass__314->GetYaxis()->CenterTitle(true);
   ZccHcc_boosted_PN_med_HMass__314->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__314->GetYaxis()->SetLabelSize(0.09);
   ZccHcc_boosted_PN_med_HMass__314->GetYaxis()->SetTitleSize(0.12);
   ZccHcc_boosted_PN_med_HMass__314->GetYaxis()->SetTitleOffset(0.35);
   ZccHcc_boosted_PN_med_HMass__314->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__314->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__314->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__314->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__314->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__315 = new TH1D("ZccHcc_boosted_PN_med_HMass__315","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__315->SetBinContent(10,1);
   ZccHcc_boosted_PN_med_HMass__315->SetBinContent(11,1);
   ZccHcc_boosted_PN_med_HMass__315->SetBinContent(12,1);
   ZccHcc_boosted_PN_med_HMass__315->SetBinContent(13,1);
   ZccHcc_boosted_PN_med_HMass__315->SetBinContent(14,1);
   ZccHcc_boosted_PN_med_HMass__315->SetBinContent(15,1);
   ZccHcc_boosted_PN_med_HMass__315->SetBinContent(16,1);
   ZccHcc_boosted_PN_med_HMass__315->SetBinError(10,1.414214);
   ZccHcc_boosted_PN_med_HMass__315->SetBinError(11,0.8358073);
   ZccHcc_boosted_PN_med_HMass__315->SetBinError(12,0.4309113);
   ZccHcc_boosted_PN_med_HMass__315->SetBinError(13,0.3860011);
   ZccHcc_boosted_PN_med_HMass__315->SetBinError(14,0.2928761);
   ZccHcc_boosted_PN_med_HMass__315->SetBinError(15,0.5457797);
   ZccHcc_boosted_PN_med_HMass__315->SetBinError(16,2.18902);
   ZccHcc_boosted_PN_med_HMass__315->SetEntries(5.969266);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_HMass__315->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__315->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__315->GetXaxis()->SetTitle("M_{H} [GeV]");
   ZccHcc_boosted_PN_med_HMass__315->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_HMass__315->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__315->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_HMass__315->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__315->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__315->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__315->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__315->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__315->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__315->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__315->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__125->Modified();
   c1_n54->cd();
   c1_n54->Modified();
   c1_n54->SetSelected(c1_n54);
}
