void H_dR_both_16()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Tue Aug 22 09:22:44 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.2,-0.0006953762,6.8,0.006258385);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_12 = new TH1D("VbbHcc_both_H_dR_stack_12","",30,0,6);
   VbbHcc_both_H_dR_stack_12->SetBinContent(3,0.0009164049);
   VbbHcc_both_H_dR_stack_12->SetBinContent(4,0.002473659);
   VbbHcc_both_H_dR_stack_12->SetBinContent(5,0.004390781);
   VbbHcc_both_H_dR_stack_12->SetBinContent(6,0.002053439);
   VbbHcc_both_H_dR_stack_12->SetBinContent(7,0.005298104);
   VbbHcc_both_H_dR_stack_12->SetBinContent(8,0.002216701);
   VbbHcc_both_H_dR_stack_12->SetBinContent(9,0.001505524);
   VbbHcc_both_H_dR_stack_12->SetBinContent(10,0.001764459);
   VbbHcc_both_H_dR_stack_12->SetBinContent(11,0.001625453);
   VbbHcc_both_H_dR_stack_12->SetBinContent(12,0.003315006);
   VbbHcc_both_H_dR_stack_12->SetBinContent(13,0.002168737);
   VbbHcc_both_H_dR_stack_12->SetBinContent(14,0.003745272);
   VbbHcc_both_H_dR_stack_12->SetBinContent(15,0.00172729);
   VbbHcc_both_H_dR_stack_12->SetBinContent(16,0.004273287);
   VbbHcc_both_H_dR_stack_12->SetBinContent(17,0.000810064);
   VbbHcc_both_H_dR_stack_12->SetBinContent(18,0.0002692078);
   VbbHcc_both_H_dR_stack_12->SetBinError(3,0.0005292107);
   VbbHcc_both_H_dR_stack_12->SetBinError(4,0.0008366868);
   VbbHcc_both_H_dR_stack_12->SetBinError(5,0.001135276);
   VbbHcc_both_H_dR_stack_12->SetBinError(6,0.0007780981);
   VbbHcc_both_H_dR_stack_12->SetBinError(7,0.001218441);
   VbbHcc_both_H_dR_stack_12->SetBinError(8,0.0007633071);
   VbbHcc_both_H_dR_stack_12->SetBinError(9,0.0006744183);
   VbbHcc_both_H_dR_stack_12->SetBinError(10,0.0007208597);
   VbbHcc_both_H_dR_stack_12->SetBinError(11,0.0006674002);
   VbbHcc_both_H_dR_stack_12->SetBinError(12,0.0009587317);
   VbbHcc_both_H_dR_stack_12->SetBinError(13,0.0007710596);
   VbbHcc_both_H_dR_stack_12->SetBinError(14,0.001043154);
   VbbHcc_both_H_dR_stack_12->SetBinError(15,0.0007058883);
   VbbHcc_both_H_dR_stack_12->SetBinError(16,0.001108095);
   VbbHcc_both_H_dR_stack_12->SetBinError(17,0.0004685847);
   VbbHcc_both_H_dR_stack_12->SetBinError(18,0.0002692078);
   VbbHcc_both_H_dR_stack_12->SetEntries(137);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_stack_12->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->Draw("HIST");
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
