void Aplanarity_algo_18_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Tue Aug 22 09:17:36 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(-0.2,-4.743399,1.133333,2.665986);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
   Aplanarity_algo_18->SetLogy();
   Aplanarity_algo_18->SetLeftMargin(0.15);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_10 = new TH1D("VbbHcc_algo_Aplanarity_stack_10","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(1,44.41181);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(2,4.940661);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(3,0.9655706);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(4,0.2040139);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(5,0.07258716);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(6,0.0180886);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(7,0.006956118);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(8,0.003886246);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(9,0.002469623);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(10,0.001103764);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(11,0.0003929548);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(12,0.0001988702);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(1,0.1562999);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(2,0.05161245);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(3,0.02280396);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(4,0.01039772);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(5,0.006205089);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(6,0.00308359);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(7,0.001873401);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(8,0.001385919);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(9,0.001117406);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(10,0.0007070722);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(11,0.0003929548);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(12,0.0001988702);
   VbbHcc_algo_Aplanarity_stack_10->SetEntries(94157);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_18->Modified();
   Aplanarity_algo_18->cd();
   Aplanarity_algo_18->SetSelected(Aplanarity_algo_18);
}
