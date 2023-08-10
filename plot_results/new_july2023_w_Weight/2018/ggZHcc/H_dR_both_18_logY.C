void H_dR_both_18_logY()
{
//=========Macro generated from canvas: H_dR_both_18/H_dR_both_18
//=========  (Thu Aug 10 10:43:04 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_18 = new TCanvas("H_dR_both_18", "H_dR_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_18->SetHighLightColor(2);
   H_dR_both_18->Range(-1.2,-4.456904,6.8,-1.292332);
   H_dR_both_18->SetFillColor(0);
   H_dR_both_18->SetBorderMode(0);
   H_dR_both_18->SetBorderSize(2);
   H_dR_both_18->SetLogy();
   H_dR_both_18->SetLeftMargin(0.15);
   H_dR_both_18->SetFrameBorderMode(0);
   H_dR_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_12 = new TH1D("VbbHcc_both_H_dR_stack_12","",30,0,6);
   VbbHcc_both_H_dR_stack_12->SetBinContent(3,0.003950752);
   VbbHcc_both_H_dR_stack_12->SetBinContent(4,0.007509086);
   VbbHcc_both_H_dR_stack_12->SetBinContent(5,0.01026815);
   VbbHcc_both_H_dR_stack_12->SetBinContent(6,0.01299157);
   VbbHcc_both_H_dR_stack_12->SetBinContent(7,0.01046182);
   VbbHcc_both_H_dR_stack_12->SetBinContent(8,0.005432679);
   VbbHcc_both_H_dR_stack_12->SetBinContent(9,0.01060813);
   VbbHcc_both_H_dR_stack_12->SetBinContent(10,0.005780339);
   VbbHcc_both_H_dR_stack_12->SetBinContent(11,0.007750518);
   VbbHcc_both_H_dR_stack_12->SetBinContent(12,0.005091946);
   VbbHcc_both_H_dR_stack_12->SetBinContent(13,0.007317777);
   VbbHcc_both_H_dR_stack_12->SetBinContent(14,0.004217009);
   VbbHcc_both_H_dR_stack_12->SetBinContent(15,0.005408253);
   VbbHcc_both_H_dR_stack_12->SetBinContent(16,0.005839202);
   VbbHcc_both_H_dR_stack_12->SetBinContent(17,0.002614873);
   VbbHcc_both_H_dR_stack_12->SetBinContent(18,0.001948279);
   VbbHcc_both_H_dR_stack_12->SetBinContent(19,0.00103893);
   VbbHcc_both_H_dR_stack_12->SetBinContent(20,0.001434769);
   VbbHcc_both_H_dR_stack_12->SetBinContent(21,0.0003895316);
   VbbHcc_both_H_dR_stack_12->SetBinContent(22,0.0006438532);
   VbbHcc_both_H_dR_stack_12->SetBinContent(23,0.0001447381);
   VbbHcc_both_H_dR_stack_12->SetBinError(3,0.001191736);
   VbbHcc_both_H_dR_stack_12->SetBinError(4,0.001649047);
   VbbHcc_both_H_dR_stack_12->SetBinError(5,0.001899612);
   VbbHcc_both_H_dR_stack_12->SetBinError(6,0.002180377);
   VbbHcc_both_H_dR_stack_12->SetBinError(7,0.001939992);
   VbbHcc_both_H_dR_stack_12->SetBinError(8,0.001429563);
   VbbHcc_both_H_dR_stack_12->SetBinError(9,0.001964521);
   VbbHcc_both_H_dR_stack_12->SetBinError(10,0.001371189);
   VbbHcc_both_H_dR_stack_12->SetBinError(11,0.001642962);
   VbbHcc_both_H_dR_stack_12->SetBinError(12,0.001259618);
   VbbHcc_both_H_dR_stack_12->SetBinError(13,0.001631395);
   VbbHcc_both_H_dR_stack_12->SetBinError(14,0.001180229);
   VbbHcc_both_H_dR_stack_12->SetBinError(15,0.001358622);
   VbbHcc_both_H_dR_stack_12->SetBinError(16,0.001364598);
   VbbHcc_both_H_dR_stack_12->SetBinError(17,0.0009679032);
   VbbHcc_both_H_dR_stack_12->SetBinError(18,0.000805975);
   VbbHcc_both_H_dR_stack_12->SetBinError(19,0.0006107792);
   VbbHcc_both_H_dR_stack_12->SetBinError(20,0.0007291297);
   VbbHcc_both_H_dR_stack_12->SetBinError(21,0.0003895316);
   VbbHcc_both_H_dR_stack_12->SetBinError(22,0.000455273);
   VbbHcc_both_H_dR_stack_12->SetBinError(23,0.0001447381);
   VbbHcc_both_H_dR_stack_12->SetEntries(330);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_stack_12->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_18->Modified();
   H_dR_both_18->cd();
   H_dR_both_18->SetSelected(H_dR_both_18);
}
