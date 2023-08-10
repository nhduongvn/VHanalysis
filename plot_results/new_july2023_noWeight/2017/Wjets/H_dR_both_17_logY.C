void H_dR_both_17_logY()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Thu Aug 10 12:32:46 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(-1.2,-1.398432,6.8,2.039656);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetLogy();
   H_dR_both_17->SetLeftMargin(0.15);
   H_dR_both_17->SetFrameBorderMode(0);
   H_dR_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_5 = new TH1D("VbbHcc_both_H_dR_stack_5","",30,0,6);
   VbbHcc_both_H_dR_stack_5->SetBinContent(3,11.50566);
   VbbHcc_both_H_dR_stack_5->SetBinContent(4,14.16195);
   VbbHcc_both_H_dR_stack_5->SetBinContent(5,12.08554);
   VbbHcc_both_H_dR_stack_5->SetBinContent(6,7.296926);
   VbbHcc_both_H_dR_stack_5->SetBinContent(7,19.17112);
   VbbHcc_both_H_dR_stack_5->SetBinContent(8,10.59232);
   VbbHcc_both_H_dR_stack_5->SetBinContent(9,12.57925);
   VbbHcc_both_H_dR_stack_5->SetBinContent(10,20.35762);
   VbbHcc_both_H_dR_stack_5->SetBinContent(11,15.85788);
   VbbHcc_both_H_dR_stack_5->SetBinContent(12,14.17358);
   VbbHcc_both_H_dR_stack_5->SetBinContent(13,15.04429);
   VbbHcc_both_H_dR_stack_5->SetBinContent(14,23.47272);
   VbbHcc_both_H_dR_stack_5->SetBinContent(15,26.19981);
   VbbHcc_both_H_dR_stack_5->SetBinContent(16,20.47125);
   VbbHcc_both_H_dR_stack_5->SetBinContent(17,10.19946);
   VbbHcc_both_H_dR_stack_5->SetBinContent(18,7.363529);
   VbbHcc_both_H_dR_stack_5->SetBinContent(19,5.481668);
   VbbHcc_both_H_dR_stack_5->SetBinContent(20,6.461184);
   VbbHcc_both_H_dR_stack_5->SetBinContent(21,4.03202);
   VbbHcc_both_H_dR_stack_5->SetBinContent(22,2.892249);
   VbbHcc_both_H_dR_stack_5->SetBinContent(23,0.9557553);
   VbbHcc_both_H_dR_stack_5->SetBinContent(24,0.4752623);
   VbbHcc_both_H_dR_stack_5->SetBinContent(27,0.1763629);
   VbbHcc_both_H_dR_stack_5->SetBinError(3,1.638048);
   VbbHcc_both_H_dR_stack_5->SetBinError(4,2.587196);
   VbbHcc_both_H_dR_stack_5->SetBinError(5,2.290362);
   VbbHcc_both_H_dR_stack_5->SetBinError(6,0.9252759);
   VbbHcc_both_H_dR_stack_5->SetBinError(7,6.959989);
   VbbHcc_both_H_dR_stack_5->SetBinError(8,2.216943);
   VbbHcc_both_H_dR_stack_5->SetBinError(9,2.753838);
   VbbHcc_both_H_dR_stack_5->SetBinError(10,6.943995);
   VbbHcc_both_H_dR_stack_5->SetBinError(11,3.083303);
   VbbHcc_both_H_dR_stack_5->SetBinError(12,2.108704);
   VbbHcc_both_H_dR_stack_5->SetBinError(13,2.106605);
   VbbHcc_both_H_dR_stack_5->SetBinError(14,3.546443);
   VbbHcc_both_H_dR_stack_5->SetBinError(15,3.37429);
   VbbHcc_both_H_dR_stack_5->SetBinError(16,2.794947);
   VbbHcc_both_H_dR_stack_5->SetBinError(17,1.899442);
   VbbHcc_both_H_dR_stack_5->SetBinError(18,0.9978776);
   VbbHcc_both_H_dR_stack_5->SetBinError(19,0.8840157);
   VbbHcc_both_H_dR_stack_5->SetBinError(20,1.827211);
   VbbHcc_both_H_dR_stack_5->SetBinError(21,1.346814);
   VbbHcc_both_H_dR_stack_5->SetBinError(22,1.281337);
   VbbHcc_both_H_dR_stack_5->SetBinError(23,0.3577228);
   VbbHcc_both_H_dR_stack_5->SetBinError(24,0.1877653);
   VbbHcc_both_H_dR_stack_5->SetBinError(27,0.1763629);
   VbbHcc_both_H_dR_stack_5->SetEntries(2446);

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
