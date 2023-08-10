void H_jetmass_noJEC_both_18_logY()
{
//=========Macro generated from canvas: H_jetmass_noJEC_both_18/H_jetmass_noJEC_both_18
//=========  (Thu Aug 10 10:43:35 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_both_18 = new TCanvas("H_jetmass_noJEC_both_18", "H_jetmass_noJEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_both_18->SetHighLightColor(2);
   H_jetmass_noJEC_both_18->Range(-60,-1.13241,340,1.700124);
   H_jetmass_noJEC_both_18->SetFillColor(0);
   H_jetmass_noJEC_both_18->SetBorderMode(0);
   H_jetmass_noJEC_both_18->SetBorderSize(2);
   H_jetmass_noJEC_both_18->SetLogy();
   H_jetmass_noJEC_both_18->SetLeftMargin(0.15);
   H_jetmass_noJEC_both_18->SetFrameBorderMode(0);
   H_jetmass_noJEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_noJEC_stack_8 = new TH1D("VbbHcc_both_H_jetmass_noJEC_stack_8","",150,0,300);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(3,0.3487978);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(4,7.627048);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(5,13.78229);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(6,13.7169);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(7,11.31974);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(8,8.442755);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(9,3.673968);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(10,4.461784);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(11,2.492626);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(12,2.499909);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(13,1.300644);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(14,0.7080265);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(15,0.7873489);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(16,0.3021962);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(17,0.5053327);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(18,0.2830566);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(19,0.3068351);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(24,0.3915493);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(28,0.2830566);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(3,0.3487978);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(4,1.60603);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(5,2.204063);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(6,2.145777);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(7,1.881204);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(8,1.685973);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(9,1.093212);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(10,1.197034);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(11,0.8493938);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(12,0.8923268);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(13,0.6570501);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(14,0.5059849);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(15,0.4624457);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(16,0.3021962);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(17,0.3585909);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(18,0.2830566);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(19,0.3068351);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(24,0.3915493);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(28,0.2830566);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetEntries(232);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetFillColor(ci);
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_both_18->Modified();
   H_jetmass_noJEC_both_18->cd();
   H_jetmass_noJEC_both_18->SetSelected(H_jetmass_noJEC_both_18);
}
