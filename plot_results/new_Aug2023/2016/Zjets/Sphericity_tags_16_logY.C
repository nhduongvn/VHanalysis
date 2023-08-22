void Sphericity_tags_16_logY()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Tue Aug 22 09:16:27 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-2.129828,1.133333,3.567347);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLogy();
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_4 = new TH1D("VbbHcc_tags_Sphericity_stack_4","",25,0,1);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(1,524.9046);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(2,423.1145);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(3,249.2103);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(4,160.8882);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(5,74.00674);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(6,42.68002);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(7,20.00301);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(8,12.69132);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(9,9.53061);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(10,8.44399);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(11,3.767873);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(12,3.477582);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(13,1.639736);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(14,1.909046);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(15,2.09214);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(16,1.655459);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(17,1.660182);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(18,0.5165645);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(19,0.2733204);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(20,0.05507055);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(21,0.05950899);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(1,13.69451);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(2,13.03043);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(3,10.54982);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(4,9.025594);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(5,3.658653);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(6,3.497479);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(7,1.60176);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(8,1.163432);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(9,0.9842279);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(10,1.840689);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(11,0.5842519);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(12,0.7435719);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(13,0.3072253);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(14,0.4505854);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(15,0.4868677);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(16,0.399177);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(17,0.3953308);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(18,0.1742736);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(19,0.1230852);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(20,0.05507055);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(21,0.05950899);
   VbbHcc_tags_Sphericity_stack_4->SetEntries(14509);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Sphericity_stack_4->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}
