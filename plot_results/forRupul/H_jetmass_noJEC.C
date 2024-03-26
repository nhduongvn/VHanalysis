#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_noJEC()
{
//=========Macro generated from canvas: H_jetmass_noJEC/H_jetmass_noJEC
//=========  (Tue Mar 26 15:28:34 2024) by ROOT version 6.28/10
   TCanvas *H_jetmass_noJEC = new TCanvas("H_jetmass_noJEC", "H_jetmass_noJEC",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC->SetHighLightColor(2);
   H_jetmass_noJEC->Range(-60,-5.171378,340,46.5424);
   H_jetmass_noJEC->SetFillColor(0);
   H_jetmass_noJEC->SetBorderMode(0);
   H_jetmass_noJEC->SetBorderSize(2);
   H_jetmass_noJEC->SetLeftMargin(0.15);
   H_jetmass_noJEC->SetFrameBorderMode(0);
   H_jetmass_noJEC->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_H_jetmass_noJEC__19 = new TH1D("VH_tagFirst_H_jetmass_noJEC__19","",150,0,300);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(3,1.398905);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(4,16.87152);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(5,31.30528);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(6,39.40097);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(7,29.37912);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(8,10.73052);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(9,16.05595);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(10,2.538785);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(11,5.928105);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(12,5.706012);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(13,4.630175);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(14,2.996752);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(15,1.176204);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(18,1.359137);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(37,0.9548362);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(3,1.398905);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(4,5.56328);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(5,6.771448);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(6,7.892464);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(7,7.32215);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(8,3.641744);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(9,5.081787);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(10,1.795767);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(11,2.687233);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(12,2.924695);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(13,2.810547);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(14,1.733463);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(15,1.176204);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(18,1.359137);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(37,0.9548362);
   VH_tagFirst_H_jetmass_noJEC__19->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   VH_tagFirst_H_jetmass_noJEC__19->SetFillColor(ci);
   VH_tagFirst_H_jetmass_noJEC__19->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VH_tagFirst_H_jetmass_noJEC__19->GetXaxis()->SetRange(1,300);
   VH_tagFirst_H_jetmass_noJEC__19->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_jetmass_noJEC__19->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_jetmass_noJEC__19->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_jetmass_noJEC__19->GetYaxis()->SetTitle("Events/2 GeV");
   VH_tagFirst_H_jetmass_noJEC__19->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_jetmass_noJEC__19->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_jetmass_noJEC__19->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_jetmass_noJEC__19->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_jetmass_noJEC__19->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_jetmass_noJEC__19->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, lumi fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC->Modified();
   H_jetmass_noJEC->cd();
   H_jetmass_noJEC->SetSelected(H_jetmass_noJEC);
}
