#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_both_16()
{
//=========Macro generated from canvas: Z_jetmass_JEC_both_16/Z_jetmass_JEC_both_16
//=========  (Fri Sep  1 13:23:46 2023) by ROOT version 6.28/04
   TCanvas *Z_jetmass_JEC_both_16 = new TCanvas("Z_jetmass_JEC_both_16", "Z_jetmass_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_both_16->SetHighLightColor(2);
   Z_jetmass_JEC_both_16->Range(-60,-0.1712663,340,1.541397);
   Z_jetmass_JEC_both_16->SetFillColor(0);
   Z_jetmass_JEC_both_16->SetBorderMode(0);
   Z_jetmass_JEC_both_16->SetBorderSize(2);
   Z_jetmass_JEC_both_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_both_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_JEC__1075 = new TH1D("VbbHcc_both_Z_jetmass_JEC__1075","",150,0,300);
   VbbHcc_both_Z_jetmass_JEC__1075->SetBinContent(4,0.3346149);
   VbbHcc_both_Z_jetmass_JEC__1075->SetBinContent(5,1.304886);
   VbbHcc_both_Z_jetmass_JEC__1075->SetBinContent(6,0.9465336);
   VbbHcc_both_Z_jetmass_JEC__1075->SetBinContent(7,0.313509);
   VbbHcc_both_Z_jetmass_JEC__1075->SetBinContent(8,0.5681759);
   VbbHcc_both_Z_jetmass_JEC__1075->SetBinContent(9,0.6776389);
   VbbHcc_both_Z_jetmass_JEC__1075->SetBinContent(10,0.07985507);
   VbbHcc_both_Z_jetmass_JEC__1075->SetBinContent(11,0.1615258);
   VbbHcc_both_Z_jetmass_JEC__1075->SetBinContent(15,0.09546661);
   VbbHcc_both_Z_jetmass_JEC__1075->SetBinContent(16,0.1733041);
   VbbHcc_both_Z_jetmass_JEC__1075->SetBinContent(18,0.2342406);
   VbbHcc_both_Z_jetmass_JEC__1075->SetBinError(4,0.1705747);
   VbbHcc_both_Z_jetmass_JEC__1075->SetBinError(5,0.3524422);
   VbbHcc_both_Z_jetmass_JEC__1075->SetBinError(6,0.3085093);
   VbbHcc_both_Z_jetmass_JEC__1075->SetBinError(7,0.1647307);
   VbbHcc_both_Z_jetmass_JEC__1075->SetBinError(8,0.2362202);
   VbbHcc_both_Z_jetmass_JEC__1075->SetBinError(9,0.279676);
   VbbHcc_both_Z_jetmass_JEC__1075->SetBinError(10,0.07985507);
   VbbHcc_both_Z_jetmass_JEC__1075->SetBinError(11,0.1143028);
   VbbHcc_both_Z_jetmass_JEC__1075->SetBinError(15,0.09546661);
   VbbHcc_both_Z_jetmass_JEC__1075->SetBinError(16,0.1269051);
   VbbHcc_both_Z_jetmass_JEC__1075->SetBinError(18,0.1658267);
   VbbHcc_both_Z_jetmass_JEC__1075->SetEntries(52);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_jetmass_JEC__1075->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_JEC__1075->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_Z_jetmass_JEC__1075->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_JEC__1075->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC__1075->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_jetmass_JEC__1075->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC__1075->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC__1075->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC__1075->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC__1075->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_jetmass_JEC__1075->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC__1075->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_both_16->Modified();
   Z_jetmass_JEC_both_16->cd();
   Z_jetmass_JEC_both_16->SetSelected(Z_jetmass_JEC_both_16);
}
