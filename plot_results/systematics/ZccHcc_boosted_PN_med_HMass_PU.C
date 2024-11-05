#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ZccHcc_boosted_PN_med_HMass_PU()
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
   TPad *pad1_v1__6 = new TPad("pad1_v1", "pad1_v1",0,0.3,1,1);
   pad1_v1__6->Draw();
   pad1_v1__6->cd();
   pad1_v1__6->Range(-38.75,-2.927049,348.75,26.34344);
   pad1_v1__6->SetBorderSize(2);
   pad1_v1__6->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_HMass__16 = new TH1D("ZccHcc_boosted_PN_med_HMass__16","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__16->SetBinContent(10,2.80211);
   ZccHcc_boosted_PN_med_HMass__16->SetBinContent(11,1.468997);
   ZccHcc_boosted_PN_med_HMass__16->SetBinContent(12,11.12462);
   ZccHcc_boosted_PN_med_HMass__16->SetBinContent(13,21.16408);
   ZccHcc_boosted_PN_med_HMass__16->SetBinContent(14,20.74317);
   ZccHcc_boosted_PN_med_HMass__16->SetBinContent(15,2.917014);
   ZccHcc_boosted_PN_med_HMass__16->SetBinContent(17,1.205237);
   ZccHcc_boosted_PN_med_HMass__16->SetBinError(10,1.981682);
   ZccHcc_boosted_PN_med_HMass__16->SetBinError(11,1.468997);
   ZccHcc_boosted_PN_med_HMass__16->SetBinError(12,3.960583);
   ZccHcc_boosted_PN_med_HMass__16->SetBinError(13,5.687424);
   ZccHcc_boosted_PN_med_HMass__16->SetBinError(14,5.311121);
   ZccHcc_boosted_PN_med_HMass__16->SetBinError(15,2.062644);
   ZccHcc_boosted_PN_med_HMass__16->SetBinError(17,1.205237);
   ZccHcc_boosted_PN_med_HMass__16->SetMaximum(23.41639);
   ZccHcc_boosted_PN_med_HMass__16->SetEntries(49);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   ZccHcc_boosted_PN_med_HMass__16->SetFillColor(ci);
   ZccHcc_boosted_PN_med_HMass__16->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__16->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_HMass__16->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__16->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__16->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__16->GetYaxis()->SetTitle("Events/10.000000");
   ZccHcc_boosted_PN_med_HMass__16->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__16->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__16->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__16->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__16->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__16->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__17 = new TH1D("ZccHcc_boosted_PN_med_HMass__17","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__17->SetBinContent(10,2.884322);
   ZccHcc_boosted_PN_med_HMass__17->SetBinContent(11,1.249606);
   ZccHcc_boosted_PN_med_HMass__17->SetBinContent(12,9.704712);
   ZccHcc_boosted_PN_med_HMass__17->SetBinContent(13,20.81649);
   ZccHcc_boosted_PN_med_HMass__17->SetBinContent(14,20.57659);
   ZccHcc_boosted_PN_med_HMass__17->SetBinContent(15,2.6499);
   ZccHcc_boosted_PN_med_HMass__17->SetBinContent(17,1.514802);
   ZccHcc_boosted_PN_med_HMass__17->SetBinError(10,2.043621);
   ZccHcc_boosted_PN_med_HMass__17->SetBinError(11,1.249606);
   ZccHcc_boosted_PN_med_HMass__17->SetBinError(12,3.463712);
   ZccHcc_boosted_PN_med_HMass__17->SetBinError(13,5.402327);
   ZccHcc_boosted_PN_med_HMass__17->SetBinError(14,5.217766);
   ZccHcc_boosted_PN_med_HMass__17->SetBinError(15,1.894439);
   ZccHcc_boosted_PN_med_HMass__17->SetBinError(17,1.514802);
   ZccHcc_boosted_PN_med_HMass__17->SetEntries(49);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_HMass__17->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__17->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__17->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_HMass__17->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__17->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__17->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__17->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__17->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__17->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__17->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__17->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__17->Draw("same hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__18 = new TH1D("ZccHcc_boosted_PN_med_HMass__18","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__18->SetBinContent(10,2.664697);
   ZccHcc_boosted_PN_med_HMass__18->SetBinContent(11,1.677848);
   ZccHcc_boosted_PN_med_HMass__18->SetBinContent(12,12.96315);
   ZccHcc_boosted_PN_med_HMass__18->SetBinContent(13,21.41639);
   ZccHcc_boosted_PN_med_HMass__18->SetBinContent(14,21.19571);
   ZccHcc_boosted_PN_med_HMass__18->SetBinContent(15,3.225632);
   ZccHcc_boosted_PN_med_HMass__18->SetBinContent(17,0.8912119);
   ZccHcc_boosted_PN_med_HMass__18->SetBinError(10,1.89579);
   ZccHcc_boosted_PN_med_HMass__18->SetBinError(11,1.677848);
   ZccHcc_boosted_PN_med_HMass__18->SetBinError(12,4.738666);
   ZccHcc_boosted_PN_med_HMass__18->SetBinError(13,6.110822);
   ZccHcc_boosted_PN_med_HMass__18->SetBinError(14,5.657095);
   ZccHcc_boosted_PN_med_HMass__18->SetBinError(15,2.310692);
   ZccHcc_boosted_PN_med_HMass__18->SetBinError(17,0.8912119);
   ZccHcc_boosted_PN_med_HMass__18->SetEntries(49);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_HMass__18->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__18->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__18->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_HMass__18->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__18->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__18->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__18->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__18->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__18->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__18->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__18->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__18->Draw("same hist");
   
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

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZccHcc_boosted_PN_med_HMass","PU Down","F");
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
   pad1_v1__6->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad1_v2
   TPad *pad1_v2__7 = new TPad("pad1_v2", "pad1_v2",0,0.1,1,0.3);
   pad1_v2__7->Draw();
   pad1_v2__7->cd();
   pad1_v2__7->Range(-38.75,0.75,348.75,1.25);
   pad1_v2__7->SetBorderSize(2);
   pad1_v2__7->SetFrameFillColor(0);
   
   TH1D *ZccHcc_boosted_PN_med_HMass__19 = new TH1D("ZccHcc_boosted_PN_med_HMass__19","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__19->SetBinContent(10,1.029339);
   ZccHcc_boosted_PN_med_HMass__19->SetBinContent(11,0.8506526);
   ZccHcc_boosted_PN_med_HMass__19->SetBinContent(12,0.8723638);
   ZccHcc_boosted_PN_med_HMass__19->SetBinContent(13,0.9835762);
   ZccHcc_boosted_PN_med_HMass__19->SetBinContent(14,0.9919697);
   ZccHcc_boosted_PN_med_HMass__19->SetBinContent(15,0.9084291);
   ZccHcc_boosted_PN_med_HMass__19->SetBinContent(17,1.25685);
   ZccHcc_boosted_PN_med_HMass__19->SetBinError(10,1.030449);
   ZccHcc_boosted_PN_med_HMass__19->SetBinError(11,1.203004);
   ZccHcc_boosted_PN_med_HMass__19->SetBinError(12,0.4397744);
   ZccHcc_boosted_PN_med_HMass__19->SetBinError(13,0.3674513);
   ZccHcc_boosted_PN_med_HMass__19->SetBinError(14,0.357466);
   ZccHcc_boosted_PN_med_HMass__19->SetBinError(15,0.9134558);
   ZccHcc_boosted_PN_med_HMass__19->SetBinError(17,1.777454);
   ZccHcc_boosted_PN_med_HMass__19->SetMinimum(0.8);
   ZccHcc_boosted_PN_med_HMass__19->SetMaximum(1.2);
   ZccHcc_boosted_PN_med_HMass__19->SetEntries(6.827991);

   ci = TColor::GetColor("#ff0000");
   ZccHcc_boosted_PN_med_HMass__19->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__19->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__19->GetXaxis()->SetRange(1,31);
   ZccHcc_boosted_PN_med_HMass__19->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__19->GetXaxis()->SetLabelSize(0.1);
   ZccHcc_boosted_PN_med_HMass__19->GetXaxis()->SetTitleSize(0.13);
   ZccHcc_boosted_PN_med_HMass__19->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__19->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__19->GetYaxis()->SetTitle("#frac{Up/Down}{Nominal}");
   ZccHcc_boosted_PN_med_HMass__19->GetYaxis()->CenterTitle(true);
   ZccHcc_boosted_PN_med_HMass__19->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__19->GetYaxis()->SetLabelSize(0.09);
   ZccHcc_boosted_PN_med_HMass__19->GetYaxis()->SetTitleSize(0.12);
   ZccHcc_boosted_PN_med_HMass__19->GetYaxis()->SetTitleOffset(0.35);
   ZccHcc_boosted_PN_med_HMass__19->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__19->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__19->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__19->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__19->Draw("hist");
   
   TH1D *ZccHcc_boosted_PN_med_HMass__20 = new TH1D("ZccHcc_boosted_PN_med_HMass__20","",30,0,300);
   ZccHcc_boosted_PN_med_HMass__20->SetBinContent(10,0.9509607);
   ZccHcc_boosted_PN_med_HMass__20->SetBinContent(11,1.142173);
   ZccHcc_boosted_PN_med_HMass__20->SetBinContent(12,1.165268);
   ZccHcc_boosted_PN_med_HMass__20->SetBinContent(13,1.011921);
   ZccHcc_boosted_PN_med_HMass__20->SetBinContent(14,1.021817);
   ZccHcc_boosted_PN_med_HMass__20->SetBinContent(15,1.105799);
   ZccHcc_boosted_PN_med_HMass__20->SetBinContent(17,0.7394492);
   ZccHcc_boosted_PN_med_HMass__20->SetBinError(10,0.9539529);
   ZccHcc_boosted_PN_med_HMass__20->SetBinError(11,1.615276);
   ZccHcc_boosted_PN_med_HMass__20->SetBinError(12,0.5946018);
   ZccHcc_boosted_PN_med_HMass__20->SetBinError(13,0.3966309);
   ZccHcc_boosted_PN_med_HMass__20->SetBinError(14,0.3779231);
   ZccHcc_boosted_PN_med_HMass__20->SetBinError(15,1.113054);
   ZccHcc_boosted_PN_med_HMass__20->SetBinError(17,1.045739);
   ZccHcc_boosted_PN_med_HMass__20->SetEntries(7.830897);

   ci = TColor::GetColor("#0000ff");
   ZccHcc_boosted_PN_med_HMass__20->SetLineColor(ci);
   ZccHcc_boosted_PN_med_HMass__20->SetLineWidth(2);
   ZccHcc_boosted_PN_med_HMass__20->GetXaxis()->SetRange(1,300);
   ZccHcc_boosted_PN_med_HMass__20->GetXaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__20->GetXaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__20->GetXaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__20->GetYaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__20->GetYaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__20->GetZaxis()->SetLabelFont(42);
   ZccHcc_boosted_PN_med_HMass__20->GetZaxis()->SetTitleOffset(1);
   ZccHcc_boosted_PN_med_HMass__20->GetZaxis()->SetTitleFont(42);
   ZccHcc_boosted_PN_med_HMass__20->Draw("same hist");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineStyle(2);
   line->Draw();
   pad1_v2__7->Modified();
   c1->cd();
   c1->Modified();
   c1->SetSelected(c1);
}
