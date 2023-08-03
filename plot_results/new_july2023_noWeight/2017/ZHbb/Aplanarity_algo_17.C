void Aplanarity_algo_17()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Thu Aug  3 12:24:55 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2,-9.518298,1.133333,85.66468);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLeftMargin(0.15);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_9 = new TH1D("VbbHcc_algo_Aplanarity_stack_9","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(1,72.52036);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(2,5.809575);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(3,0.8737782);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(4,0.1857384);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(5,0.05329886);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(6,0.0193814);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(7,0.004845351);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(8,0.003230234);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(9,0.001615117);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(10,0.001615117);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(1,0.3422409);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(2,0.09686663);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(3,0.03756666);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(4,0.0173202);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(5,0.00927814);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(6,0.005594929);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(7,0.002797464);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(8,0.00228412);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(9,0.001615117);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(10,0.001615117);
   VbbHcc_algo_Aplanarity_stack_9->SetEntries(49206);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Aplanarity_stack_9->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->Draw("HIST");
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
