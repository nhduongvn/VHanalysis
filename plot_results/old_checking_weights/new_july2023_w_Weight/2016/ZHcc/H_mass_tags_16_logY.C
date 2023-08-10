void H_mass_tags_16_logY()
{
//=========Macro generated from canvas: H_mass_tags_16/H_mass_tags_16
//=========  (Thu Aug 10 10:40:47 2023) by ROOT version 6.14/09
   TCanvas *H_mass_tags_16 = new TCanvas("H_mass_tags_16", "H_mass_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_tags_16->SetHighLightColor(2);
   H_mass_tags_16->Range(-80,-2.988391,453.3333,-1.615605);
   H_mass_tags_16->SetFillColor(0);
   H_mass_tags_16->SetBorderMode(0);
   H_mass_tags_16->SetBorderSize(2);
   H_mass_tags_16->SetLogy();
   H_mass_tags_16->SetLeftMargin(0.15);
   H_mass_tags_16->SetFrameBorderMode(0);
   H_mass_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_mass_stack_11 = new TH1D("VbbHcc_tags_H_mass_stack_11","",40,0,400);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(8,0.002872786);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(11,0.005401085);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(12,0.009098332);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(13,0.002821306);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(14,0.005995116);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(15,0.002928512);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(16,0.002869221);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(17,0.009323252);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(18,0.002933425);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(23,0.002817849);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(26,0.003126194);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(27,0.003218024);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(32,0.002965507);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(33,0.008846202);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(38,0.002862625);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(41,0.03661673);
   VbbHcc_tags_H_mass_stack_11->SetBinError(8,0.002872786);
   VbbHcc_tags_H_mass_stack_11->SetBinError(11,0.003830529);
   VbbHcc_tags_H_mass_stack_11->SetBinError(12,0.005257701);
   VbbHcc_tags_H_mass_stack_11->SetBinError(13,0.002821306);
   VbbHcc_tags_H_mass_stack_11->SetBinError(14,0.004243056);
   VbbHcc_tags_H_mass_stack_11->SetBinError(15,0.002928512);
   VbbHcc_tags_H_mass_stack_11->SetBinError(16,0.002869221);
   VbbHcc_tags_H_mass_stack_11->SetBinError(17,0.005390766);
   VbbHcc_tags_H_mass_stack_11->SetBinError(18,0.002933425);
   VbbHcc_tags_H_mass_stack_11->SetBinError(23,0.002817849);
   VbbHcc_tags_H_mass_stack_11->SetBinError(26,0.003126194);
   VbbHcc_tags_H_mass_stack_11->SetBinError(27,0.003218024);
   VbbHcc_tags_H_mass_stack_11->SetBinError(32,0.002965507);
   VbbHcc_tags_H_mass_stack_11->SetBinError(33,0.00510783);
   VbbHcc_tags_H_mass_stack_11->SetBinError(38,0.002862625);
   VbbHcc_tags_H_mass_stack_11->SetBinError(41,0.01018395);
   VbbHcc_tags_H_mass_stack_11->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_mass_stack_11->SetFillColor(ci);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_tags_16->Modified();
   H_mass_tags_16->cd();
   H_mass_tags_16->SetSelected(H_mass_tags_16);
}
