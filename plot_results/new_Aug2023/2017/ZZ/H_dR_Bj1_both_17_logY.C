void H_dR_Bj1_both_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_both_17/H_dR_Bj1_both_17
//=========  (Tue Aug 22 09:18:37 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_both_17 = new TCanvas("H_dR_Bj1_both_17", "H_dR_Bj1_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_both_17->SetHighLightColor(2);
   H_dR_Bj1_both_17->Range(-1.2,-1.178857,6.8,1.634489);
   H_dR_Bj1_both_17->SetFillColor(0);
   H_dR_Bj1_both_17->SetBorderMode(0);
   H_dR_Bj1_both_17->SetBorderSize(2);
   H_dR_Bj1_both_17->SetLogy();
   H_dR_Bj1_both_17->SetLeftMargin(0.15);
   H_dR_Bj1_both_17->SetFrameBorderMode(0);
   H_dR_Bj1_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(1,3.291933);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(2,9.622573);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(3,11.9016);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(4,4.811287);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(5,2.785482);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(6,1.772579);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(7,1.519354);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(8,1.519354);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(9,0.5064512);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(10,1.266128);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(11,1.519354);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(12,1.012902);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(13,1.519354);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(14,1.519354);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(15,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(16,1.012902);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(17,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(18,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(19,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(1,0.9130179);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(2,1.560987);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(3,1.736027);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(4,1.103785);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(5,0.8398543);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(6,0.669972);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(7,0.6202735);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(8,0.6202735);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(9,0.3581151);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(10,0.5662297);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(11,0.6202735);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(12,0.5064512);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(13,0.6202735);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(14,0.6202735);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(15,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(16,0.5064512);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(17,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(18,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(19,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetEntries(184);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj1_stack_8->SetFillColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_both_17->Modified();
   H_dR_Bj1_both_17->cd();
   H_dR_Bj1_both_17->SetSelected(H_dR_Bj1_both_17);
}
