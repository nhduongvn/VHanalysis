void H_jetmass_JEC_tags_17()
{
//=========Macro generated from canvas: H_jetmass_JEC_tags_17/H_jetmass_JEC_tags_17
//=========  (Thu Aug 10 12:23:44 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_tags_17 = new TCanvas("H_jetmass_JEC_tags_17", "H_jetmass_JEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_tags_17->SetHighLightColor(2);
   H_jetmass_JEC_tags_17->Range(-60,-1.298769,340,11.68892);
   H_jetmass_JEC_tags_17->SetFillColor(0);
   H_jetmass_JEC_tags_17->SetBorderMode(0);
   H_jetmass_JEC_tags_17->SetBorderSize(2);
   H_jetmass_JEC_tags_17->SetLeftMargin(0.15);
   H_jetmass_JEC_tags_17->SetFrameBorderMode(0);
   H_jetmass_JEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_JEC_stack_8 = new TH1D("VbbHcc_tags_H_jetmass_JEC_stack_8","",150,0,300);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(4,3.582777);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(5,8.054277);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(6,9.895384);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(7,6.838646);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(8,8.30956);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(9,3.21129);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(10,1.917613);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(11,2.564954);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(12,0.8541804);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(13,1.205356);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(14,0.9731926);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(15,0.8781623);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(16,0.5680649);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(17,0.2961846);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(26,0.2309217);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(4,1.008526);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(5,1.520455);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(6,1.701194);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(7,1.399064);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(8,1.613939);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(9,0.9814743);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(10,0.7358291);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(11,0.8243372);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(12,0.5012788);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(13,0.5866858);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(14,0.5429672);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(15,0.5154624);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(16,0.4016873);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(17,0.2961846);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(26,0.2309217);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetEntries(178);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_tags_17->Modified();
   H_jetmass_JEC_tags_17->cd();
   H_jetmass_JEC_tags_17->SetSelected(H_jetmass_JEC_tags_17);
}
