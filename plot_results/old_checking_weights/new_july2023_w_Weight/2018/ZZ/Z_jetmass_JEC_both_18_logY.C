void Z_jetmass_JEC_both_18_logY()
{
//=========Macro generated from canvas: Z_jetmass_JEC_both_18/Z_jetmass_JEC_both_18
//=========  (Thu Aug 10 10:43:51 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_both_18 = new TCanvas("Z_jetmass_JEC_both_18", "Z_jetmass_JEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_both_18->SetHighLightColor(2);
   Z_jetmass_JEC_both_18->Range(-60,-1.381615,340,1.823754);
   Z_jetmass_JEC_both_18->SetFillColor(0);
   Z_jetmass_JEC_both_18->SetBorderMode(0);
   Z_jetmass_JEC_both_18->SetBorderSize(2);
   Z_jetmass_JEC_both_18->SetLogy();
   Z_jetmass_JEC_both_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_both_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_JEC_stack_8 = new TH1D("VbbHcc_both_Z_jetmass_JEC_stack_8","",150,0,300);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(4,3.4052);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(5,8.764105);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(6,16.8139);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(7,10.82434);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(8,9.528307);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(9,7.625608);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(10,4.993611);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(11,2.584608);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(12,1.774975);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(13,1.288465);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(14,1.920249);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(15,1.273462);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(17,0.2313727);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(18,0.3171006);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(19,0.8240148);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(20,0.3001798);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(23,0.1737609);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(24,0.3010719);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(33,0.2895328);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(4,1.088603);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(5,1.68232);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(6,2.395769);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(7,1.906861);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(8,1.789473);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(9,1.574117);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(10,1.226233);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(11,0.9256842);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(12,0.8003903);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(13,0.6474611);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(14,0.7983353);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(15,0.6399333);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(17,0.2313727);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(18,0.3171006);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(19,0.4820508);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(20,0.3001798);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(23,0.1737609);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(24,0.3010719);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(33,0.2895328);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetEntries(232);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_both_18->Modified();
   Z_jetmass_JEC_both_18->cd();
   Z_jetmass_JEC_both_18->SetSelected(Z_jetmass_JEC_both_18);
}
