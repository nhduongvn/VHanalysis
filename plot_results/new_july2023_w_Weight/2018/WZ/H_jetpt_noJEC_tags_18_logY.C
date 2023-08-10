void H_jetpt_noJEC_tags_18_logY()
{
//=========Macro generated from canvas: H_jetpt_noJEC_tags_18/H_jetpt_noJEC_tags_18
//=========  (Thu Aug 10 10:41:20 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_noJEC_tags_18 = new TCanvas("H_jetpt_noJEC_tags_18", "H_jetpt_noJEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_noJEC_tags_18->SetHighLightColor(2);
   H_jetpt_noJEC_tags_18->Range(-60,-1.46837,340,0.6230846);
   H_jetpt_noJEC_tags_18->SetFillColor(0);
   H_jetpt_noJEC_tags_18->SetBorderMode(0);
   H_jetpt_noJEC_tags_18->SetBorderSize(2);
   H_jetpt_noJEC_tags_18->SetLogy();
   H_jetpt_noJEC_tags_18->SetLeftMargin(0.15);
   H_jetpt_noJEC_tags_18->SetFrameBorderMode(0);
   H_jetpt_noJEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetpt_noJEC_stack_7 = new TH1D("VbbHcc_tags_H_jetpt_noJEC_stack_7","",150,0,300);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(23,0.8933559);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(28,1.368958);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(32,0.4963468);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(34,0.3767055);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(37,0.3816532);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(39,0.8899102);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(44,1.061521);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(59,0.4786962);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(61,0.4259504);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(63,0.1101045);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(68,0.3670258);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(72,0.4963468);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(74,0.8728078);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(75,0.2932993);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(84,0.3789058);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(87,0.2694972);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(88,0.5166625);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(100,0.3805224);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(110,0.3789058);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(123,0.5144501);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(138,0.5144501);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(151,2.967323);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(23,0.6389277);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(28,1.056241);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(32,0.4963468);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(34,0.3767055);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(37,0.3816532);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(39,0.6358248);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(44,0.7571697);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(59,0.4786962);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(61,0.4259504);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(63,0.1101045);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(68,0.3670258);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(72,0.4963468);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(74,0.6200597);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(75,0.2932993);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(84,0.3789058);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(87,0.2694972);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(88,0.5166625);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(100,0.3805224);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(110,0.3789058);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(123,0.5144501);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(138,0.5144501);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(151,1.23401);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetEntries(32);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetFillColor(ci);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetXaxis()->SetTitle("c-jet p_{T} [GeV]");
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetpt_noJEC_tags_18->Modified();
   H_jetpt_noJEC_tags_18->cd();
   H_jetpt_noJEC_tags_18->SetSelected(H_jetpt_noJEC_tags_18);
}
