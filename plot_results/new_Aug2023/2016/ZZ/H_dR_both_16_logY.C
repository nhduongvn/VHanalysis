void H_dR_both_16_logY()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Tue Aug 22 09:18:18 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.2,-1.219262,6.8,1.171997);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLogy();
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_8 = new TH1D("VbbHcc_both_H_dR_stack_8","",30,0,6);
   VbbHcc_both_H_dR_stack_8->SetBinContent(3,1.689837);
   VbbHcc_both_H_dR_stack_8->SetBinContent(4,3.550909);
   VbbHcc_both_H_dR_stack_8->SetBinContent(5,3.904395);
   VbbHcc_both_H_dR_stack_8->SetBinContent(6,2.639332);
   VbbHcc_both_H_dR_stack_8->SetBinContent(7,1.404753);
   VbbHcc_both_H_dR_stack_8->SetBinContent(8,0.9359275);
   VbbHcc_both_H_dR_stack_8->SetBinContent(9,0.7120157);
   VbbHcc_both_H_dR_stack_8->SetBinContent(10,1.343537);
   VbbHcc_both_H_dR_stack_8->SetBinContent(11,1.336779);
   VbbHcc_both_H_dR_stack_8->SetBinContent(12,1.943685);
   VbbHcc_both_H_dR_stack_8->SetBinContent(13,0.8306547);
   VbbHcc_both_H_dR_stack_8->SetBinContent(14,2.099811);
   VbbHcc_both_H_dR_stack_8->SetBinContent(15,4.521913);
   VbbHcc_both_H_dR_stack_8->SetBinContent(16,2.525404);
   VbbHcc_both_H_dR_stack_8->SetBinContent(17,1.094208);
   VbbHcc_both_H_dR_stack_8->SetBinContent(18,0.8812702);
   VbbHcc_both_H_dR_stack_8->SetBinContent(19,0.6275142);
   VbbHcc_both_H_dR_stack_8->SetBinContent(20,0.2093602);
   VbbHcc_both_H_dR_stack_8->SetBinError(3,0.5988263);
   VbbHcc_both_H_dR_stack_8->SetBinError(4,0.8687827);
   VbbHcc_both_H_dR_stack_8->SetBinError(5,0.8985472);
   VbbHcc_both_H_dR_stack_8->SetBinError(6,0.7377469);
   VbbHcc_both_H_dR_stack_8->SetBinError(7,0.5334213);
   VbbHcc_both_H_dR_stack_8->SetBinError(8,0.4714634);
   VbbHcc_both_H_dR_stack_8->SetBinError(9,0.3649017);
   VbbHcc_both_H_dR_stack_8->SetBinError(10,0.5118687);
   VbbHcc_both_H_dR_stack_8->SetBinError(11,0.5517233);
   VbbHcc_both_H_dR_stack_8->SetBinError(12,0.6506214);
   VbbHcc_both_H_dR_stack_8->SetBinError(13,0.4177057);
   VbbHcc_both_H_dR_stack_8->SetBinError(14,0.653435);
   VbbHcc_both_H_dR_stack_8->SetBinError(15,0.9734563);
   VbbHcc_both_H_dR_stack_8->SetBinError(16,0.7214147);
   VbbHcc_both_H_dR_stack_8->SetBinError(17,0.4569468);
   VbbHcc_both_H_dR_stack_8->SetBinError(18,0.4411938);
   VbbHcc_both_H_dR_stack_8->SetBinError(19,0.3634065);
   VbbHcc_both_H_dR_stack_8->SetBinError(20,0.2093602);
   VbbHcc_both_H_dR_stack_8->SetEntries(158);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_16->Modified();
   H_dR_both_16->cd();
   H_dR_both_16->SetSelected(H_dR_both_16);
}
