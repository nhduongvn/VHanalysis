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
   Z_jetmass_noJEC_both_16->Range(-60,-0.1224031,340,1.101628);
   Z_jetmass_noJEC_both_16->SetFillColor(0);
   Z_jetmass_noJEC_both_16->SetBorderMode(0);
   Z_jetmass_noJEC_both_16->SetBorderSize(2);
   Z_jetmass_noJEC_both_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_noJEC__1060 = new TH1D("VbbHcc_both_Z_jetmass_noJEC__1060","",150,0,300);
   VbbHcc_both_Z_jetmass_noJEC__1060->SetBinContent(3,0.06727392);
   VbbHcc_both_Z_jetmass_noJEC__1060->SetBinContent(4,0.6832636);
   VbbHcc_both_Z_jetmass_noJEC__1060->SetBinContent(5,0.932595);
   VbbHcc_both_Z_jetmass_noJEC__1060->SetBinContent(6,0.7031342);
   VbbHcc_both_Z_jetmass_noJEC__1060->SetBinContent(7,0.4749957);
   VbbHcc_both_Z_jetmass_noJEC__1060->SetBinContent(8,0.7288559);
   VbbHcc_both_Z_jetmass_noJEC__1060->SetBinContent(9,0.3182918);
   VbbHcc_both_Z_jetmass_noJEC__1060->SetBinContent(10,0.4007153);
   VbbHcc_both_Z_jetmass_noJEC__1060->SetBinContent(12,0.07761386);
   VbbHcc_both_Z_jetmass_noJEC__1060->SetBinContent(14,0.09546661);
   VbbHcc_both_Z_jetmass_noJEC__1060->SetBinContent(17,0.1733041);
   VbbHcc_both_Z_jetmass_noJEC__1060->SetBinContent(18,0.2342406);
   VbbHcc_both_Z_jetmass_noJEC__1060->SetBinError(3,0.06727392);
   VbbHcc_both_Z_jetmass_noJEC__1060->SetBinError(4,0.2434429);
   VbbHcc_both_Z_jetmass_noJEC__1060->SetBinError(5,0.3003895);
   VbbHcc_both_Z_jetmass_noJEC__1060->SetBinError(6,0.2570044);
   VbbHcc_both_Z_jetmass_noJEC__1060->SetBinError(7,0.2191497);
   VbbHcc_both_Z_jetmass_noJEC__1060->SetBinError(8,0.2799901);
   VbbHcc_both_Z_jetmass_noJEC__1060->SetBinError(9,0.1839548);
   VbbHcc_both_Z_jetmass_noJEC__1060->SetBinError(10,0.2067038);
   VbbHcc_both_Z_jetmass_noJEC__1060->SetBinError(12,0.07761386);
   VbbHcc_both_Z_jetmass_noJEC__1060->SetBinError(14,0.09546661);
   VbbHcc_both_Z_jetmass_noJEC__1060->SetBinError(17,0.1269051);
   VbbHcc_both_Z_jetmass_noJEC__1060->SetBinError(18,0.1658267);
   VbbHcc_both_Z_jetmass_noJEC__1060->SetEntries(52);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_jetmass_noJEC__1060->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_noJEC__1060->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_both_Z_jetmass_noJEC__1060->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_noJEC__1060->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1060->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_jetmass_noJEC__1060->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1060->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1060->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1060->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1060->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_jetmass_noJEC__1060->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC__1060->Draw("HIST");
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
