void Aplanarity_algo_16_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Tue Aug 22 09:17:34 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-0.9397374,1.133333,7.422955);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLogy();
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,2037685);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,325837.2);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,73253.15);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,16439.86);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,3387.276);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,988.6275);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,115.2781);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,94.8332);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,39.72224);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,13.66969);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,11.33446);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,3.716741);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,18.38211);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,1.576021);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,32871.8);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,15440.34);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,4593.294);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,2155.528);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,770.082);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,387.5699);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,41.24528);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,38.67387);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,23.26362);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,13.66969);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,11.33446);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,3.716741);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,14.85175);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,1.576021);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(121336);

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
