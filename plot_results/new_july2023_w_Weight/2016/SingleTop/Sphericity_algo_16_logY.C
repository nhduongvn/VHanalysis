void Sphericity_algo_16_logY()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Thu Aug 10 10:42:27 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-2.7446,1.133333,4.906019);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLogy();
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,7301.436);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,7134.581);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,3971.896);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,2207.142);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,1141.286);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,534.3497);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,216.35);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,93.0239);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,45.41038);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,28.55633);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,15.33119);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,12.74528);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,8.030735);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,5.065261);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,2.655765);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,2.913127);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,2.470058);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,1.387546);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,0.4745445);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(20,0.02096486);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(22,0.02438775);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,34.74041);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,34.05343);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,25.64169);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,19.23625);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,13.83622);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,9.473468);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,6.018518);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,3.853392);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,2.681665);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,2.219436);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,1.586372);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,1.55478);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,1.164041);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.8659304);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.6245483);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.7178181);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.6467351);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.553061);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,0.3266309);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(20,0.05692141);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(22,0.02438775);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(347069);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_16->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->SetSelected(Sphericity_algo_16);
}
