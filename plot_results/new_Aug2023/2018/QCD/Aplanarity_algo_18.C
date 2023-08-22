void Aplanarity_algo_18()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Tue Aug 22 09:21:57 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(-0.2,-203274.4,1.133333,1829470);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
   Aplanarity_algo_18->SetLeftMargin(0.15);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,1548758);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,196915.4);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,40216.9);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,12896.33);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,3050.583);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,580.825);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,197.0406);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,82.37582);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,12.96004);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,6.18835);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,6.844003);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,2.624065);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,29864.92);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,7031.816);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,3533.798);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,2614.403);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,992.8584);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,425.0381);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,78.06427);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,47.38037);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,9.183731);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,6.18835);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,6.844003);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,2.624065);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(105593);

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
