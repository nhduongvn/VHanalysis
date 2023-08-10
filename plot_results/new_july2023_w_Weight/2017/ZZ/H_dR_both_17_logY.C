void H_dR_both_17_logY()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Thu Aug 10 10:43:03 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(-1.2,-2.300139,6.8,1.576517);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetLogy();
   H_dR_both_17->SetLeftMargin(0.15);
   H_dR_both_17->SetFrameBorderMode(0);
   H_dR_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_8 = new TH1D("VbbHcc_both_H_dR_stack_8","",30,0,6);
   VbbHcc_both_H_dR_stack_8->SetBinContent(3,5.371245);
   VbbHcc_both_H_dR_stack_8->SetBinContent(4,4.278073);
   VbbHcc_both_H_dR_stack_8->SetBinContent(5,6.817275);
   VbbHcc_both_H_dR_stack_8->SetBinContent(6,3.723545);
   VbbHcc_both_H_dR_stack_8->SetBinContent(7,2.131104);
   VbbHcc_both_H_dR_stack_8->SetBinContent(8,0.5855256);
   VbbHcc_both_H_dR_stack_8->SetBinContent(9,0.3052438);
   VbbHcc_both_H_dR_stack_8->SetBinContent(10,1.281284);
   VbbHcc_both_H_dR_stack_8->SetBinContent(11,1.104459);
   VbbHcc_both_H_dR_stack_8->SetBinContent(12,2.323979);
   VbbHcc_both_H_dR_stack_8->SetBinContent(13,0.02446564);
   VbbHcc_both_H_dR_stack_8->SetBinContent(14,4.462672);
   VbbHcc_both_H_dR_stack_8->SetBinContent(15,6.137275);
   VbbHcc_both_H_dR_stack_8->SetBinContent(16,8.152721);
   VbbHcc_both_H_dR_stack_8->SetBinContent(17,1.815445);
   VbbHcc_both_H_dR_stack_8->SetBinContent(18,1.243854);
   VbbHcc_both_H_dR_stack_8->SetBinContent(19,0.4392965);
   VbbHcc_both_H_dR_stack_8->SetBinContent(20,0.9480945);
   VbbHcc_both_H_dR_stack_8->SetBinError(3,1.265346);
   VbbHcc_both_H_dR_stack_8->SetBinError(4,1.105052);
   VbbHcc_both_H_dR_stack_8->SetBinError(5,1.379933);
   VbbHcc_both_H_dR_stack_8->SetBinError(6,1.051465);
   VbbHcc_both_H_dR_stack_8->SetBinError(7,0.7755622);
   VbbHcc_both_H_dR_stack_8->SetBinError(8,0.4350429);
   VbbHcc_both_H_dR_stack_8->SetBinError(9,0.2926576);
   VbbHcc_both_H_dR_stack_8->SetBinError(10,0.6429446);
   VbbHcc_both_H_dR_stack_8->SetBinError(11,0.5536651);
   VbbHcc_both_H_dR_stack_8->SetBinError(12,0.8244857);
   VbbHcc_both_H_dR_stack_8->SetBinError(13,0.02446564);
   VbbHcc_both_H_dR_stack_8->SetBinError(14,1.176363);
   VbbHcc_both_H_dR_stack_8->SetBinError(15,1.319868);
   VbbHcc_both_H_dR_stack_8->SetBinError(16,1.543685);
   VbbHcc_both_H_dR_stack_8->SetBinError(17,0.7487521);
   VbbHcc_both_H_dR_stack_8->SetBinError(18,0.6222592);
   VbbHcc_both_H_dR_stack_8->SetBinError(19,0.3106296);
   VbbHcc_both_H_dR_stack_8->SetBinError(20,0.5475202);
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
