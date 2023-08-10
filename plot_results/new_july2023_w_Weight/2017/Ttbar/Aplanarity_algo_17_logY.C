void Aplanarity_algo_17_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Thu Aug 10 12:21:04 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2,-2.647646,1.133333,6.439164);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLogy();
   Aplanarity_algo_17->SetLeftMargin(0.15);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_3 = new TH1D("VbbHcc_algo_Aplanarity_stack_3","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(0,0.1479447);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(1,179033.2);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(2,23536.08);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(3,4711.557);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(4,1271.119);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(5,418.0678);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(6,159.0355);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(7,69.87782);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(8,31.74475);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(9,15.89803);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(10,9.813244);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(11,5.089898);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(12,2.912472);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(13,2.340126);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(14,0.9574268);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(15,0.3999445);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(16,0.3346625);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(17,0.3591708);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(18,0.3084347);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(19,0.1980587);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(21,0.03648088);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(22,0.05678712);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(0,0.1066523);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(1,115.6022);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(2,41.64292);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(3,18.43141);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(4,9.471943);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(5,5.366054);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(6,3.27911);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(7,2.137755);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(8,1.42726);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(9,1.010448);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(10,0.7839471);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(11,0.544661);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(12,0.4149473);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(13,0.3799226);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(14,0.2451464);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(15,0.159793);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(16,0.1327819);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(17,0.1589057);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(18,0.1450906);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(19,0.1071924);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(21,0.03648088);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(22,0.05678712);
   VbbHcc_algo_Aplanarity_stack_3->SetEntries(3113082);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Aplanarity_stack_3->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->Draw("HIST");
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
