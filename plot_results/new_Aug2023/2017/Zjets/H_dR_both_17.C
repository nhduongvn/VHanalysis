void H_dR_both_17()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Tue Aug 22 09:22:44 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(-1.2,-29.19524,6.8,262.7572);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetLeftMargin(0.15);
   H_dR_both_17->SetFrameBorderMode(0);
   H_dR_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_4 = new TH1D("VbbHcc_both_H_dR_stack_4","",30,0,6);
   VbbHcc_both_H_dR_stack_4->SetBinContent(3,115.4178);
   VbbHcc_both_H_dR_stack_4->SetBinContent(4,161.3625);
   VbbHcc_both_H_dR_stack_4->SetBinContent(5,142.3744);
   VbbHcc_both_H_dR_stack_4->SetBinContent(6,103.8676);
   VbbHcc_both_H_dR_stack_4->SetBinContent(7,97.75139);
   VbbHcc_both_H_dR_stack_4->SetBinContent(8,95.46326);
   VbbHcc_both_H_dR_stack_4->SetBinContent(9,114.2327);
   VbbHcc_both_H_dR_stack_4->SetBinContent(10,106.2831);
   VbbHcc_both_H_dR_stack_4->SetBinContent(11,132.372);
   VbbHcc_both_H_dR_stack_4->SetBinContent(12,160.3124);
   VbbHcc_both_H_dR_stack_4->SetBinContent(13,165.8054);
   VbbHcc_both_H_dR_stack_4->SetBinContent(14,195.7208);
   VbbHcc_both_H_dR_stack_4->SetBinContent(15,211.0821);
   VbbHcc_both_H_dR_stack_4->SetBinContent(16,222.4399);
   VbbHcc_both_H_dR_stack_4->SetBinContent(17,114.5625);
   VbbHcc_both_H_dR_stack_4->SetBinContent(18,80.63892);
   VbbHcc_both_H_dR_stack_4->SetBinContent(19,42.41022);
   VbbHcc_both_H_dR_stack_4->SetBinContent(20,25.60008);
   VbbHcc_both_H_dR_stack_4->SetBinContent(21,17.29998);
   VbbHcc_both_H_dR_stack_4->SetBinContent(22,10.60624);
   VbbHcc_both_H_dR_stack_4->SetBinContent(23,5.679758);
   VbbHcc_both_H_dR_stack_4->SetBinContent(24,2.396172);
   VbbHcc_both_H_dR_stack_4->SetBinContent(25,2.327771);
   VbbHcc_both_H_dR_stack_4->SetBinContent(26,0.6810478);
   VbbHcc_both_H_dR_stack_4->SetBinContent(27,0.1380418);
   VbbHcc_both_H_dR_stack_4->SetBinError(3,6.327704);
   VbbHcc_both_H_dR_stack_4->SetBinError(4,7.083825);
   VbbHcc_both_H_dR_stack_4->SetBinError(5,7.748503);
   VbbHcc_both_H_dR_stack_4->SetBinError(6,4.737121);
   VbbHcc_both_H_dR_stack_4->SetBinError(7,5.959985);
   VbbHcc_both_H_dR_stack_4->SetBinError(8,4.092252);
   VbbHcc_both_H_dR_stack_4->SetBinError(9,8.506762);
   VbbHcc_both_H_dR_stack_4->SetBinError(10,5.497213);
   VbbHcc_both_H_dR_stack_4->SetBinError(11,7.468956);
   VbbHcc_both_H_dR_stack_4->SetBinError(12,9.197273);
   VbbHcc_both_H_dR_stack_4->SetBinError(13,7.157055);
   VbbHcc_both_H_dR_stack_4->SetBinError(14,9.013431);
   VbbHcc_both_H_dR_stack_4->SetBinError(15,7.972977);
   VbbHcc_both_H_dR_stack_4->SetBinError(16,8.363877);
   VbbHcc_both_H_dR_stack_4->SetBinError(17,5.488971);
   VbbHcc_both_H_dR_stack_4->SetBinError(18,6.905879);
   VbbHcc_both_H_dR_stack_4->SetBinError(19,3.710187);
   VbbHcc_both_H_dR_stack_4->SetBinError(20,1.992514);
   VbbHcc_both_H_dR_stack_4->SetBinError(21,1.735673);
   VbbHcc_both_H_dR_stack_4->SetBinError(22,1.40626);
   VbbHcc_both_H_dR_stack_4->SetBinError(23,1.056254);
   VbbHcc_both_H_dR_stack_4->SetBinError(24,0.622085);
   VbbHcc_both_H_dR_stack_4->SetBinError(25,0.7119048);
   VbbHcc_both_H_dR_stack_4->SetBinError(26,0.4099022);
   VbbHcc_both_H_dR_stack_4->SetBinError(27,0.0998183);
   VbbHcc_both_H_dR_stack_4->SetEntries(18334);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_stack_4->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_17->Modified();
   H_dR_both_17->cd();
   H_dR_both_17->SetSelected(H_dR_both_17);
}
