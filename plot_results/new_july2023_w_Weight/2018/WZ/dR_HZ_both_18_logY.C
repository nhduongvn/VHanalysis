void dR_HZ_both_18_logY()
{
//=========Macro generated from canvas: dR_HZ_both_18/dR_HZ_both_18
//=========  (Thu Aug 10 12:21:42 2023) by ROOT version 6.14/09
   TCanvas *dR_HZ_both_18 = new TCanvas("dR_HZ_both_18", "dR_HZ_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_both_18->SetHighLightColor(2);
   dR_HZ_both_18->Range(-1.2,-1.473069,6.8,0.66537);
   dR_HZ_both_18->SetFillColor(0);
   dR_HZ_both_18->SetBorderMode(0);
   dR_HZ_both_18->SetBorderSize(2);
   dR_HZ_both_18->SetLogy();
   dR_HZ_both_18->SetLeftMargin(0.15);
   dR_HZ_both_18->SetFrameBorderMode(0);
   dR_HZ_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_dR_HZ_stack_7 = new TH1D("VbbHcc_both_dR_HZ_stack_7","",60,0,6);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(11,0.4786962);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(13,0.5144501);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(16,0.9777943);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(17,0.8949725);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(18,0.3730917);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(20,0.9022923);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(21,0.4019721);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(22,0.648403);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(24,0.1101045);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(25,1.448037);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(27,1.492716);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(28,0.748679);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(30,0.4786962);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(31,1.273878);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(32,0.8971849);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(33,0.975043);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(34,0.4963468);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(38,0.8863831);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(39,0.2932993);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(52,0.5144501);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(11,0.4786962);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(13,0.5144501);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(16,0.7093764);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(17,0.6398876);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(18,0.3730917);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(20,0.6447096);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(21,0.4019721);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(22,0.4649714);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(24,0.1101045);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(25,0.8686457);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(27,1.107434);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(28,0.529497);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(30,0.4786962);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(31,0.7436571);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(32,0.6416677);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(33,0.6895725);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(34,0.4963468);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(38,0.6272416);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(39,0.2932993);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(52,0.5144501);
   VbbHcc_both_dR_HZ_stack_7->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_dR_HZ_stack_7->SetFillColor(ci);
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_dR_HZ_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dR_HZ_both_18->Modified();
   dR_HZ_both_18->cd();
   dR_HZ_both_18->SetSelected(dR_HZ_both_18);
}
