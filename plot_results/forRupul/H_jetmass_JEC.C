#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC()
{
//=========Macro generated from canvas: H_jetmass_JEC/H_jetmass_JEC
//=========  (Tue Mar 26 15:28:34 2024) by ROOT version 6.28/10
   TCanvas *H_jetmass_JEC = new TCanvas("H_jetmass_JEC", "H_jetmass_JEC",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC->SetHighLightColor(2);
   H_jetmass_JEC->Range(-60,-4.899708,340,44.09737);
   H_jetmass_JEC->SetFillColor(0);
   H_jetmass_JEC->SetBorderMode(0);
   H_jetmass_JEC->SetBorderSize(2);
   H_jetmass_JEC->SetLeftMargin(0.15);
   H_jetmass_JEC->SetFrameBorderMode(0);
   H_jetmass_JEC->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_H_jetmass_JEC__20 = new TH1D("VH_tagFirst_H_jetmass_JEC__20","",150,0,300);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(4,16.71961);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(5,33.65862);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(6,37.3311);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(7,33.1431);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(8,16.37818);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(9,9.14891);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(10,2.305149);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(11,6.008812);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(12,6.93986);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(13,3.391762);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(14,1.91698);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(15,1.176204);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(20,1.359137);
   VH_tagFirst_H_jetmass_JEC__20->SetBinContent(38,0.9548362);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(4,5.139674);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(5,7.269095);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(6,7.914829);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(7,7.478225);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(8,4.69354);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(9,3.9279);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(10,1.643541);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(11,2.718407);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(12,3.549473);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(13,1.96071);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(14,1.356092);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(15,1.176204);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(20,1.359137);
   VH_tagFirst_H_jetmass_JEC__20->SetBinError(38,0.9548362);
   VH_tagFirst_H_jetmass_JEC__20->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   VH_tagFirst_H_jetmass_JEC__20->SetFillColor(ci);
   VH_tagFirst_H_jetmass_JEC__20->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VH_tagFirst_H_jetmass_JEC__20->GetXaxis()->SetRange(1,300);
   VH_tagFirst_H_jetmass_JEC__20->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_jetmass_JEC__20->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_jetmass_JEC__20->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_jetmass_JEC__20->GetYaxis()->SetTitle("Events/2 GeV");
   VH_tagFirst_H_jetmass_JEC__20->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_jetmass_JEC__20->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_jetmass_JEC__20->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_jetmass_JEC__20->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_jetmass_JEC__20->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_jetmass_JEC__20->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, lumi fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC->Modified();
   H_jetmass_JEC->cd();
   H_jetmass_JEC->SetSelected(H_jetmass_JEC);
}
