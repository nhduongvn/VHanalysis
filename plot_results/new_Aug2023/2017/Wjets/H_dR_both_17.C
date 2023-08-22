void H_dR_both_17()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Tue Aug 22 09:22:44 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(-1.2,-3.163661,6.8,28.47295);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetLeftMargin(0.15);
   H_dR_both_17->SetFrameBorderMode(0);
   H_dR_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_5 = new TH1D("VbbHcc_both_H_dR_stack_5","",30,0,6);
   VbbHcc_both_H_dR_stack_5->SetBinContent(3,11.92124);
   VbbHcc_both_H_dR_stack_5->SetBinContent(4,13.08131);
   VbbHcc_both_H_dR_stack_5->SetBinContent(5,11.15938);
   VbbHcc_both_H_dR_stack_5->SetBinContent(6,7.264002);
   VbbHcc_both_H_dR_stack_5->SetBinContent(7,17.02732);
   VbbHcc_both_H_dR_stack_5->SetBinContent(8,10.82329);
   VbbHcc_both_H_dR_stack_5->SetBinContent(9,11.89735);
   VbbHcc_both_H_dR_stack_5->SetBinContent(10,21.12514);
   VbbHcc_both_H_dR_stack_5->SetBinContent(11,15.47924);
   VbbHcc_both_H_dR_stack_5->SetBinContent(12,14.30086);
   VbbHcc_both_H_dR_stack_5->SetBinContent(13,17.20272);
   VbbHcc_both_H_dR_stack_5->SetBinContent(14,22.49718);
   VbbHcc_both_H_dR_stack_5->SetBinContent(15,24.10408);
   VbbHcc_both_H_dR_stack_5->SetBinContent(16,20.0867);
   VbbHcc_both_H_dR_stack_5->SetBinContent(17,9.849637);
   VbbHcc_both_H_dR_stack_5->SetBinContent(18,7.334447);
   VbbHcc_both_H_dR_stack_5->SetBinContent(19,4.961277);
   VbbHcc_both_H_dR_stack_5->SetBinContent(20,5.211342);
   VbbHcc_both_H_dR_stack_5->SetBinContent(21,4.045875);
   VbbHcc_both_H_dR_stack_5->SetBinContent(22,3.040486);
   VbbHcc_both_H_dR_stack_5->SetBinContent(23,0.910234);
   VbbHcc_both_H_dR_stack_5->SetBinContent(24,0.5383456);
   VbbHcc_both_H_dR_stack_5->SetBinContent(27,0.1627641);
   VbbHcc_both_H_dR_stack_5->SetBinError(3,1.683912);
   VbbHcc_both_H_dR_stack_5->SetBinError(4,2.23385);
   VbbHcc_both_H_dR_stack_5->SetBinError(5,2.042182);
   VbbHcc_both_H_dR_stack_5->SetBinError(6,0.9575711);
   VbbHcc_both_H_dR_stack_5->SetBinError(7,5.433898);
   VbbHcc_both_H_dR_stack_5->SetBinError(8,2.280147);
   VbbHcc_both_H_dR_stack_5->SetBinError(9,2.442012);
   VbbHcc_both_H_dR_stack_5->SetBinError(10,7.97585);
   VbbHcc_both_H_dR_stack_5->SetBinError(11,2.885249);
   VbbHcc_both_H_dR_stack_5->SetBinError(12,2.19694);
   VbbHcc_both_H_dR_stack_5->SetBinError(13,2.687288);
   VbbHcc_both_H_dR_stack_5->SetBinError(14,3.306388);
   VbbHcc_both_H_dR_stack_5->SetBinError(15,2.870476);
   VbbHcc_both_H_dR_stack_5->SetBinError(16,2.745672);
   VbbHcc_both_H_dR_stack_5->SetBinError(17,2.020987);
   VbbHcc_both_H_dR_stack_5->SetBinError(18,1.018454);
   VbbHcc_both_H_dR_stack_5->SetBinError(19,0.8425054);
   VbbHcc_both_H_dR_stack_5->SetBinError(20,1.19602);
   VbbHcc_both_H_dR_stack_5->SetBinError(21,1.367531);
   VbbHcc_both_H_dR_stack_5->SetBinError(22,1.560286);
   VbbHcc_both_H_dR_stack_5->SetBinError(23,0.3620587);
   VbbHcc_both_H_dR_stack_5->SetBinError(24,0.2156015);
   VbbHcc_both_H_dR_stack_5->SetBinError(27,0.1627641);
   VbbHcc_both_H_dR_stack_5->SetEntries(2217);

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
