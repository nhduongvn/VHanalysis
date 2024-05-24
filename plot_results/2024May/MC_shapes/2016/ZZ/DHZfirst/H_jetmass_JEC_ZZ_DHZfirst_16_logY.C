#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC_ZZ_DHZfirst_16_logY()
{
//=========Macro generated from canvas: H_jetmass_JEC_ZZ_DHZfirst_16/H_jetmass_JEC_ZZ_DHZfirst_16
//=========  (Thu May 23 20:48:54 2024) by ROOT version 6.28/10
   TCanvas *H_jetmass_JEC_ZZ_DHZfirst_16 = new TCanvas("H_jetmass_JEC_ZZ_DHZfirst_16", "H_jetmass_JEC_ZZ_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_ZZ_DHZfirst_16->SetHighLightColor(2);
   H_jetmass_JEC_ZZ_DHZfirst_16->Range(-60,-1.307867,340,1.105165);
   H_jetmass_JEC_ZZ_DHZfirst_16->SetFillColor(0);
   H_jetmass_JEC_ZZ_DHZfirst_16->SetFillStyle(4000);
   H_jetmass_JEC_ZZ_DHZfirst_16->SetBorderMode(0);
   H_jetmass_JEC_ZZ_DHZfirst_16->SetBorderSize(2);
   H_jetmass_JEC_ZZ_DHZfirst_16->SetLogy();
   H_jetmass_JEC_ZZ_DHZfirst_16->SetLeftMargin(0.15);
   H_jetmass_JEC_ZZ_DHZfirst_16->SetFrameFillStyle(1000);
   H_jetmass_JEC_ZZ_DHZfirst_16->SetFrameBorderMode(0);
   H_jetmass_JEC_ZZ_DHZfirst_16->SetFrameFillStyle(1000);
   H_jetmass_JEC_ZZ_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_jetmass_JEC__2038 = new TH1D("VH_DHZfirst_H_jetmass_JEC__2038","",150,0,300);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinContent(4,0.1715797);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinContent(5,1.754004);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinContent(6,3.47134);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinContent(7,3.60045);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinContent(8,2.984507);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinContent(9,3.758999);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinContent(10,3.857559);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinContent(11,2.724698);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinContent(12,2.279439);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinContent(13,1.023417);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinContent(14,0.6315883);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinContent(15,1.353942);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinContent(16,1.232968);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinContent(17,0.3962177);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinContent(18,0.2033844);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinContent(20,0.2431546);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinContent(21,0.1773787);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinContent(38,0.3214725);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinError(4,0.1715797);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinError(5,0.5637942);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinError(6,0.7979111);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinError(7,0.8618022);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinError(8,0.7833662);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinError(9,0.8729575);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinError(10,0.878656);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinError(11,0.7621463);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinError(12,0.7280166);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinError(13,0.4236885);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinError(14,0.3794072);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinError(15,0.5221226);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinError(16,0.5169233);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinError(17,0.2814011);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinError(18,0.2033844);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinError(20,0.2431546);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinError(21,0.1773787);
   VH_DHZfirst_H_jetmass_JEC__2038->SetBinError(38,0.3214725);
   VH_DHZfirst_H_jetmass_JEC__2038->SetEntries(155);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_jetmass_JEC__2038->SetLineColor(ci);
   VH_DHZfirst_H_jetmass_JEC__2038->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VH_DHZfirst_H_jetmass_JEC__2038->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_H_jetmass_JEC__2038->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_JEC__2038->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetmass_JEC__2038->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_JEC__2038->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_H_jetmass_JEC__2038->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_JEC__2038->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_jetmass_JEC__2038->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_jetmass_JEC__2038->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_jetmass_JEC__2038->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_JEC__2038->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_JEC__2038->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetmass_JEC__2038->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_JEC__2038->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_ZZ_DHZfirst_16->Modified();
   H_jetmass_JEC_ZZ_DHZfirst_16->cd();
   H_jetmass_JEC_ZZ_DHZfirst_16->SetSelected(H_jetmass_JEC_ZZ_DHZfirst_16);
}
