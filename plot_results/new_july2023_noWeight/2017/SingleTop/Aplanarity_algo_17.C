void Aplanarity_algo_17()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Thu Aug 10 12:28:44 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2,-1257.378,1.133333,11316.4);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLeftMargin(0.15);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,9580.019);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,1356.425);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,305.3742);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,74.33318);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,30.82492);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,9.187115);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,4.465894);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,1.872826);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,1.429535);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.4479025);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.6017885);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.4085355);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.04712387);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,0.04712387);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,37.25748);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,14.05761);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,6.724276);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,3.198343);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,2.210841);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,1.136078);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.7821471);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.450243);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.4887499);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.1494692);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.2921365);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.275663);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.04712387);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,0.04712387);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(147618);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_17->Modified();
   Aplanarity_algo_17->cd();
   Aplanarity_algo_17->SetSelected(Aplanarity_algo_17);
}
