void Aplanarity_algo_16_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Thu Aug 10 12:21:04 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-4.934316,1.133333,2.60324);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLogy();
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_10 = new TH1D("VbbHcc_algo_Aplanarity_stack_10","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(1,37.31944);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(2,4.246642);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(3,0.8150945);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(4,0.1762525);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(5,0.05981865);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(6,0.01755911);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(7,0.005979734);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(8,0.003091222);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(9,0.001694147);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(10,0.0007399519);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(11,0.0002703011);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(12,0.0001319684);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(1,0.1201103);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(2,0.04051122);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(3,0.01772025);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(4,0.008196965);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(5,0.004745781);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(6,0.002550675);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(7,0.001479914);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(8,0.001042122);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(9,0.0007661107);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(10,0.0004766633);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(11,0.0002703011);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(12,0.0001319684);
   VbbHcc_algo_Aplanarity_stack_10->SetEntries(112076);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Aplanarity_stack_10->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->Draw("HIST");
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
