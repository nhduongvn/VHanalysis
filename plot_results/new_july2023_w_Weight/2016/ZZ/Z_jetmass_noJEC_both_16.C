void Z_jetmass_noJEC_both_16()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_both_16/Z_jetmass_noJEC_both_16
//=========  (Thu Aug 10 12:25:21 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_both_16 = new TCanvas("Z_jetmass_noJEC_both_16", "Z_jetmass_noJEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_both_16->SetHighLightColor(2);
   Z_jetmass_noJEC_both_16->Range(-60,-1.546009,340,13.91408);
   Z_jetmass_noJEC_both_16->SetFillColor(0);
   Z_jetmass_noJEC_both_16->SetBorderMode(0);
   Z_jetmass_noJEC_both_16->SetBorderSize(2);
   Z_jetmass_noJEC_both_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_noJEC_stack_8 = new TH1D("VbbHcc_both_Z_jetmass_noJEC_stack_8","",150,0,300);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(3,0.8055273);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(4,3.740902);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(5,11.77912);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(6,9.371373);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(7,6.307892);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(8,4.940775);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(9,2.68169);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(10,1.993859);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(11,1.356508);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(12,1.025341);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(13,0.7723652);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(14,0.2880004);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(15,0.5369307);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(17,0.2556187);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(3,0.4660378);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(4,1.001922);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(5,1.781395);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(6,1.568408);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(7,1.285041);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(8,1.135732);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(9,0.8489562);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(10,0.7240599);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(11,0.6073441);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(12,0.5152626);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(13,0.4460656);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(14,0.2880004);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(15,0.3806036);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(17,0.2556187);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetEntries(175);

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
