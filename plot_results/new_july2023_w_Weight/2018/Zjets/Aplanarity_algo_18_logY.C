void Aplanarity_algo_18_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Thu Aug 10 10:42:30 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(-0.2,-2.01661,1.133333,5.029713);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
   Aplanarity_algo_18->SetLogy();
   Aplanarity_algo_18->SetLeftMargin(0.15);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_4 = new TH1D("VbbHcc_algo_Aplanarity_stack_4","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(1,11156.59);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(2,1279.661);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(3,279.4913);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(4,62.58019);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(5,16.13455);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(6,4.279293);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(7,0.4006179);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(8,0.09751069);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(9,0.1303332);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(10,0.1007876);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(11,0.6096656);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(1,90.88933);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(2,33.09427);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(3,16.75554);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(4,7.731465);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(5,6.225355);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(6,1.366018);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(7,0.2314301);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(8,0.09751069);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(9,0.1303332);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(10,0.1007876);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(11,0.3132072);
   VbbHcc_algo_Aplanarity_stack_4->SetEntries(55877);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Aplanarity_stack_4->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->Draw("HIST");
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
