#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ZccHcc_boosted_PN_med_HMass_JER()
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
   TPad *pad1_v1__2 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__2->Draw();
   pad1_v1__2->cd();
   pad1_v1__2->Range(-38.75,-3.00606,348.75,27.05454);
   pad1_v1__2->SetBorderSize(2);
   pad1_v1__2->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_HMass__6 = new TH1D("ZccHcc_boosted_PN_med_HMass__6","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__6->SetBinContent(10,2.80211);
   ZccHcc_boosted_PN_med_HMass__6->SetBinContent(11,1.468997);
   ZccHcc_boosted_PN_med_HMass__6->SetBinContent(12,11.12462);
   ZccHcc_boosted_PN_med_HMass__6->SetBinContent(13,21.16408);
   ZccHcc_boosted_PN_med_HMass__6->SetBinContent(14,20.74317);
   ZccHcc_boosted_PN_med_HMass__6->SetBinContent(15,2.917014);
   ZccHcc_boosted_PN_med_HMass__6->SetBinContent(17,1.205237);
   ZccHcc_boosted_PN_med_HMass__6->SetBinError(10,1.981682);
   ZccHcc_boosted_PN_med_HMass__6->SetBinError(11,1.468997);
   ZccHcc_boosted_PN_med_HMass__6->SetBinError(12,3.960583);
   ZccHcc_boosted_PN_med_HMass__6->SetBinError(13,5.687424);
   ZccHcc_boosted_PN_med_HMass__6->SetBinError(14,5.311121);
   ZccHcc_boosted_PN_med_HMass__6->SetBinError(15,2.062644);
   ZccHcc_boosted_PN_med_HMass__6->SetBinError(17,1.205237);
   ZccHcc_boosted_PN_med_HMass__6->SetMaximum(24.04848);
   ZccHcc_boosted_PN_med_HMass__6->SetEntries(49);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   ZccHcc_boosted_PN_med_HMass__6->SetFillColor(ci);
   ZccHcc_boosted_PN_med_HMass__6->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__6->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_HMass__6->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__6->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__6->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__6->GetYaxis()->SetTitle("Events/10.000000");
   ZccHcc_boosted_PN_med_HMass__6->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__6->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__6->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__6->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__6->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__6->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__7 = new TH1D("ZccHcc_boosted_PN_med_HMass__7","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__7->SetBinContent(10,2.80211);
   ZccHcc_boosted_PN_med_HMass__7->SetBinContent(11,1.468997);
   ZccHcc_boosted_PN_med_HMass__7->SetBinContent(12,11.12462);
   ZccHcc_boosted_PN_med_HMass__7->SetBinContent(13,21.16408);
   ZccHcc_boosted_PN_med_HMass__7->SetBinContent(14,20.74317);
   ZccHcc_boosted_PN_med_HMass__7->SetBinContent(15,2.917014);
   ZccHcc_boosted_PN_med_HMass__7->SetBinContent(17,1.205237);
   ZccHcc_boosted_PN_med_HMass__7->SetBinError(10,1.981682);
   ZccHcc_boosted_PN_med_HMass__7->SetBinError(11,1.468997);
   ZccHcc_boosted_PN_med_HMass__7->SetBinError(12,3.960583);
   ZccHcc_boosted_PN_med_HMass__7->SetBinError(13,5.687424);
   ZccHcc_boosted_PN_med_HMass__7->SetBinError(14,5.311121);
   ZccHcc_boosted_PN_med_HMass__7->SetBinError(15,2.062644);
   ZccHcc_boosted_PN_med_HMass__7->SetBinError(17,1.205237);
   ZccHcc_boosted_PN_med_HMass__7->SetEntries(49);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_HMass__7->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__7->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__7->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_HMass__7->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__7->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__7->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__7->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__7->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__7->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__7->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__7->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__7->Draw("same hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__8 = new TH1D("ZccHcc_boosted_PN_med_HMass__8","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__8->SetBinContent(10,2.80211);
   ZccHcc_boosted_PN_med_HMass__8->SetBinContent(11,1.468997);
   ZccHcc_boosted_PN_med_HMass__8->SetBinContent(12,11.12462);
   ZccHcc_boosted_PN_med_HMass__8->SetBinContent(13,21.16408);
   ZccHcc_boosted_PN_med_HMass__8->SetBinContent(14,22.04848);
   ZccHcc_boosted_PN_med_HMass__8->SetBinContent(15,2.917014);
   ZccHcc_boosted_PN_med_HMass__8->SetBinContent(17,1.205237);
   ZccHcc_boosted_PN_med_HMass__8->SetBinError(10,1.981682);
   ZccHcc_boosted_PN_med_HMass__8->SetBinError(11,1.468997);
   ZccHcc_boosted_PN_med_HMass__8->SetBinError(12,3.960583);
   ZccHcc_boosted_PN_med_HMass__8->SetBinError(13,5.687424);
   ZccHcc_boosted_PN_med_HMass__8->SetBinError(14,5.469172);
   ZccHcc_boosted_PN_med_HMass__8->SetBinError(15,2.062644);
   ZccHcc_boosted_PN_med_HMass__8->SetBinError(17,1.205237);
   ZccHcc_boosted_PN_med_HMass__8->SetEntries(50);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_HMass__8->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__8->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__8->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_HMass__8->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__8->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__8->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__8->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__8->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__8->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__8->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__8->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__8->Draw("same hist");
   
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
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_HMass","JER Up","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_HMass","JER Down","F");
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
   pad1_v1__2->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__3 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__3->Draw();
   pad1_v2__3->cd();
   pad1_v2__3->Range(-38.75,0.75,348.75,1.25);
   pad1_v2__3->SetBorderSize(2);
   pad1_v2__3->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_HMass__9 = new TH1D("ZccHcc_boosted_PN_med_HMass__9","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__9->SetBinContent(10,1);
   ZccHcc_boosted_PN_med_HMass__9->SetBinContent(11,1);
   ZccHcc_boosted_PN_med_HMass__9->SetBinContent(12,1);
   ZccHcc_boosted_PN_med_HMass__9->SetBinContent(13,1);
   ZccHcc_boosted_PN_med_HMass__9->SetBinContent(14,1);
   ZccHcc_boosted_PN_med_HMass__9->SetBinContent(15,1);
   ZccHcc_boosted_PN_med_HMass__9->SetBinContent(17,1);
   ZccHcc_boosted_PN_med_HMass__9->SetBinError(10,1.000147);
   ZccHcc_boosted_PN_med_HMass__9->SetBinError(11,1.414214);
   ZccHcc_boosted_PN_med_HMass__9->SetBinError(12,0.503488);
   ZccHcc_boosted_PN_med_HMass__9->SetBinError(13,0.3800416);
   ZccHcc_boosted_PN_med_HMass__9->SetBinError(14,0.362098);
   ZccHcc_boosted_PN_med_HMass__9->SetBinError(15,1.000002);
   ZccHcc_boosted_PN_med_HMass__9->SetBinError(17,1.414214);
   ZccHcc_boosted_PN_med_HMass__9->SetMinimum(0.8);
   ZccHcc_boosted_PN_med_HMass__9->SetMaximum(1.2);
   ZccHcc_boosted_PN_med_HMass__9->SetEntries(7.504583);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_HMass__9->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__9->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__9->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_HMass__9->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__9->GetXaxis()->SetLabelSize(0.1);
   ZccHcc_boosted_PN_med_HMass__9->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_HMass__9->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__9->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__9->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   ZccHcc_boosted_PN_med_HMass__9->GetYaxis()->CenterTitle(true);
   ZccHcc_boosted_PN_med_HMass__9->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__9->GetYaxis()->SetLabelSize(0.09);
   ZccHcc_boosted_PN_med_HMass__9->GetYaxis()->SetTitleSize(0.12);
   ZccHcc_boosted_PN_med_HMass__9->GetYaxis()->SetTitleOffset(0.35);
   ZccHcc_boosted_PN_med_HMass__9->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__9->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__9->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__9->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__9->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__10 = new TH1D("ZccHcc_boosted_PN_med_HMass__10","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__10->SetBinContent(10,1);
   ZccHcc_boosted_PN_med_HMass__10->SetBinContent(11,1);
   ZccHcc_boosted_PN_med_HMass__10->SetBinContent(12,1);
   ZccHcc_boosted_PN_med_HMass__10->SetBinContent(13,1);
   ZccHcc_boosted_PN_med_HMass__10->SetBinContent(14,1.062927);
   ZccHcc_boosted_PN_med_HMass__10->SetBinContent(15,1);
   ZccHcc_boosted_PN_med_HMass__10->SetBinContent(17,1);
   ZccHcc_boosted_PN_med_HMass__10->SetBinError(10,1.000147);
   ZccHcc_boosted_PN_med_HMass__10->SetBinError(11,1.414214);
   ZccHcc_boosted_PN_med_HMass__10->SetBinError(12,0.503488);
   ZccHcc_boosted_PN_med_HMass__10->SetBinError(13,0.3800416);
   ZccHcc_boosted_PN_med_HMass__10->SetBinError(14,0.3789263);
   ZccHcc_boosted_PN_med_HMass__10->SetBinError(15,1.000002);
   ZccHcc_boosted_PN_med_HMass__10->SetBinError(17,1.414214);
   ZccHcc_boosted_PN_med_HMass__10->SetEntries(7.625552);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_HMass__10->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__10->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__10->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_HMass__10->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__10->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__10->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__10->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__10->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__10->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__10->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__10->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__10->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__3->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
