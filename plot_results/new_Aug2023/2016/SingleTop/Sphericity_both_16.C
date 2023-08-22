void Sphericity_both_16()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Tue Aug 22 09:23:13 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-12.51146,1.133333,112.6031);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,95.29195);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,95.32538);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,80.85227);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,55.53469);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,45.31724);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,32.23962);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,27.09717);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,26.64394);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,22.46769);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,18.33122);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,13.96994);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,12.69147);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,14.12502);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,7.583358);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,8.750879);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,7.55709);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,3.401764);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,4.124463);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,1.673808);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,0.7601749);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,0.4222352);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(23,0.03624783);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,3.665958);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,3.539729);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,3.343926);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,2.835736);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,2.576793);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,2.122301);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,1.984609);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,1.995997);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,1.816544);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,1.658335);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,1.373918);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,1.406437);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,1.536121);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,1.098008);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,1.240032);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,1.120024);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,0.7195094);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,0.8091453);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.4868046);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,0.3487988);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,0.2667179);
   VbbHcc_both_Sphericity_stack_2->SetBinError(23,0.03624783);
   VbbHcc_both_Sphericity_stack_2->SetEntries(9517);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_16->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->SetSelected(Sphericity_both_16);
}
