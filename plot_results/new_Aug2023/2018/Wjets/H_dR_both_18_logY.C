void H_dR_both_18_logY()
{
//=========Macro generated from canvas: H_dR_both_18/H_dR_both_18
//=========  (Tue Aug 22 09:18:19 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_18 = new TCanvas("H_dR_both_18", "H_dR_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_18->SetHighLightColor(2);
   H_dR_both_18->Range(-1.2,-1.147752,6.8,2.094609);
   H_dR_both_18->SetFillColor(0);
   H_dR_both_18->SetBorderMode(0);
   H_dR_both_18->SetBorderSize(2);
   H_dR_both_18->SetLogy();
   H_dR_both_18->SetLeftMargin(0.15);
   H_dR_both_18->SetFrameBorderMode(0);
   H_dR_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_5 = new TH1D("VbbHcc_both_H_dR_stack_5","",30,0,6);
   VbbHcc_both_H_dR_stack_5->SetBinContent(3,16.62313);
   VbbHcc_both_H_dR_stack_5->SetBinContent(4,15.93927);
   VbbHcc_both_H_dR_stack_5->SetBinContent(5,18.24855);
   VbbHcc_both_H_dR_stack_5->SetBinContent(6,14.62617);
   VbbHcc_both_H_dR_stack_5->SetBinContent(7,16.34538);
   VbbHcc_both_H_dR_stack_5->SetBinContent(8,17.3361);
   VbbHcc_both_H_dR_stack_5->SetBinContent(9,20.60267);
   VbbHcc_both_H_dR_stack_5->SetBinContent(10,17.36474);
   VbbHcc_both_H_dR_stack_5->SetBinContent(11,23.38716);
   VbbHcc_both_H_dR_stack_5->SetBinContent(12,25.153);
   VbbHcc_both_H_dR_stack_5->SetBinContent(13,22.86567);
   VbbHcc_both_H_dR_stack_5->SetBinContent(14,30.55865);
   VbbHcc_both_H_dR_stack_5->SetBinContent(15,24.89125);
   VbbHcc_both_H_dR_stack_5->SetBinContent(16,31.10453);
   VbbHcc_both_H_dR_stack_5->SetBinContent(17,17.82981);
   VbbHcc_both_H_dR_stack_5->SetBinContent(18,7.898834);
   VbbHcc_both_H_dR_stack_5->SetBinContent(19,11.03157);
   VbbHcc_both_H_dR_stack_5->SetBinContent(20,7.473827);
   VbbHcc_both_H_dR_stack_5->SetBinContent(21,3.132121);
   VbbHcc_both_H_dR_stack_5->SetBinContent(22,1.536414);
   VbbHcc_both_H_dR_stack_5->SetBinContent(23,3.244489);
   VbbHcc_both_H_dR_stack_5->SetBinContent(24,0.4667544);
   VbbHcc_both_H_dR_stack_5->SetBinContent(25,0.3002715);
   VbbHcc_both_H_dR_stack_5->SetBinContent(26,2.838361);
   VbbHcc_both_H_dR_stack_5->SetBinError(3,2.808494);
   VbbHcc_both_H_dR_stack_5->SetBinError(4,3.652034);
   VbbHcc_both_H_dR_stack_5->SetBinError(5,8.929618);
   VbbHcc_both_H_dR_stack_5->SetBinError(6,3.289223);
   VbbHcc_both_H_dR_stack_5->SetBinError(7,3.115541);
   VbbHcc_both_H_dR_stack_5->SetBinError(8,3.608688);
   VbbHcc_both_H_dR_stack_5->SetBinError(9,4.353019);
   VbbHcc_both_H_dR_stack_5->SetBinError(10,3.680085);
   VbbHcc_both_H_dR_stack_5->SetBinError(11,4.490936);
   VbbHcc_both_H_dR_stack_5->SetBinError(12,4.711776);
   VbbHcc_both_H_dR_stack_5->SetBinError(13,4.249751);
   VbbHcc_both_H_dR_stack_5->SetBinError(14,5.644944);
   VbbHcc_both_H_dR_stack_5->SetBinError(15,3.251354);
   VbbHcc_both_H_dR_stack_5->SetBinError(16,4.75861);
   VbbHcc_both_H_dR_stack_5->SetBinError(17,3.193956);
   VbbHcc_both_H_dR_stack_5->SetBinError(18,1.2102);
   VbbHcc_both_H_dR_stack_5->SetBinError(19,3.402219);
   VbbHcc_both_H_dR_stack_5->SetBinError(20,3.474335);
   VbbHcc_both_H_dR_stack_5->SetBinError(21,0.7456081);
   VbbHcc_both_H_dR_stack_5->SetBinError(22,0.4590564);
   VbbHcc_both_H_dR_stack_5->SetBinError(23,2.18626);
   VbbHcc_both_H_dR_stack_5->SetBinError(24,0.3407584);
   VbbHcc_both_H_dR_stack_5->SetBinError(25,0.1968253);
   VbbHcc_both_H_dR_stack_5->SetBinError(26,2.838361);
   VbbHcc_both_H_dR_stack_5->SetEntries(2210);

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
