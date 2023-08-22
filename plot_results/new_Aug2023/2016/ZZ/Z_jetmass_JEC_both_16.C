void Z_jetmass_JEC_both_16()
{
//=========Macro generated from canvas: Z_jetmass_JEC_both_16/Z_jetmass_JEC_both_16
//=========  (Tue Aug 22 09:23:48 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_both_16 = new TCanvas("Z_jetmass_JEC_both_16", "Z_jetmass_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_both_16->SetHighLightColor(2);
   Z_jetmass_JEC_both_16->Range(-60,-1.031796,340,9.286165);
   Z_jetmass_JEC_both_16->SetFillColor(0);
   Z_jetmass_JEC_both_16->SetBorderMode(0);
   Z_jetmass_JEC_both_16->SetBorderSize(2);
   Z_jetmass_JEC_both_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_both_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_JEC_stack_8 = new TH1D("VbbHcc_both_Z_jetmass_JEC_stack_8","",150,0,300);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(3,0.1904895);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(4,1.672255);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(5,7.806117);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(6,7.861304);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(7,4.566106);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(8,3.15665);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(9,2.318784);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(10,0.713298);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(11,1.379643);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(12,1.462157);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(13,0.2219612);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(14,0.4805466);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(15,0.2080684);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(17,0.2139249);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(3,0.1904895);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(4,0.5927725);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(5,1.281412);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(6,1.274026);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(7,0.9591546);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(8,0.8107549);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(9,0.7024508);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(10,0.3748207);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(11,0.5642525);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(12,0.5543997);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(13,0.2219612);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(14,0.3397995);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(15,0.2080684);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(17,0.2139249);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetEntries(158);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_8->Draw("HIST");
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
