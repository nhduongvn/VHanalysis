void H_dR_both_16()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Tue Aug 22 09:22:43 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.2,-2.271848,6.8,20.44663);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_5 = new TH1D("VbbHcc_both_H_dR_stack_5","",30,0,6);
   VbbHcc_both_H_dR_stack_5->SetBinContent(3,7.374693);
   VbbHcc_both_H_dR_stack_5->SetBinContent(4,8.273672);
   VbbHcc_both_H_dR_stack_5->SetBinContent(5,12.05122);
   VbbHcc_both_H_dR_stack_5->SetBinContent(6,4.856293);
   VbbHcc_both_H_dR_stack_5->SetBinContent(7,7.408298);
   VbbHcc_both_H_dR_stack_5->SetBinContent(8,5.19733);
   VbbHcc_both_H_dR_stack_5->SetBinContent(9,7.84279);
   VbbHcc_both_H_dR_stack_5->SetBinContent(10,5.604373);
   VbbHcc_both_H_dR_stack_5->SetBinContent(11,10.01803);
   VbbHcc_both_H_dR_stack_5->SetBinContent(12,9.193823);
   VbbHcc_both_H_dR_stack_5->SetBinContent(13,11.8672);
   VbbHcc_both_H_dR_stack_5->SetBinContent(14,17.30932);
   VbbHcc_both_H_dR_stack_5->SetBinContent(15,16.87807);
   VbbHcc_both_H_dR_stack_5->SetBinContent(16,14.91774);
   VbbHcc_both_H_dR_stack_5->SetBinContent(17,8.983922);
   VbbHcc_both_H_dR_stack_5->SetBinContent(18,5.612979);
   VbbHcc_both_H_dR_stack_5->SetBinContent(19,3.128149);
   VbbHcc_both_H_dR_stack_5->SetBinContent(20,3.251853);
   VbbHcc_both_H_dR_stack_5->SetBinContent(21,2.395461);
   VbbHcc_both_H_dR_stack_5->SetBinContent(22,0.7527153);
   VbbHcc_both_H_dR_stack_5->SetBinContent(23,0.2854361);
   VbbHcc_both_H_dR_stack_5->SetBinContent(24,1.349275);
   VbbHcc_both_H_dR_stack_5->SetBinContent(25,0.05686358);
   VbbHcc_both_H_dR_stack_5->SetBinError(3,1.051958);
   VbbHcc_both_H_dR_stack_5->SetBinError(4,1.553947);
   VbbHcc_both_H_dR_stack_5->SetBinError(5,5.720858);
   VbbHcc_both_H_dR_stack_5->SetBinError(6,0.9583018);
   VbbHcc_both_H_dR_stack_5->SetBinError(7,1.495866);
   VbbHcc_both_H_dR_stack_5->SetBinError(8,0.6926048);
   VbbHcc_both_H_dR_stack_5->SetBinError(9,1.736633);
   VbbHcc_both_H_dR_stack_5->SetBinError(10,0.6848583);
   VbbHcc_both_H_dR_stack_5->SetBinError(11,1.713974);
   VbbHcc_both_H_dR_stack_5->SetBinError(12,1.412418);
   VbbHcc_both_H_dR_stack_5->SetBinError(13,1.703582);
   VbbHcc_both_H_dR_stack_5->SetBinError(14,5.53201);
   VbbHcc_both_H_dR_stack_5->SetBinError(15,2.171788);
   VbbHcc_both_H_dR_stack_5->SetBinError(16,2.098311);
   VbbHcc_both_H_dR_stack_5->SetBinError(17,1.37583);
   VbbHcc_both_H_dR_stack_5->SetBinError(18,1.076211);
   VbbHcc_both_H_dR_stack_5->SetBinError(19,0.536708);
   VbbHcc_both_H_dR_stack_5->SetBinError(20,0.984507);
   VbbHcc_both_H_dR_stack_5->SetBinError(21,1.001539);
   VbbHcc_both_H_dR_stack_5->SetBinError(22,0.234358);
   VbbHcc_both_H_dR_stack_5->SetBinError(23,0.1327119);
   VbbHcc_both_H_dR_stack_5->SetBinError(24,0.8324876);
   VbbHcc_both_H_dR_stack_5->SetBinError(25,0.05686358);
   VbbHcc_both_H_dR_stack_5->SetEntries(3486);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_stack_5->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->Draw("HIST");
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
