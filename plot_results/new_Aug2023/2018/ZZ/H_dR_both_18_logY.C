void H_dR_both_18_logY()
{
//=========Macro generated from canvas: H_dR_both_18/H_dR_both_18
//=========  (Tue Aug 22 09:18:19 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_18 = new TCanvas("H_dR_both_18", "H_dR_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_18->SetHighLightColor(2);
   H_dR_both_18->Range(-1.2,-1.126797,6.8,1.484058);
   H_dR_both_18->SetFillColor(0);
   H_dR_both_18->SetBorderMode(0);
   H_dR_both_18->SetBorderSize(2);
   H_dR_both_18->SetLogy();
   H_dR_both_18->SetLeftMargin(0.15);
   H_dR_both_18->SetFrameBorderMode(0);
   H_dR_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_8 = new TH1D("VbbHcc_both_H_dR_stack_8","",30,0,6);
   VbbHcc_both_H_dR_stack_8->SetBinContent(3,6.934605);
   VbbHcc_both_H_dR_stack_8->SetBinContent(4,8.708645);
   VbbHcc_both_H_dR_stack_8->SetBinContent(5,8.819095);
   VbbHcc_both_H_dR_stack_8->SetBinContent(6,2.581211);
   VbbHcc_both_H_dR_stack_8->SetBinContent(7,1.393784);
   VbbHcc_both_H_dR_stack_8->SetBinContent(8,2.397003);
   VbbHcc_both_H_dR_stack_8->SetBinContent(9,1.74364);
   VbbHcc_both_H_dR_stack_8->SetBinContent(10,2.688005);
   VbbHcc_both_H_dR_stack_8->SetBinContent(11,3.886675);
   VbbHcc_both_H_dR_stack_8->SetBinContent(12,4.046181);
   VbbHcc_both_H_dR_stack_8->SetBinContent(13,2.933221);
   VbbHcc_both_H_dR_stack_8->SetBinContent(14,3.644379);
   VbbHcc_both_H_dR_stack_8->SetBinContent(15,6.67778);
   VbbHcc_both_H_dR_stack_8->SetBinContent(16,6.493317);
   VbbHcc_both_H_dR_stack_8->SetBinContent(17,2.48154);
   VbbHcc_both_H_dR_stack_8->SetBinContent(18,2.188322);
   VbbHcc_both_H_dR_stack_8->SetBinContent(19,0.6603673);
   VbbHcc_both_H_dR_stack_8->SetBinContent(23,0.27247);
   VbbHcc_both_H_dR_stack_8->SetBinError(3,1.429929);
   VbbHcc_both_H_dR_stack_8->SetBinError(4,1.630449);
   VbbHcc_both_H_dR_stack_8->SetBinError(5,1.696662);
   VbbHcc_both_H_dR_stack_8->SetBinError(6,0.868695);
   VbbHcc_both_H_dR_stack_8->SetBinError(7,0.6628502);
   VbbHcc_both_H_dR_stack_8->SetBinError(8,0.8389374);
   VbbHcc_both_H_dR_stack_8->SetBinError(9,0.7202614);
   VbbHcc_both_H_dR_stack_8->SetBinError(10,0.8805334);
   VbbHcc_both_H_dR_stack_8->SetBinError(11,1.186242);
   VbbHcc_both_H_dR_stack_8->SetBinError(12,1.169411);
   VbbHcc_both_H_dR_stack_8->SetBinError(13,0.9003025);
   VbbHcc_both_H_dR_stack_8->SetBinError(14,1.110785);
   VbbHcc_both_H_dR_stack_8->SetBinError(15,1.440081);
   VbbHcc_both_H_dR_stack_8->SetBinError(16,1.428328);
   VbbHcc_both_H_dR_stack_8->SetBinError(17,0.8403901);
   VbbHcc_both_H_dR_stack_8->SetBinError(18,0.838299);
   VbbHcc_both_H_dR_stack_8->SetBinError(19,0.3879085);
   VbbHcc_both_H_dR_stack_8->SetBinError(23,0.27247);
   VbbHcc_both_H_dR_stack_8->SetEntries(232);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_stack_8->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->Draw("HIST");
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
