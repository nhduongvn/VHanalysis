void Sphericity_both_17()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Tue Aug 22 09:23:15 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2,-1.053596,1.133333,9.482364);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLeftMargin(0.15);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_8 = new TH1D("VbbHcc_both_Sphericity_stack_8","",25,0,1);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(1,4.952327);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(2,8.027398);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(3,3.767071);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(4,3.668179);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(5,3.929443);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(6,2.557105);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(7,3.455661);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(8,2.882378);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(9,2.273459);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(10,2.006522);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(11,1.159243);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(12,1.579916);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(13,0.9350753);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(14,1.061052);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(15,0.2791256);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(17,0.1969568);
   VbbHcc_both_Sphericity_stack_8->SetBinError(1,1.103339);
   VbbHcc_both_Sphericity_stack_8->SetBinError(2,1.398536);
   VbbHcc_both_Sphericity_stack_8->SetBinError(3,0.9310877);
   VbbHcc_both_Sphericity_stack_8->SetBinError(4,0.9561792);
   VbbHcc_both_Sphericity_stack_8->SetBinError(5,0.9757695);
   VbbHcc_both_Sphericity_stack_8->SetBinError(6,0.7886736);
   VbbHcc_both_Sphericity_stack_8->SetBinError(7,0.9430467);
   VbbHcc_both_Sphericity_stack_8->SetBinError(8,0.8393758);
   VbbHcc_both_Sphericity_stack_8->SetBinError(9,0.7314189);
   VbbHcc_both_Sphericity_stack_8->SetBinError(10,0.7563477);
   VbbHcc_both_Sphericity_stack_8->SetBinError(11,0.5300917);
   VbbHcc_both_Sphericity_stack_8->SetBinError(12,0.6131336);
   VbbHcc_both_Sphericity_stack_8->SetBinError(13,0.4770413);
   VbbHcc_both_Sphericity_stack_8->SetBinError(14,0.5310058);
   VbbHcc_both_Sphericity_stack_8->SetBinError(15,0.2791256);
   VbbHcc_both_Sphericity_stack_8->SetBinError(17,0.1969568);
   VbbHcc_both_Sphericity_stack_8->SetEntries(184);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Sphericity_stack_8->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_17->Modified();
   Sphericity_both_17->cd();
   Sphericity_both_17->SetSelected(Sphericity_both_17);
}
