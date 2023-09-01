#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_both_16()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_both_16/Z_jetmass_noJEC_both_16
//=========  (Fri Sep  1 13:23:46 2023) by ROOT version 6.28/04
   TCanvas *Z_jetmass_noJEC_both_16 = new TCanvas("Z_jetmass_noJEC_both_16", "Z_jetmass_noJEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_both_16->SetHighLightColor(2);
   Z_jetmass_noJEC_both_16->Range(-60,-0.001052268,340,0.009470409);
   Z_jetmass_noJEC_both_16->SetFillColor(0);
   Z_jetmass_noJEC_both_16->SetBorderMode(0);
   Z_jetmass_noJEC_both_16->SetBorderSize(2);
   Z_jetmass_noJEC_both_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_noJEC__1065 = new TH1D("VbbHcc_both_Z_jetmass_noJEC__1065","",150,0,300);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinContent(3,0.0006191706);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinContent(4,0.003534749);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinContent(5,0.005653596);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinContent(6,0.008017277);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinContent(7,0.006116453);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinContent(8,0.003528716);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinContent(9,0.004435937);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinContent(10,0.001935817);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinContent(11,0.001023562);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinContent(12,0.001831845);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinContent(14,0.0002765116);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinContent(15,0.0002902258);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinContent(16,0.0008519192);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinContent(17,0.000263898);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinContent(22,0.0003478785);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinContent(24,0.0003370889);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinError(3,0.0004411727);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinError(4,0.001030442);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinError(5,0.001285958);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinError(6,0.001529499);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinError(7,0.001327793);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinError(8,0.001002321);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinError(9,0.001154354);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinError(10,0.0007399501);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinError(11,0.0005177163);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinError(12,0.0007584947);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinError(14,0.0002765116);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinError(15,0.0002902258);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinError(16,0.0004920502);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinError(17,0.000263898);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinError(22,0.0003478785);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetBinError(24,0.0003370889);
   VbbHcc_both_Z_jetmass_noJEC__1065->SetEntries(137);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_jetmass_noJEC__1065->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_noJEC__1065->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_both_Z_jetmass_noJEC__1065->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_noJEC__1065->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1065->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_jetmass_noJEC__1065->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1065->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1065->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1065->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1065->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_jetmass_noJEC__1065->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1065->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_both_16->Modified();
   Z_jetmass_noJEC_both_16->cd();
   Z_jetmass_noJEC_both_16->SetSelected(Z_jetmass_noJEC_both_16);
}
