void H_dR_both_17()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Tue Aug 22 09:22:44 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(-1.2,-0.8927781,6.8,8.035003);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetLeftMargin(0.15);
   H_dR_both_17->SetFrameBorderMode(0);
   H_dR_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_8 = new TH1D("VbbHcc_both_H_dR_stack_8","",30,0,6);
   VbbHcc_both_H_dR_stack_8->SetBinContent(3,4.75624);
   VbbHcc_both_H_dR_stack_8->SetBinContent(4,3.56232);
   VbbHcc_both_H_dR_stack_8->SetBinContent(5,5.44607);
   VbbHcc_both_H_dR_stack_8->SetBinContent(6,2.970247);
   VbbHcc_both_H_dR_stack_8->SetBinContent(7,1.800535);
   VbbHcc_both_H_dR_stack_8->SetBinContent(8,0.4362911);
   VbbHcc_both_H_dR_stack_8->SetBinContent(9,0.2915078);
   VbbHcc_both_H_dR_stack_8->SetBinContent(10,1.075008);
   VbbHcc_both_H_dR_stack_8->SetBinContent(11,0.8969534);
   VbbHcc_both_H_dR_stack_8->SetBinContent(12,2.008751);
   VbbHcc_both_H_dR_stack_8->SetBinContent(13,0.02067347);
   VbbHcc_both_H_dR_stack_8->SetBinContent(14,3.744916);
   VbbHcc_both_H_dR_stack_8->SetBinContent(15,5.314585);
   VbbHcc_both_H_dR_stack_8->SetBinContent(16,6.802119);
   VbbHcc_both_H_dR_stack_8->SetBinContent(17,1.512731);
   VbbHcc_both_H_dR_stack_8->SetBinContent(18,1.006322);
   VbbHcc_both_H_dR_stack_8->SetBinContent(19,0.3720851);
   VbbHcc_both_H_dR_stack_8->SetBinContent(20,0.7135548);
   VbbHcc_both_H_dR_stack_8->SetBinError(3,1.118766);
   VbbHcc_both_H_dR_stack_8->SetBinError(4,0.9198423);
   VbbHcc_both_H_dR_stack_8->SetBinError(5,1.104643);
   VbbHcc_both_H_dR_stack_8->SetBinError(6,0.8440886);
   VbbHcc_both_H_dR_stack_8->SetBinError(7,0.6586002);
   VbbHcc_both_H_dR_stack_8->SetBinError(8,0.3196257);
   VbbHcc_both_H_dR_stack_8->SetBinError(9,0.279488);
   VbbHcc_both_H_dR_stack_8->SetBinError(10,0.5392289);
   VbbHcc_both_H_dR_stack_8->SetBinError(11,0.4499635);
   VbbHcc_both_H_dR_stack_8->SetBinError(12,0.713237);
   VbbHcc_both_H_dR_stack_8->SetBinError(13,0.02067347);
   VbbHcc_both_H_dR_stack_8->SetBinError(14,0.9939691);
   VbbHcc_both_H_dR_stack_8->SetBinError(15,1.149983);
   VbbHcc_both_H_dR_stack_8->SetBinError(16,1.292674);
   VbbHcc_both_H_dR_stack_8->SetBinError(17,0.6246501);
   VbbHcc_both_H_dR_stack_8->SetBinError(18,0.5045074);
   VbbHcc_both_H_dR_stack_8->SetBinError(19,0.2631779);
   VbbHcc_both_H_dR_stack_8->SetBinError(20,0.4128008);
   VbbHcc_both_H_dR_stack_8->SetEntries(184);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_17->Modified();
   H_dR_both_17->cd();
   H_dR_both_17->SetSelected(H_dR_both_17);
}
