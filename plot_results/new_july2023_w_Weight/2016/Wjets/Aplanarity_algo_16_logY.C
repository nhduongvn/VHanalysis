void Aplanarity_algo_16_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Thu Aug 10 10:42:29 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-2.622567,1.133333,4.871975);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLogy();
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_5 = new TH1D("VbbHcc_algo_Aplanarity_stack_5","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(1,6997.962);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(2,814.952);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(3,187.3911);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(4,33.47629);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(5,4.942481);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(6,9.879714);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(7,7.38855);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(8,0.5152085);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(9,0.5144519);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(10,0.3698299);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(11,0.02678655);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(1,110.1173);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(2,44.90168);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(3,21.76923);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(4,8.193697);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(5,1.319851);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(6,6.961174);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(7,6.590164);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(8,0.3976914);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(9,0.4748127);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(10,0.3389751);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(11,0.02678655);
   VbbHcc_algo_Aplanarity_stack_5->SetEntries(65948);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Aplanarity_stack_5->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_16->Modified();
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->SetSelected(Aplanarity_algo_16);
}
