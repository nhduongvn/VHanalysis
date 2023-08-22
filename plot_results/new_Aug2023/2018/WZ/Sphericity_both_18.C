void Sphericity_both_18()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Tue Aug 22 09:23:15 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-0.4450641,1.133333,4.005576);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_7 = new TH1D("VbbHcc_both_Sphericity_stack_7","",25,0,1);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(1,3.390964);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(2,0.9373281);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(3,1.32836);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(5,0.9073219);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(6,1.770987);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(7,1.205602);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(8,0.6888413);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(10,0.3690103);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(11,1.435927);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(13,0.4425544);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(14,0.3443727);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(16,0.3429098);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(18,0.4655805);
   VbbHcc_both_Sphericity_stack_7->SetBinError(1,1.173679);
   VbbHcc_both_Sphericity_stack_7->SetBinError(2,0.6627946);
   VbbHcc_both_Sphericity_stack_7->SetBinError(3,0.7805829);
   VbbHcc_both_Sphericity_stack_7->SetBinError(5,0.6415734);
   VbbHcc_both_Sphericity_stack_7->SetBinError(6,0.8917723);
   VbbHcc_both_Sphericity_stack_7->SetBinError(7,0.6995609);
   VbbHcc_both_Sphericity_stack_7->SetBinError(8,0.4871083);
   VbbHcc_both_Sphericity_stack_7->SetBinError(10,0.3690103);
   VbbHcc_both_Sphericity_stack_7->SetBinError(11,1.073163);
   VbbHcc_both_Sphericity_stack_7->SetBinError(13,0.3570941);
   VbbHcc_both_Sphericity_stack_7->SetBinError(14,0.3443727);
   VbbHcc_both_Sphericity_stack_7->SetBinError(16,0.3429098);
   VbbHcc_both_Sphericity_stack_7->SetBinError(18,0.4655805);
   VbbHcc_both_Sphericity_stack_7->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Sphericity_stack_7->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_18->Modified();
   Sphericity_both_18->cd();
   Sphericity_both_18->SetSelected(Sphericity_both_18);
}
