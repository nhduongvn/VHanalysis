void H_dR_both_18_logY()
{
//=========Macro generated from canvas: H_dR_both_18/H_dR_both_18
//=========  (Tue Aug 22 09:18:19 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_18 = new TCanvas("H_dR_both_18", "H_dR_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_18->SetHighLightColor(2);
   H_dR_both_18->Range(-1.2,0.127333,6.8,5.120405);
   H_dR_both_18->SetFillColor(0);
   H_dR_both_18->SetBorderMode(0);
   H_dR_both_18->SetBorderSize(2);
   H_dR_both_18->SetLogy();
   H_dR_both_18->SetLeftMargin(0.15);
   H_dR_both_18->SetFrameBorderMode(0);
   H_dR_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,8.465844);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,13638.88);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,11989.37);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,8193.092);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,12889.75);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,7510.551);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,11089.15);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,10172.74);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,12295.68);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,11485.93);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,12190.2);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,13884.38);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,19100.52);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,19846.97);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,22057.14);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,12293.32);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,9333.939);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,6401.423);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,3563.924);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,1191.712);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,1062.568);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,1005.426);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,546.3082);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,105.9928);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,9.378231);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,8.465844);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,1787.037);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,1598.775);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,1173.332);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,2668.073);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,1188.427);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,1685.928);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,1514.209);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,2658.595);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,1565.589);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,1598.438);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,1662.016);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,2062.264);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,2373.213);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,2168.678);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,1712.999);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,1509.957);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,1311.981);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,775.8227);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,169.1893);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,236.0293);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,391.8283);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,395.4824);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,37.26018);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,6.32975);
   VbbHcc_both_H_dR_stack_1->SetEntries(9895);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->Draw("HIST");
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
