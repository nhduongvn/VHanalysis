void H_dR_Bj1_tags_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_17/H_dR_Bj1_tags_17
//=========  (Thu Aug 10 12:31:25 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_tags_17 = new TCanvas("H_dR_Bj1_tags_17", "H_dR_Bj1_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_tags_17->SetHighLightColor(2);
   H_dR_Bj1_tags_17->Range(-1.2,-3.325141,6.8,-1.096768);
   H_dR_Bj1_tags_17->SetFillColor(0);
   H_dR_Bj1_tags_17->SetBorderMode(0);
   H_dR_Bj1_tags_17->SetBorderSize(2);
   H_dR_Bj1_tags_17->SetLogy();
   H_dR_Bj1_tags_17->SetLeftMargin(0.15);
   H_dR_Bj1_tags_17->SetFrameBorderMode(0);
   H_dR_Bj1_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(1,0.007901256);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(2,0.02370377);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(3,0.02528402);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(4,0.01896301);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(5,0.01264201);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(6,0.009481507);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(7,0.007901256);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(8,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(9,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(10,0.004740753);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(11,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(12,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(13,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(14,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(18,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(19,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(20,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(23,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(25,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(1,0.003533549);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(2,0.006120286);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(3,0.006321005);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(4,0.005474151);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(5,0.004469625);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(6,0.003870809);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(7,0.003533549);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(8,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(9,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(10,0.002737075);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(11,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(12,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(13,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(14,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(18,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(19,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(20,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(23,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(25,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetEntries(87);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj1_stack_11->SetFillColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_tags_17->Modified();
   H_dR_Bj1_tags_17->cd();
   H_dR_Bj1_tags_17->SetSelected(H_dR_Bj1_tags_17);
}
