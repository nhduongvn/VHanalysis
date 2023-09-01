#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_noJEC_both_16()
{
//=========Macro generated from canvas: H_jetmass_noJEC_both_16/H_jetmass_noJEC_both_16
//=========  (Fri Sep  1 13:23:45 2023) by ROOT version 6.28/04
   TCanvas *H_jetmass_noJEC_both_16 = new TCanvas("H_jetmass_noJEC_both_16", "H_jetmass_noJEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_both_16->SetHighLightColor(2);
   H_jetmass_noJEC_both_16->Range(-60,-0.1189872,340,1.070885);
   H_jetmass_noJEC_both_16->SetFillColor(0);
   H_jetmass_noJEC_both_16->SetBorderMode(0);
   H_jetmass_noJEC_both_16->SetBorderSize(2);
   H_jetmass_noJEC_both_16->SetLeftMargin(0.15);
   H_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   H_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_noJEC__1000 = new TH1D("VbbHcc_both_H_jetmass_noJEC__1000","",150,0,300);
   VbbHcc_both_H_jetmass_noJEC__1000->SetBinContent(4,0.8153747);
   VbbHcc_both_H_jetmass_noJEC__1000->SetBinContent(5,0.7306489);
   VbbHcc_both_H_jetmass_noJEC__1000->SetBinContent(6,0.4440974);
   VbbHcc_both_H_jetmass_noJEC__1000->SetBinContent(7,0.9065693);
   VbbHcc_both_H_jetmass_noJEC__1000->SetBinContent(8,0.1745799);
   VbbHcc_both_H_jetmass_noJEC__1000->SetBinContent(9,0.1857078);
   VbbHcc_both_H_jetmass_noJEC__1000->SetBinContent(10,0.474873);
   VbbHcc_both_H_jetmass_noJEC__1000->SetBinContent(11,0.3572001);
   VbbHcc_both_H_jetmass_noJEC__1000->SetBinContent(13,0.05989596);
   VbbHcc_both_H_jetmass_noJEC__1000->SetBinContent(14,0.1838453);
   VbbHcc_both_H_jetmass_noJEC__1000->SetBinContent(15,0.109159);
   VbbHcc_both_H_jetmass_noJEC__1000->SetBinContent(16,0.07887516);
   VbbHcc_both_H_jetmass_noJEC__1000->SetBinContent(17,0.2436347);
   VbbHcc_both_H_jetmass_noJEC__1000->SetBinContent(18,0.1252896);
   VbbHcc_both_H_jetmass_noJEC__1000->SetBinError(4,0.276602);
   VbbHcc_both_H_jetmass_noJEC__1000->SetBinError(5,0.2634427);
   VbbHcc_both_H_jetmass_noJEC__1000->SetBinError(6,0.2112772);
   VbbHcc_both_H_jetmass_noJEC__1000->SetBinError(7,0.3088535);
   VbbHcc_both_H_jetmass_noJEC__1000->SetBinError(8,0.1238708);
   VbbHcc_both_H_jetmass_noJEC__1000->SetBinError(9,0.1313672);
   VbbHcc_both_H_jetmass_noJEC__1000->SetBinError(10,0.2164568);
   VbbHcc_both_H_jetmass_noJEC__1000->SetBinError(11,0.1790753);
   VbbHcc_both_H_jetmass_noJEC__1000->SetBinError(13,0.05989596);
   VbbHcc_both_H_jetmass_noJEC__1000->SetBinError(14,0.1310435);
   VbbHcc_both_H_jetmass_noJEC__1000->SetBinError(15,0.109159);
   VbbHcc_both_H_jetmass_noJEC__1000->SetBinError(16,0.07887516);
   VbbHcc_both_H_jetmass_noJEC__1000->SetBinError(17,0.1724728);
   VbbHcc_both_H_jetmass_noJEC__1000->SetBinError(18,0.1252896);
   VbbHcc_both_H_jetmass_noJEC__1000->SetEntries(52);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_jetmass_noJEC__1000->SetFillColor(ci);
   VbbHcc_both_H_jetmass_noJEC__1000->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_both_H_jetmass_noJEC__1000->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_noJEC__1000->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC__1000->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetmass_noJEC__1000->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC__1000->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC__1000->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC__1000->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC__1000->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetmass_noJEC__1000->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC__1000->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_both_16->Modified();
   H_jetmass_noJEC_both_16->cd();
   H_jetmass_noJEC_both_16->SetSelected(H_jetmass_noJEC_both_16);
}
