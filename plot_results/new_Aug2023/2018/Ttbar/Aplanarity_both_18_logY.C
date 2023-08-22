void Aplanarity_both_18_logY()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Tue Aug 22 09:18:50 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2,-2.060771,1.133333,5.214603);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLogy();
   Aplanarity_both_18->SetLeftMargin(0.15);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_3 = new TH1D("VbbHcc_both_Aplanarity_stack_3","",50,0,1);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(1,16200.05);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(2,5279.408);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(3,2564.992);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(4,1469.484);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(5,897.5387);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(6,595.9044);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(7,399.6393);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(8,272.5855);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(9,184.8136);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(10,132.9606);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(11,88.39441);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(12,62.13282);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(13,42.29757);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(14,26.08443);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(15,18.35542);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(16,11.29098);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(17,7.334017);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(18,4.632851);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(19,2.131534);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(20,0.6872998);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(21,0.2830287);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(22,0.09285314);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(1,37.42931);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(2,20.65169);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(3,15.14475);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(4,11.07812);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(5,9.051221);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(6,7.135935);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(7,5.854191);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(8,5.558855);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(9,4.033497);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(10,3.399209);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(11,2.604968);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(12,2.294233);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(13,1.846562);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(14,1.424418);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(15,1.178028);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(16,0.9051558);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(17,0.7861773);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(18,0.6412772);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(19,0.3880286);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(20,0.2166404);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(21,0.1323774);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(22,0.05948789);
   VbbHcc_both_Aplanarity_stack_3->SetEntries(416844);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Aplanarity_stack_3->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
