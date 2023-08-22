void Aplanarity_algo_17()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Tue Aug 22 09:21:56 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2,-909.1343,1.133333,8182.208);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLeftMargin(0.15);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_4 = new TH1D("VbbHcc_algo_Aplanarity_stack_4","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(1,6926.737);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(2,876.9807);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(3,173.2163);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(4,41.13268);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(5,10.66974);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(6,2.971538);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(7,0.6773113);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(8,0.593193);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(9,0.1097655);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(10,0.1060274);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(11,0.0401489);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(12,0.4484253);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(18,0.02783533);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(1,55.59026);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(2,24.94733);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(3,10.08299);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(4,5.712963);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(5,3.026516);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(6,0.8333056);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(7,0.2907356);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(8,0.2940431);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(9,0.07765459);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(10,0.1060274);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(11,0.0401489);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(12,0.305904);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(18,0.02783533);
   VbbHcc_algo_Aplanarity_stack_4->SetEntries(54777);

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
