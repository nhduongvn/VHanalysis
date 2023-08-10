void H_jetmass_noJEC_both_17_logY()
{
//=========Macro generated from canvas: H_jetmass_noJEC_both_17/H_jetmass_noJEC_both_17
//=========  (Thu Aug 10 12:22:00 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_both_17 = new TCanvas("H_jetmass_noJEC_both_17", "H_jetmass_noJEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_both_17->SetHighLightColor(2);
   H_jetmass_noJEC_both_17->Range(-60,-1.773763,340,1.607022);
   H_jetmass_noJEC_both_17->SetFillColor(0);
   H_jetmass_noJEC_both_17->SetBorderMode(0);
   H_jetmass_noJEC_both_17->SetBorderSize(2);
   H_jetmass_noJEC_both_17->SetLogy();
   H_jetmass_noJEC_both_17->SetLeftMargin(0.15);
   H_jetmass_noJEC_both_17->SetFrameBorderMode(0);
   H_jetmass_noJEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_noJEC_stack_8 = new TH1D("VbbHcc_both_H_jetmass_noJEC_stack_8","",150,0,300);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(3,0.2924984);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(4,3.385986);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(5,9.803801);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(6,8.091933);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(7,8.974301);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(8,7.397435);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(9,3.379385);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(10,2.371863);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(11,1.476116);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(12,1.268894);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(13,0.9656165);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(14,0.8874041);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(15,1.20162);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(16,0.7854925);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(17,0.2961846);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(19,0.262766);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(24,0.07334074);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(26,0.2309217);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(3,0.2924984);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(4,0.9802687);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(5,1.670937);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(6,1.557427);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(7,1.644554);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(8,1.494151);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(9,0.9901485);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(10,0.8422764);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(11,0.617323);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(12,0.5755146);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(13,0.5317349);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(14,0.5306357);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(15,0.608286);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(16,0.4567576);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(17,0.2961846);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(19,0.262766);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(24,0.07334074);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(26,0.2309217);
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
