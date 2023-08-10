void Aplanarity_algo_17_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Thu Aug 10 12:21:04 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2,-4.870599,1.133333,2.666957);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLogy();
   Aplanarity_algo_17->SetLeftMargin(0.15);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_10 = new TH1D("VbbHcc_algo_Aplanarity_stack_10","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(1,43.21675);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(2,4.917707);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(3,0.9438977);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(4,0.2041044);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(5,0.06927134);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(6,0.02033384);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(7,0.006924666);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(8,0.003579705);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(9,0.00196186);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(10,0.0008568808);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(11,0.0003130148);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(12,0.0001528224);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(1,0.1390905);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(2,0.04691291);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(3,0.02052044);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(4,0.009492269);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(5,0.005495721);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(6,0.002953738);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(7,0.001713774);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(8,0.001206801);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(9,0.0008871734);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(10,0.0005519868);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(11,0.0003130148);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(12,0.0001528224);
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
