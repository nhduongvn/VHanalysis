void Sphericity_algo_17()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Thu Aug 10 12:24:18 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,-145.9586,1.133333,1313.628);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_5 = new TH1D("VbbHcc_algo_Sphericity_stack_5","",25,0,1);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(1,1112.066);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(2,901.9544);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(3,616.9236);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(4,285.3872);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(5,173.0586);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(6,58.30446);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(7,18.64774);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(8,5.589517);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(9,3.124215);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(10,1.792398);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(11,1.51616);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(12,0.4148486);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(13,0.4405489);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(14,0.5861966);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(15,0.05392928);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(16,0.009769569);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(17,0.1564287);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(19,0.1846363);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(1,40.01733);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(2,35.47249);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(3,33.907);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(4,18.27774);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(5,17.8692);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(6,5.606747);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(7,3.239681);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(8,1.775996);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(9,0.9294791);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(10,1.474303);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(11,1.072165);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(12,0.2024972);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(13,0.2152676);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(14,0.4693624);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(15,0.0404757);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(16,0.009769569);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(17,0.1564287);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(19,0.1846363);
   VbbHcc_algo_Sphericity_stack_5->SetEntries(16864);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Sphericity_stack_5->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_17->Modified();
   Sphericity_algo_17->cd();
   Sphericity_algo_17->SetSelected(Sphericity_algo_17);
}
