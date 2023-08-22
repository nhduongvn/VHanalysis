void Aplanarity_algo_16_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Tue Aug 22 09:17:34 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-2.840682,1.133333,5.226685);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLogy();
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,13880.33);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,1964.91);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,437.8828);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,122.721);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,40.55104);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,15.81258);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,7.473472);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,3.636912);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,1.389928);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.9306031);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.463744);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.3933989);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,0.04378787);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,0.2689952);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.05669421);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,0.01849631);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,41.55094);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,15.48232);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,7.279339);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,3.898168);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,2.182832);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,1.374027);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.9423853);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.7325711);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.4451693);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.296847);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.2392351);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.2007396);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,0.06685903);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,0.23827);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.04251877);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,0.01849631);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(335691);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->Draw("HIST");
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
