void H_dR_both_18_logY()
{
//=========Macro generated from canvas: H_dR_both_18/H_dR_both_18
//=========  (Thu Aug 10 10:43:04 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_18 = new TCanvas("H_dR_both_18", "H_dR_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_18->SetHighLightColor(2);
   H_dR_both_18->Range(-1.2,-0.8929571,6.8,0.8301158);
   H_dR_both_18->SetFillColor(0);
   H_dR_both_18->SetBorderMode(0);
   H_dR_both_18->SetBorderSize(2);
   H_dR_both_18->SetLogy();
   H_dR_both_18->SetLeftMargin(0.15);
   H_dR_both_18->SetFrameBorderMode(0);
   H_dR_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_7 = new TH1D("VbbHcc_both_H_dR_stack_7","",30,0,6);
   VbbHcc_both_H_dR_stack_7->SetBinContent(3,0.753614);
   VbbHcc_both_H_dR_stack_7->SetBinContent(4,2.400267);
   VbbHcc_both_H_dR_stack_7->SetBinContent(5,2.258391);
   VbbHcc_both_H_dR_stack_7->SetBinContent(7,1.027309);
   VbbHcc_both_H_dR_stack_7->SetBinContent(9,0.6194923);
   VbbHcc_both_H_dR_stack_7->SetBinContent(10,0.5144501);
   VbbHcc_both_H_dR_stack_7->SetBinContent(11,1.389715);
   VbbHcc_both_H_dR_stack_7->SetBinContent(12,0.5144501);
   VbbHcc_both_H_dR_stack_7->SetBinContent(13,0.4019721);
   VbbHcc_both_H_dR_stack_7->SetBinContent(14,1.878301);
   VbbHcc_both_H_dR_stack_7->SetBinContent(15,1.514291);
   VbbHcc_both_H_dR_stack_7->SetBinContent(16,0.4786962);
   VbbHcc_both_H_dR_stack_7->SetBinContent(17,0.6750199);
   VbbHcc_both_H_dR_stack_7->SetBinContent(19,0.3805224);
   VbbHcc_both_H_dR_stack_7->SetBinError(3,0.5329115);
   VbbHcc_both_H_dR_stack_7->SetBinError(4,1.078162);
   VbbHcc_both_H_dR_stack_7->SetBinError(5,1.027283);
   VbbHcc_both_H_dR_stack_7->SetBinError(7,0.5998066);
   VbbHcc_both_H_dR_stack_7->SetBinError(9,0.5211516);
   VbbHcc_both_H_dR_stack_7->SetBinError(10,0.5144501);
   VbbHcc_both_H_dR_stack_7->SetBinError(11,0.8094488);
   VbbHcc_both_H_dR_stack_7->SetBinError(12,0.5144501);
   VbbHcc_both_H_dR_stack_7->SetBinError(13,0.4019721);
   VbbHcc_both_H_dR_stack_7->SetBinError(14,1.173197);
   VbbHcc_both_H_dR_stack_7->SetBinError(15,0.7663233);
   VbbHcc_both_H_dR_stack_7->SetBinError(16,0.4786962);
   VbbHcc_both_H_dR_stack_7->SetBinError(17,0.6750199);
   VbbHcc_both_H_dR_stack_7->SetBinError(19,0.3805224);
   VbbHcc_both_H_dR_stack_7->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_stack_7->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->Draw("HIST");
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
