void H_jetmass_noJEC_both_17()
{
//=========Macro generated from canvas: H_jetmass_noJEC_both_17/H_jetmass_noJEC_both_17
//=========  (Thu Aug  3 12:26:34 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_both_17 = new TCanvas("H_jetmass_noJEC_both_17", "H_jetmass_noJEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_both_17->SetHighLightColor(2);
   H_jetmass_noJEC_both_17->Range(-60,-1.229727,340,11.06754);
   H_jetmass_noJEC_both_17->SetFillColor(0);
   H_jetmass_noJEC_both_17->SetBorderMode(0);
   H_jetmass_noJEC_both_17->SetBorderSize(2);
   H_jetmass_noJEC_both_17->SetLeftMargin(0.15);
   H_jetmass_noJEC_both_17->SetFrameBorderMode(0);
   H_jetmass_noJEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_noJEC_stack_8 = new TH1D("VbbHcc_both_H_jetmass_noJEC_stack_8","",150,0,300);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(3,0.2532256);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(4,3.291933);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(5,9.369348);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(6,7.090317);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(7,7.849994);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(8,6.33064);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(9,3.038707);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(10,2.025805);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(11,1.519354);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(12,1.266128);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(13,1.012902);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(14,0.7596768);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(15,1.012902);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(16,0.7596768);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(17,0.2532256);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(19,0.2532256);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(24,0.2532256);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(26,0.2532256);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(3,0.2532256);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(4,0.9130179);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(5,1.540311);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(6,1.339944);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(7,1.409901);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(8,1.266128);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(9,0.8771992);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(10,0.7162302);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(11,0.6202735);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(12,0.5662297);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(13,0.5064512);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(14,0.4385996);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(15,0.5064512);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(16,0.4385996);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(17,0.2532256);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(19,0.2532256);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(24,0.2532256);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(26,0.2532256);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetEntries(184);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_both_17->Modified();
   H_jetmass_noJEC_both_17->cd();
   H_jetmass_noJEC_both_17->SetSelected(H_jetmass_noJEC_both_17);
}
