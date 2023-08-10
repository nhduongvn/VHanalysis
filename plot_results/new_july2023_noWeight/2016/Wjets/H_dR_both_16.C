void H_dR_both_16()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Thu Aug 10 12:29:13 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.2,-2.735381,6.8,24.61843);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_5 = new TH1D("VbbHcc_both_H_dR_stack_5","",30,0,6);
   VbbHcc_both_H_dR_stack_5->SetBinContent(3,9.262755);
   VbbHcc_both_H_dR_stack_5->SetBinContent(4,10.48962);
   VbbHcc_both_H_dR_stack_5->SetBinContent(5,13.95553);
   VbbHcc_both_H_dR_stack_5->SetBinContent(6,5.681461);
   VbbHcc_both_H_dR_stack_5->SetBinContent(7,9.280608);
   VbbHcc_both_H_dR_stack_5->SetBinContent(8,5.855974);
   VbbHcc_both_H_dR_stack_5->SetBinContent(9,9.703648);
   VbbHcc_both_H_dR_stack_5->SetBinContent(10,6.872857);
   VbbHcc_both_H_dR_stack_5->SetBinContent(11,12.29347);
   VbbHcc_both_H_dR_stack_5->SetBinContent(12,11.10646);
   VbbHcc_both_H_dR_stack_5->SetBinContent(13,15.25061);
   VbbHcc_both_H_dR_stack_5->SetBinContent(14,20.841);
   VbbHcc_both_H_dR_stack_5->SetBinContent(15,20.71849);
   VbbHcc_both_H_dR_stack_5->SetBinContent(16,18.10786);
   VbbHcc_both_H_dR_stack_5->SetBinContent(17,11.04631);
   VbbHcc_both_H_dR_stack_5->SetBinContent(18,6.667694);
   VbbHcc_both_H_dR_stack_5->SetBinContent(19,4.117869);
   VbbHcc_both_H_dR_stack_5->SetBinContent(20,4.014989);
   VbbHcc_both_H_dR_stack_5->SetBinContent(21,3.501091);
   VbbHcc_both_H_dR_stack_5->SetBinContent(22,0.8852834);
   VbbHcc_both_H_dR_stack_5->SetBinContent(23,0.5019734);
   VbbHcc_both_H_dR_stack_5->SetBinContent(24,1.637023);
   VbbHcc_both_H_dR_stack_5->SetBinContent(25,0.146767);
   VbbHcc_both_H_dR_stack_5->SetBinContent(26,0.0002136538);
   VbbHcc_both_H_dR_stack_5->SetBinError(3,1.386932);
   VbbHcc_both_H_dR_stack_5->SetBinError(4,2.01505);
   VbbHcc_both_H_dR_stack_5->SetBinError(5,6.214927);
   VbbHcc_both_H_dR_stack_5->SetBinError(6,1.197668);
   VbbHcc_both_H_dR_stack_5->SetBinError(7,1.99733);
   VbbHcc_both_H_dR_stack_5->SetBinError(8,0.7848885);
   VbbHcc_both_H_dR_stack_5->SetBinError(9,2.228106);
   VbbHcc_both_H_dR_stack_5->SetBinError(10,0.8084477);
   VbbHcc_both_H_dR_stack_5->SetBinError(11,2.07659);
   VbbHcc_both_H_dR_stack_5->SetBinError(12,1.778306);
   VbbHcc_both_H_dR_stack_5->SetBinError(13,2.347834);
   VbbHcc_both_H_dR_stack_5->SetBinError(14,6.504753);
   VbbHcc_both_H_dR_stack_5->SetBinError(15,2.730933);
   VbbHcc_both_H_dR_stack_5->SetBinError(16,2.599964);
   VbbHcc_both_H_dR_stack_5->SetBinError(17,1.764443);
   VbbHcc_both_H_dR_stack_5->SetBinError(18,1.238526);
   VbbHcc_both_H_dR_stack_5->SetBinError(19,0.6854255);
   VbbHcc_both_H_dR_stack_5->SetBinError(20,1.192662);
   VbbHcc_both_H_dR_stack_5->SetBinError(21,1.513745);
   VbbHcc_both_H_dR_stack_5->SetBinError(22,0.2820714);
   VbbHcc_both_H_dR_stack_5->SetBinError(23,0.2139146);
   VbbHcc_both_H_dR_stack_5->SetBinError(24,1.051695);
   VbbHcc_both_H_dR_stack_5->SetBinError(25,0.146767);
   VbbHcc_both_H_dR_stack_5->SetBinError(26,0.0002136538);
   VbbHcc_both_H_dR_stack_5->SetEntries(3789);

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
