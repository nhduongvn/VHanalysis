void H_dR_both_17_logY()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Thu Aug 10 12:32:46 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(-1.2,-1.522186,6.8,3.110098);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetLogy();
   H_dR_both_17->SetLeftMargin(0.15);
   H_dR_both_17->SetFrameBorderMode(0);
   H_dR_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_4 = new TH1D("VbbHcc_both_H_dR_stack_4","",30,0,6);
   VbbHcc_both_H_dR_stack_4->SetBinContent(3,117.8395);
   VbbHcc_both_H_dR_stack_4->SetBinContent(4,165.6358);
   VbbHcc_both_H_dR_stack_4->SetBinContent(5,146.7824);
   VbbHcc_both_H_dR_stack_4->SetBinContent(6,109.6494);
   VbbHcc_both_H_dR_stack_4->SetBinContent(7,104.1594);
   VbbHcc_both_H_dR_stack_4->SetBinContent(8,102.6118);
   VbbHcc_both_H_dR_stack_4->SetBinContent(9,124.8869);
   VbbHcc_both_H_dR_stack_4->SetBinContent(10,112.0749);
   VbbHcc_both_H_dR_stack_4->SetBinContent(11,139.6922);
   VbbHcc_both_H_dR_stack_4->SetBinContent(12,172.1688);
   VbbHcc_both_H_dR_stack_4->SetBinContent(13,173.1338);
   VbbHcc_both_H_dR_stack_4->SetBinContent(14,207.2948);
   VbbHcc_both_H_dR_stack_4->SetBinContent(15,222.2601);
   VbbHcc_both_H_dR_stack_4->SetBinContent(16,234.0565);
   VbbHcc_both_H_dR_stack_4->SetBinContent(17,121.451);
   VbbHcc_both_H_dR_stack_4->SetBinContent(18,86.75134);
   VbbHcc_both_H_dR_stack_4->SetBinContent(19,44.73114);
   VbbHcc_both_H_dR_stack_4->SetBinContent(20,27.13557);
   VbbHcc_both_H_dR_stack_4->SetBinContent(21,19.19515);
   VbbHcc_both_H_dR_stack_4->SetBinContent(22,11.74828);
   VbbHcc_both_H_dR_stack_4->SetBinContent(23,5.93083);
   VbbHcc_both_H_dR_stack_4->SetBinContent(24,2.488118);
   VbbHcc_both_H_dR_stack_4->SetBinContent(25,2.419363);
   VbbHcc_both_H_dR_stack_4->SetBinContent(26,0.8814548);
   VbbHcc_both_H_dR_stack_4->SetBinContent(27,0.1746112);
   VbbHcc_both_H_dR_stack_4->SetBinError(3,6.72245);
   VbbHcc_both_H_dR_stack_4->SetBinError(4,7.349308);
   VbbHcc_both_H_dR_stack_4->SetBinError(5,8.170645);
   VbbHcc_both_H_dR_stack_4->SetBinError(6,5.558561);
   VbbHcc_both_H_dR_stack_4->SetBinError(7,6.551907);
   VbbHcc_both_H_dR_stack_4->SetBinError(8,5.897995);
   VbbHcc_both_H_dR_stack_4->SetBinError(9,9.442471);
   VbbHcc_both_H_dR_stack_4->SetBinError(10,6.163476);
   VbbHcc_both_H_dR_stack_4->SetBinError(11,8.058609);
   VbbHcc_both_H_dR_stack_4->SetBinError(12,10.26634);
   VbbHcc_both_H_dR_stack_4->SetBinError(13,8.40978);
   VbbHcc_both_H_dR_stack_4->SetBinError(14,10.28369);
   VbbHcc_both_H_dR_stack_4->SetBinError(15,8.652406);
   VbbHcc_both_H_dR_stack_4->SetBinError(16,9.454378);
   VbbHcc_both_H_dR_stack_4->SetBinError(17,6.850801);
   VbbHcc_both_H_dR_stack_4->SetBinError(18,7.699496);
   VbbHcc_both_H_dR_stack_4->SetBinError(19,4.000751);
   VbbHcc_both_H_dR_stack_4->SetBinError(20,2.27197);
   VbbHcc_both_H_dR_stack_4->SetBinError(21,2.001292);
   VbbHcc_both_H_dR_stack_4->SetBinError(22,1.615129);
   VbbHcc_both_H_dR_stack_4->SetBinError(23,1.084591);
   VbbHcc_both_H_dR_stack_4->SetBinError(24,0.6982782);
   VbbHcc_both_H_dR_stack_4->SetBinError(25,0.7674977);
   VbbHcc_both_H_dR_stack_4->SetBinError(26,0.5156938);
   VbbHcc_both_H_dR_stack_4->SetBinError(27,0.1269889);
   VbbHcc_both_H_dR_stack_4->SetEntries(17765);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_stack_4->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->Draw("HIST");
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
