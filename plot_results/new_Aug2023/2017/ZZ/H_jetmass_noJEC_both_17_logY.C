void H_jetmass_noJEC_both_17_logY()
{
//=========Macro generated from canvas: H_jetmass_noJEC_both_17/H_jetmass_noJEC_both_17
//=========  (Tue Aug 22 09:18:59 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_both_17 = new TCanvas("H_jetmass_noJEC_both_17", "H_jetmass_noJEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_both_17->SetHighLightColor(2);
   H_jetmass_noJEC_both_17->Range(-60,-1.786325,340,1.520112);
   H_jetmass_noJEC_both_17->SetFillColor(0);
   H_jetmass_noJEC_both_17->SetBorderMode(0);
   H_jetmass_noJEC_both_17->SetBorderSize(2);
   H_jetmass_noJEC_both_17->SetLogy();
   H_jetmass_noJEC_both_17->SetLeftMargin(0.15);
   H_jetmass_noJEC_both_17->SetFrameBorderMode(0);
   H_jetmass_noJEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_noJEC_stack_8 = new TH1D("VbbHcc_both_H_jetmass_noJEC_stack_8","",150,0,300);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(3,0.2094288);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(4,2.776532);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(5,8.164311);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(6,6.636834);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(7,7.350446);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(8,6.14789);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(9,2.796096);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(10,2.078942);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(11,1.284209);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(12,1.073991);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(13,0.8189271);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(14,0.8177383);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(15,1.07284);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(16,0.7215618);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(17,0.2828563);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(19,0.2107384);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(24,0.07004041);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(26,0.2175282);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(3,0.2094288);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(4,0.8041414);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(5,1.399767);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(6,1.28175);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(7,1.35423);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(8,1.243183);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(9,0.8191686);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(10,0.7402266);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(11,0.5370018);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(12,0.485421);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(13,0.4516309);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(14,0.4904431);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(15,0.5485728);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(16,0.4188737);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(17,0.2828563);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(19,0.2107384);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(24,0.07004041);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(26,0.2175282);
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
