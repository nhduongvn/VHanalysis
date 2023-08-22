void Aplanarity_both_17()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Tue Aug 22 09:23:18 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2,-3.356709,1.133333,30.21038);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLeftMargin(0.15);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_8 = new TH1D("VbbHcc_both_Aplanarity_stack_8","",50,0,1);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(1,25.57493);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(2,8.670835);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(3,3.793942);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(4,1.960369);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(5,0.4377879);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(6,0.725015);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(7,0.8063503);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(8,0.5784221);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(10,0.183263);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(1,2.506649);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(2,1.452577);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(3,0.9583334);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(4,0.7074822);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(5,0.3211283);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(6,0.4248476);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(7,0.4641292);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(8,0.4097132);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(10,0.183263);
   VbbHcc_both_Aplanarity_stack_8->SetEntries(184);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Aplanarity_stack_8->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_17->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->SetSelected(Aplanarity_both_17);
}
