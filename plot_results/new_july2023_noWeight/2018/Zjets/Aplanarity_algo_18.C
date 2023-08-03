void Aplanarity_algo_18()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Thu Aug  3 12:24:55 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(-0.2,-1288.67,1.133333,11598.03);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
   Aplanarity_algo_18->SetLeftMargin(0.15);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_4 = new TH1D("VbbHcc_algo_Aplanarity_stack_4","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(1,9818.435);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(2,1132.602);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(3,245.6182);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(4,53.89883);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(5,12.67013);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(6,4.855767);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(7,0.377335);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(8,0.09257296);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(9,0.1257783);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(10,0.09257296);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(11,0.469908);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(1,74.14315);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(2,28.49351);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(3,14.72867);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(4,5.795234);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(5,4.332787);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(6,1.424393);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(7,0.2178545);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(8,0.09257296);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(9,0.1257783);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(10,0.09257296);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(11,0.2367073);
   VbbHcc_algo_Aplanarity_stack_4->SetEntries(56536);

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
