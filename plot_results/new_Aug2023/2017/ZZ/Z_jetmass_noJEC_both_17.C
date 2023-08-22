void Z_jetmass_noJEC_both_17()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_both_17/Z_jetmass_noJEC_both_17
//=========  (Tue Aug 22 09:23:45 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_both_17 = new TCanvas("Z_jetmass_noJEC_both_17", "Z_jetmass_noJEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_both_17->SetHighLightColor(2);
   Z_jetmass_noJEC_both_17->Range(-60,-1.027566,340,9.248092);
   Z_jetmass_noJEC_both_17->SetFillColor(0);
   Z_jetmass_noJEC_both_17->SetBorderMode(0);
   Z_jetmass_noJEC_both_17->SetBorderSize(2);
   Z_jetmass_noJEC_both_17->SetLeftMargin(0.15);
   Z_jetmass_noJEC_both_17->SetFrameBorderMode(0);
   Z_jetmass_noJEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_noJEC_stack_8 = new TH1D("VbbHcc_both_Z_jetmass_noJEC_stack_8","",150,0,300);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(3,0.2792177);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(4,1.950463);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(5,4.973769);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(6,6.805003);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(7,7.829073);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(8,5.848548);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(9,3.759308);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(10,4.238034);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(11,1.425712);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(12,0.7718864);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(13,1.215361);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(14,0.6018992);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(15,0.4891015);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(16,0.2087028);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(17,0.4839269);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(18,0.2688617);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(19,0.3620828);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(22,0.4636356);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(24,0.2016896);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(29,0.2089677);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(43,0.3456672);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(3,0.2792177);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(4,0.7002977);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(5,1.093716);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(6,1.257773);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(7,1.371251);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(8,1.218304);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(9,0.9586329);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(10,1.038946);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(11,0.6007293);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(12,0.3959375);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(13,0.5485817);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(14,0.4256182);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(15,0.3464037);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(16,0.2087028);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(17,0.3520806);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(18,0.2688617);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(19,0.3620828);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(22,0.3296176);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(24,0.2016896);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(29,0.2089677);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(43,0.3456672);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetEntries(184);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_both_17->Modified();
   Z_jetmass_noJEC_both_17->cd();
   Z_jetmass_noJEC_both_17->SetSelected(Z_jetmass_noJEC_both_17);
}
