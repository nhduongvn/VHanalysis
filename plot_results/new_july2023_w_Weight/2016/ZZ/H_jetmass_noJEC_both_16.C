void H_jetmass_noJEC_both_16()
{
//=========Macro generated from canvas: H_jetmass_noJEC_both_16/H_jetmass_noJEC_both_16
//=========  (Thu Aug 10 12:25:13 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_both_16 = new TCanvas("H_jetmass_noJEC_both_16", "H_jetmass_noJEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_both_16->SetHighLightColor(2);
   H_jetmass_noJEC_both_16->Range(-60,-1.277987,340,11.50188);
   H_jetmass_noJEC_both_16->SetFillColor(0);
   H_jetmass_noJEC_both_16->SetBorderMode(0);
   H_jetmass_noJEC_both_16->SetBorderSize(2);
   H_jetmass_noJEC_both_16->SetLeftMargin(0.15);
   H_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   H_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_noJEC_stack_8 = new TH1D("VbbHcc_both_H_jetmass_noJEC_stack_8","",150,0,300);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(2,0.2916673);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(3,0.5153584);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(4,7.374733);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(5,7.391357);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(6,9.737045);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(7,8.061932);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(8,3.010537);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(9,1.878007);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(10,3.213847);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(11,0.7497466);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(12,0.9035939);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(13,0.2779336);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(15,0.7810932);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(19,0.5476285);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(20,0.2853281);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(21,0.5773924);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(52,0.2586989);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(2,0.2916673);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(3,0.3648592);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(4,1.42146);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(5,1.400585);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(6,1.605167);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(7,1.454547);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(8,0.877438);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(9,0.6926781);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(10,0.9288114);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(11,0.4353861);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(12,0.4759696);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(13,0.2779336);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(15,0.4509985);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(19,0.3875098);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(20,0.2853281);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(21,0.4082939);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(52,0.2586989);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetEntries(175);

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
