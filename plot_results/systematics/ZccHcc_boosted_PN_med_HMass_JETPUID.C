#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ZccHcc_boosted_PN_med_HMass_JETPUID()
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
   TPad *pad1_v1__8 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__8->Draw();
   pad1_v1__8->cd();
   pad1_v1__8->Range(-38.75,-7.70789,348.75,69.371);
   pad1_v1__8->SetBorderSize(2);
   pad1_v1__8->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_HMass__21 = new TH1D("ZccHcc_boosted_PN_med_HMass__21","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__21->SetBinContent(10,2.80211);
   ZccHcc_boosted_PN_med_HMass__21->SetBinContent(11,1.468997);
   ZccHcc_boosted_PN_med_HMass__21->SetBinContent(12,11.12462);
   ZccHcc_boosted_PN_med_HMass__21->SetBinContent(13,21.16408);
   ZccHcc_boosted_PN_med_HMass__21->SetBinContent(14,20.74317);
   ZccHcc_boosted_PN_med_HMass__21->SetBinContent(15,2.917014);
   ZccHcc_boosted_PN_med_HMass__21->SetBinContent(17,1.205237);
   ZccHcc_boosted_PN_med_HMass__21->SetBinError(10,1.981682);
   ZccHcc_boosted_PN_med_HMass__21->SetBinError(11,1.468997);
   ZccHcc_boosted_PN_med_HMass__21->SetBinError(12,3.960583);
   ZccHcc_boosted_PN_med_HMass__21->SetBinError(13,5.687424);
   ZccHcc_boosted_PN_med_HMass__21->SetBinError(14,5.311121);
   ZccHcc_boosted_PN_med_HMass__21->SetBinError(15,2.062644);
   ZccHcc_boosted_PN_med_HMass__21->SetBinError(17,1.205237);
   ZccHcc_boosted_PN_med_HMass__21->SetMaximum(61.66311);
   ZccHcc_boosted_PN_med_HMass__21->SetEntries(49);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   ZccHcc_boosted_PN_med_HMass__21->SetFillColor(ci);
   ZccHcc_boosted_PN_med_HMass__21->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__21->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_HMass__21->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__21->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__21->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__21->GetYaxis()->SetTitle("Events/10.000000");
   ZccHcc_boosted_PN_med_HMass__21->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__21->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__21->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__21->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__21->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__21->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__22 = new TH1D("ZccHcc_boosted_PN_med_HMass__22","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__22->SetBinContent(10,2.80211);
   ZccHcc_boosted_PN_med_HMass__22->SetBinContent(11,1.468997);
   ZccHcc_boosted_PN_med_HMass__22->SetBinContent(12,11.12462);
   ZccHcc_boosted_PN_med_HMass__22->SetBinContent(13,21.16408);
   ZccHcc_boosted_PN_med_HMass__22->SetBinContent(14,20.74317);
   ZccHcc_boosted_PN_med_HMass__22->SetBinContent(15,2.917014);
   ZccHcc_boosted_PN_med_HMass__22->SetBinContent(17,1.205237);
   ZccHcc_boosted_PN_med_HMass__22->SetBinError(10,1.981682);
   ZccHcc_boosted_PN_med_HMass__22->SetBinError(11,1.468997);
   ZccHcc_boosted_PN_med_HMass__22->SetBinError(12,3.960583);
   ZccHcc_boosted_PN_med_HMass__22->SetBinError(13,5.687424);
   ZccHcc_boosted_PN_med_HMass__22->SetBinError(14,5.311121);
   ZccHcc_boosted_PN_med_HMass__22->SetBinError(15,2.062644);
   ZccHcc_boosted_PN_med_HMass__22->SetBinError(17,1.205237);
   ZccHcc_boosted_PN_med_HMass__22->SetEntries(49);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_HMass__22->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__22->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__22->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_HMass__22->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__22->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__22->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__22->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__22->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__22->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__22->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__22->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__22->Draw("same hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__23 = new TH1D("ZccHcc_boosted_PN_med_HMass__23","",3,0,300);
   ZccHcc_boosted_PN_med_HMass__23->SetBinContent(1,2.80211);
   ZccHcc_boosted_PN_med_HMass__23->SetBinContent(2,59.66311);
   ZccHcc_boosted_PN_med_HMass__23->SetBinError(1,1.981682);
   ZccHcc_boosted_PN_med_HMass__23->SetBinError(2,9.224103);
   ZccHcc_boosted_PN_med_HMass__23->SetEntries(50);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_HMass__23->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__23->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__23->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_HMass__23->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__23->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__23->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__23->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__23->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__23->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__23->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__23->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__23->Draw("same hist");
   
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
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_HMass","JETPUID Up","F");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_HMass","JETPUID Down","F");
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
   pad1_v1__8->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__9 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__9->Draw();
   pad1_v2__9->cd();
   pad1_v2__9->Range(-38.75,0.75,348.75,1.25);
   pad1_v2__9->SetBorderSize(2);
   pad1_v2__9->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_HMass__24 = new TH1D("ZccHcc_boosted_PN_med_HMass__24","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__24->SetBinContent(10,1);
   ZccHcc_boosted_PN_med_HMass__24->SetBinContent(11,1);
   ZccHcc_boosted_PN_med_HMass__24->SetBinContent(12,1);
   ZccHcc_boosted_PN_med_HMass__24->SetBinContent(13,1);
   ZccHcc_boosted_PN_med_HMass__24->SetBinContent(14,1);
   ZccHcc_boosted_PN_med_HMass__24->SetBinContent(15,1);
   ZccHcc_boosted_PN_med_HMass__24->SetBinContent(17,1);
   ZccHcc_boosted_PN_med_HMass__24->SetBinError(10,1.000147);
   ZccHcc_boosted_PN_med_HMass__24->SetBinError(11,1.414214);
   ZccHcc_boosted_PN_med_HMass__24->SetBinError(12,0.503488);
   ZccHcc_boosted_PN_med_HMass__24->SetBinError(13,0.3800416);
   ZccHcc_boosted_PN_med_HMass__24->SetBinError(14,0.362098);
   ZccHcc_boosted_PN_med_HMass__24->SetBinError(15,1.000002);
   ZccHcc_boosted_PN_med_HMass__24->SetBinError(17,1.414214);
   ZccHcc_boosted_PN_med_HMass__24->SetMinimum(0.8);
   ZccHcc_boosted_PN_med_HMass__24->SetMaximum(1.2);
   ZccHcc_boosted_PN_med_HMass__24->SetEntries(7.504583);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_HMass__24->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__24->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__24->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_HMass__24->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__24->GetXaxis()->SetLabelSize(0.1);
   ZccHcc_boosted_PN_med_HMass__24->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_HMass__24->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__24->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__24->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   ZccHcc_boosted_PN_med_HMass__24->GetYaxis()->CenterTitle(true);
   ZccHcc_boosted_PN_med_HMass__24->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__24->GetYaxis()->SetLabelSize(0.09);
   ZccHcc_boosted_PN_med_HMass__24->GetYaxis()->SetTitleSize(0.12);
   ZccHcc_boosted_PN_med_HMass__24->GetYaxis()->SetTitleOffset(0.35);
   ZccHcc_boosted_PN_med_HMass__24->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__24->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__24->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__24->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__24->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__25 = new TH1D("ZccHcc_boosted_PN_med_HMass__25","",3,0,300);
   ZccHcc_boosted_PN_med_HMass__25->SetBinContent(1,2.80211);
   ZccHcc_boosted_PN_med_HMass__25->SetBinContent(2,59.66311);
   ZccHcc_boosted_PN_med_HMass__25->SetBinError(1,1.981682);
   ZccHcc_boosted_PN_med_HMass__25->SetBinError(2,9.224103);
   ZccHcc_boosted_PN_med_HMass__25->SetEntries(50);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_HMass__25->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__25->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__25->GetXaxis()->SetRange(1,30);
   ZccHcc_boosted_PN_med_HMass__25->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__25->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__25->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__25->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__25->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__25->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__25->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__25->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__25->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__9->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
