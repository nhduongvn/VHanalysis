void Aplanarity_algo_18_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Thu Aug 10 12:21:05 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(-0.2,-0.5609815,1.133333,7.300143);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
   Aplanarity_algo_18->SetLogy();
   Aplanarity_algo_18->SetLeftMargin(0.15);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,1723779);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,216955.2);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,44313.85);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,13705.61);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,3326.101);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,624.8598);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,212.0205);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,89.8697);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,16.61847);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,7.920658);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,8.794337);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,3.358621);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,30795.03);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,7343.668);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,3627.66);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,2575.489);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,1068.708);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,436.5047);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,82.14551);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,49.92915);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,11.77468);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,7.920658);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,8.794337);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,3.358621);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(112239);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->Draw("HIST");
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
