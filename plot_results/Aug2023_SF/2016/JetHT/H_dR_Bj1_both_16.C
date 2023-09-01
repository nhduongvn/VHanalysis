#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_both_16()
{
//=========Macro generated from canvas: H_dR_Bj1_both_16/H_dR_Bj1_both_16
//=========  (Fri Sep  1 13:23:44 2023) by ROOT version 6.28/04
   TCanvas *H_dR_Bj1_both_16 = new TCanvas("H_dR_Bj1_both_16", "H_dR_Bj1_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_both_16->SetHighLightColor(2);
   H_dR_Bj1_both_16->Range(-1.2,-2018.756,6.8,18168.81);
   H_dR_Bj1_both_16->SetFillColor(0);
   H_dR_Bj1_both_16->SetBorderMode(0);
   H_dR_Bj1_both_16->SetBorderSize(2);
   H_dR_Bj1_both_16->SetLeftMargin(0.15);
   H_dR_Bj1_both_16->SetFrameBorderMode(0);
   H_dR_Bj1_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_Bj1__888 = new TH1D("VbbHcc_both_H_dR_Bj1__888","",30,0,6);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(1,6720);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(2,15381);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(3,13883);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(4,10735);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(5,8519);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(6,6875);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(7,5547);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(8,4660);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(9,3915);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(10,3494);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(11,3110);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(12,2841);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(13,2659);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(14,2617);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(15,2328);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(16,2141);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(17,1253);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(18,889);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(19,604);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(20,430);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(21,328);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(22,198);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(23,147);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(24,94);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(25,50);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(26,34);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(27,15);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(28,10);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(29,2);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(30,4);
   VbbHcc_both_H_dR_Bj1__888->SetBinContent(31,8);
   VbbHcc_both_H_dR_Bj1__888->SetEntries(99491);
   VbbHcc_both_H_dR_Bj1__888->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   VbbHcc_both_H_dR_Bj1__888->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_Bj1__888->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__888->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1__888->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__888->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__888->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__888->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__888->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1__888->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__888->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_both_16->Modified();
   H_dR_Bj1_both_16->cd();
   H_dR_Bj1_both_16->SetSelected(H_dR_Bj1_both_16);
}
