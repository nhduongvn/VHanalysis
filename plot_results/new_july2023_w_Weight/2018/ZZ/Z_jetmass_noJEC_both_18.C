void Z_jetmass_noJEC_both_18()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_both_18/Z_jetmass_noJEC_both_18
//=========  (Thu Aug 10 12:25:22 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_both_18 = new TCanvas("Z_jetmass_noJEC_both_18", "Z_jetmass_noJEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_both_18->SetHighLightColor(2);
   Z_jetmass_noJEC_both_18->Range(-60,-2.031157,340,18.28041);
   Z_jetmass_noJEC_both_18->SetFillColor(0);
   Z_jetmass_noJEC_both_18->SetBorderMode(0);
   Z_jetmass_noJEC_both_18->SetBorderSize(2);
   Z_jetmass_noJEC_both_18->SetLeftMargin(0.15);
   Z_jetmass_noJEC_both_18->SetFrameBorderMode(0);
   Z_jetmass_noJEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_noJEC_stack_8 = new TH1D("VbbHcc_both_Z_jetmass_noJEC_stack_8","",150,0,300);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(3,0.62758);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(4,5.716478);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(5,9.569448);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(6,15.47548);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(7,9.872857);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(8,8.292466);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(9,6.899595);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(10,4.718712);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(11,3.031046);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(12,2.153743);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(13,1.313125);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(14,1.621464);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(15,1.193934);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(16,0.5422726);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(17,0.3171006);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(18,0.3171006);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(19,0.2125962);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(20,0.294318);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(21,0.3001798);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(22,0.1737609);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(23,0.3010719);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(32,0.2895328);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(3,0.4440688);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(4,1.405856);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(5,1.784959);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(6,2.26705);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(7,1.861217);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(8,1.668738);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(9,1.484085);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(10,1.198303);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(11,0.9655565);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(12,0.8861052);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(13,0.6606054);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(14,0.7314106);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(15,0.605301);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(16,0.3875462);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(17,0.3171006);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(18,0.3171006);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(19,0.2125962);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(20,0.294318);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(21,0.3001798);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(22,0.1737609);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(23,0.3010719);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(32,0.2895328);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetEntries(232);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_both_18->Modified();
   Z_jetmass_noJEC_both_18->cd();
   Z_jetmass_noJEC_both_18->SetSelected(Z_jetmass_noJEC_both_18);
}
